###############################################################################
 #
 # Copyright (C) 2022-2023 Maxim Integrated Products, Inc. All Rights Reserved.
 # (now owned by Analog Devices, Inc.),
 # Copyright (C) 2023 Analog Devices, Inc. All Rights Reserved. This software
 # is proprietary to Analog Devices, Inc. and its licensors.
 #
 # Licensed under the Apache License, Version 2.0 (the "License");
 # you may not use this file except in compliance with the License.
 # You may obtain a copy of the License at
 #
 #     http://www.apache.org/licenses/LICENSE-2.0
 #
 # Unless required by applicable law or agreed to in writing, software
 # distributed under the License is distributed on an "AS IS" BASIS,
 # WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 # See the License for the specific language governing permissions and
 # limitations under the License.
 #
 ##############################################################################

"""
Utility functions to generate embeddings and I/O operations
"""

import os
import csv
import copy
from collections import defaultdict
import numpy as np
import scipy
import scipy.ndimage

import matplotlib

from matplotlib.image import imread
import matplotlib.pyplot as plt
from PIL import Image, ExifTags
import torch
import torchvision
import torchvision.transforms.functional as VF

def load_db(db_path, subj_name_file_path=None):
    """Loads embeddings from binary file to a dictionary
    """
    subj_ids, subj_list, embedding_list = load_embedding_list(db_path)

    if subj_name_file_path:
        subj_name_map = load_subject_map(subj_name_file_path)
    else:
        subj_name_map = {}
        for i in subj_ids:
            subj_name_map[i] = ('%d' % i)

    embedding_db = {}
    for i in range(subj_list.size):
        subj = subj_name_map[subj_list[i]]
        if subj not in embedding_db:
            embedding_db[subj] = {}
            emb_no = 1
        else:
            emb_no = len(embedding_db[subj]) + 1
        embedding_db[subj]['Embedding_%d' % emb_no] = {'emb': embedding_list[i, :], 'img': None}

    return embedding_db


def load_subject_map(path):
    """Loads subject names to a dictionary
    """
    subj_name_map = {}
    with open(path) as file:
        data = csv.reader(file, delimiter=',')
        for row in data:
            subj_name_map[int(row[0])] = row[1]

    return subj_name_map


def load_embedding_list(db_path):
    """Loads embeddings from binary file to lists
    """
    ##########################################
    # The data in order:
    #    1 byte : number of subjects   (S)
    #    2 bytes: length of embeddings (L)
    #    2 bytes: number of embeddings (N)
    #    (L+1)*N bytes: embeddings
    #        1 byte : subject id
    #        L bytes: embedding
    ##########################################

    subj_list = []
    embedding_list = []

    with open(db_path, "rb") as file:
        _ = int.from_bytes(file.read(1), byteorder='big', signed=False) # pylint: disable=invalid-name
        L = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        N = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name

        for _ in range(N):
            subj_list.append(int.from_bytes(file.read(1), byteorder='big', signed=False))
            embedding_list.append(list(file.read(L)))

    subj_list = np.array(subj_list)
    subj_ids = np.unique(subj_list)

    embedding_list = np.array(embedding_list)
    neg_idx = embedding_list > 127
    embedding_list[neg_idx] -= 256

    return subj_ids, subj_list, embedding_list


def equalize_hist(img, percentile=95):
    """Histogram equalization for a given image
    """
    dc = img.ravel().mean() # pylint: disable=invalid-name
    ac = img - dc # pylint: disable=invalid-name
    max_val = np.percentile(np.abs(ac.ravel()), percentile)
    mult = 127 / max_val
    new_img = np.clip(np.round(mult * ac + dc), 0, 255)
    return new_img.astype(np.uint8)


def get_image_rotation(img_path):
    """Reads exif data of the image to get image orientation
    """
    for orientation in ExifTags.TAGS:
        if ExifTags.TAGS[orientation] == 'Orientation':
            break

    image = Image.open(img_path)
    try:
        exif = image._getexif()  # pylint: disable=protected-access
        if exif:
            if orientation in exif:
                return exif[orientation]
    except Exception:  # pylint: disable=broad-except
        print(f'No exif object for {img_path}')

    return 1


def rotate_image(img, img_rot):
    """Rotates image wrt `orientation` value of the exif data
    """
    if img_rot == 1:
        pass
    elif img_rot == 6:
        return np.rot90(img, k=3).copy()
    elif img_rot == 8:
        return np.rot90(img, k=1).copy()
    elif img_rot == 3:
        return np.rot90(img, k=2).copy()
    else:
        print(f'Unknown orientation code: {img_rot}. Image will be used as is.')

    return img


# pylint: disable=too-many-statements
def append_db_file_from_path(folder_path, face_detector, ai85_adapter, db_dict=None, verbose=True,
                             preview_images=False):
    """Creates embeddings for each image in the given folder and appends to the existing embedding
    dictionary
    """
    existing_db_dict = db_dict
    db_dict = defaultdict(dict)
    img_list = []
    subj_id = 0
    subject_list = sorted(os.listdir(folder_path))    
    for subject in subject_list:
        print(f'Processing subject: {subject}')
        img_id = 0
        subject_path = os.path.join(folder_path, subject)
        if not os.path.isdir(subject_path):
            continue
        if not os.listdir(subject_path):
            subj_id += 1
        for file in os.listdir(subject_path):
            print(f'\tFile: {file}')
            img_path = os.path.join(subject_path, file)
            img_rot = get_image_rotation(img_path)
            img = imread(img_path)
            img = rotate_image(img, img_rot)
            img = img.astype(np.float32)
            
            #if img.dtype == np.float32:
            #    img = (255 * img).astype(np.uint8)
            img = get_face_image(img, face_detector)
            if img is not None:
                img = ((img+1)*128)
                img = (img.squeeze()).detach().cpu().numpy()
                img = img.astype(np.uint8)
                img = img.transpose([1, 2, 0])
                #print(img.min(), img.max())
                plt.imsave(subject+'test.png', img)
                if img.shape == (160, 120, 3):
                    img_id += 1
                    #img = equalize_hist(img, 99)                    
                    current_embedding = ai85_adapter.get_network_out(img)[:, :, 0, 0]
                    current_embedding = current_embedding.astype(np.int8).flatten()
                    img_list.append(img)
                    db_dict[subject]['Embedding_%d' % img_id] = {'emb': current_embedding,
                                                                 'img': img}

    # Summary and determination of max photo per user
    max_photo = 0
    if verbose:
        if existing_db_dict:
            print('New entries for the DB')
        else:
            print('A new DB with')
    for idx, subj in enumerate(db_dict.keys()):
        if verbose:
            print(f'\t{subj}: {len(db_dict[subj].keys())} images')
        if len(list(db_dict[subj].keys())) > max_photo:
            max_photo = len(list(db_dict[subj].keys()))
    if verbose:
        if existing_db_dict:
            print('have been appended!')
        else:
            print('has been created!')

    # Preview image formation
    preview = None
    if preview_images:
        preview = 125*np.ones((len(db_dict.keys()) * 160, max_photo * 120, 3))
        for idx, subj in enumerate(db_dict.keys()):
            start_y = 0 + idx * 160
            start_x = 0
            for img_ind in db_dict[subj].keys():
                preview[start_y:start_y+160, start_x:start_x+120, :] = db_dict[subj][img_ind]['img']
                start_x += 120
        preview = preview.astype(np.uint8)
        if verbose:
            plt.figure(figsize=(1.5*max_photo, 2*len(db_dict.keys())))
            plt.imshow(preview)
            plt.show()

    # Merge the new db and existing one if append mode is called
    if existing_db_dict:
        integrated_db = copy.deepcopy(existing_db_dict)
        for subj in db_dict.keys():
            # if same subject exists in both dictionaries
            if subj in existing_db_dict.keys():
                img_id = max(list(existing_db_dict[subj].keys())) + 1
                for ind in db_dict[subj].keys():
                    integrated_db[subj]['Embedding_%d' % img_id] = integrated_db[subj][ind]
                    img_id += 1
            else:
                integrated_db[subj] = integrated_db[subj]
        db_dict = integrated_db

    return db_dict, preview
def coord_calc(box):
    box[0] = torch.clamp(box[0], min=0) * 168
    box[2] = torch.clamp(box[2], min=0) * 168
    box[1] = torch.clamp(box[1], min=0) * 224
    box[3] = torch.clamp(box[3], min=0) * 224
    
    top = torch.Tensor.int(box[1])
    left = torch.Tensor.int(box[0])
    height = torch.Tensor.int(box[3]-box[1])
    width = torch.Tensor.int(box[2]-box[0])
    return top, left, height, width

def get_face_image(img, face_detector, min_prob=0.25):
    """Detects face on the given image
    """
    device = torch.device('cuda:0' if torch.cuda.is_available() else 'cpu')
    img = torch.Tensor(img.transpose([2, 0, 1])).to(device).unsqueeze(0)
    
    img = Normalize_Img(img)
    img = VF.resize(img, size=[224, 168])
    with torch.no_grad():
        locs, scores = face_detector.get_network_out(img)
        all_images_boxes, all_images_labels, all_images_scores = \
                face_detector.simulator.model.detect_objects(locs, scores,
                                 min_score=min_prob,
                                 max_overlap=1,
                                 top_k= 1)
        if all_images_labels[0][0] == 1:
            pbox = all_images_boxes[0][0]
            top, left, height, width = coord_calc(pbox)
            img = VF.resized_crop(img= img, top=top, left=left, height=height, width=width, size=[160,120])
            return img

    return None


def create_data_arrs(emb_db, add_prev_imgs):
    """Converts embedding dict to lists
    """
    subject_names = list(emb_db.keys())

    subject_arr = []
    embedding_arr = []
    img_arr = []

    for i, subj in enumerate(emb_db.keys()):
        for emb_key in emb_db[subj].keys():
            subject_arr.append(i)
            embedding_arr.append(emb_db[subj][emb_key]['emb'])
            if add_prev_imgs:
                if emb_db[subj][emb_key]['img'] is not None:
                    img_arr.append(emb_db[subj][emb_key]['img'].flatten())
                else:
                    img_arr.append(np.zeros((160 * 120 * 3,), np.uint8))

    return subject_names, np.array(subject_arr), np.array(embedding_arr), np.array(img_arr)


def save_embedding_db(emb_db, db_path, add_prev_imgs=False):
    """
    Saves embedding database in binary format

    The data in order:
        1 byte : number of subjects (S)
        2 bytes: length of embeddings (L)
        2 bytes: number of embeddings (N)
        2 bytes: length of image width (W)
        2 bytes: length of image height (H)
        2 bytes: length of subject names (K)
        K bytes: subject names
        (L+1)*N bytes: embeddings
            1 byte : subject id
            L bytes: embedding
        (W*H*3)*N bytes: image
    """

    subject_names, subject_arr, embedding_arr, img_arr = create_data_arrs(emb_db, add_prev_imgs)

    subject_arr = subject_arr.astype(np.uint8)
    embedding_arr = embedding_arr.astype(np.int8)

    names_str = '  '.join(subject_names)
    names_bytes = bytearray()
    names_bytes.extend(map(ord, names_str))

    S = np.unique(subject_arr).size # pylint: disable=invalid-name
    K = len(names_bytes) # pylint: disable=invalid-name
    N, L = embedding_arr.shape # pylint: disable=invalid-name
    W = 120 # pylint: disable=invalid-name
    H = 160 # pylint: disable=invalid-name

    db_data = bytearray(np.uint8([S]))
    db_data.extend(L.to_bytes(2, 'big', signed=False))
    db_data.extend(N.to_bytes(2, 'big', signed=False))
    db_data.extend(W.to_bytes(2, 'big', signed=False))
    db_data.extend(H.to_bytes(2, 'big', signed=False))

    db_data.extend(K.to_bytes(2, 'big', signed=False))
    db_data.extend(names_bytes)

    for i, emb in enumerate(embedding_arr):
        db_data.extend(bytearray([subject_arr[i]]))
        db_data.extend(bytearray(emb))

    if add_prev_imgs:
        for img in img_arr:
            db_data.extend(bytearray(img))

    with open(db_path, 'wb') as file:
        file.write(db_data)

    print(f'Binary embedding file is saved to "{db_path}".')


def load_data_arrs(db_path, load_img_prevs=True):
    """Loads embeddings from binary file to lists
    """

    with open(db_path, "rb") as file:
        _ = int.from_bytes(file.read(1), byteorder='big', signed=False) # pylint: disable=invalid-name
        L = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        N = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        W = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        H = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        K = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name

        subject_names_str = file.read(K).decode('ascii')
        subject_names_list = subject_names_str.split('  ')

        subj_list = []
        embedding_list = []

        for _ in range(N):
            subj_list.append(int.from_bytes(file.read(1), byteorder='big', signed=False))
            embedding_list.append(list(file.read(L)))

        embedding_list = np.array(embedding_list).astype(np.int8)
        neg_idx = embedding_list > 127
        embedding_list[neg_idx] -= 256

        img_arr = None
        if load_img_prevs:
            img_bin = file.read(N * W * H * 3)
            if img_bin:
                img_arr = np.array(list(img_bin)).astype(np.uint8)
                img_arr = img_arr.reshape(N, H, W, 3)

    return subject_names_list, subj_list, embedding_list, img_arr


def load_embedding_db(db_path):
    """
    Loads embeddings from binary file to dictionary

    The data in order:
        1 byte : number of subjects (S)
        2 bytes: length of embeddings (L)
        2 bytes: number of embeddings (N)
        2 bytes: length of image width (W)
        2 bytes: length of image height (H)
        2 bytes: length of subject names (K)
        K bytes: subject names
        (L+1)*N bytes: embeddings
            1 byte : subject id
            L bytes: embedding
        (W*H*3)*N bytes: image
    """

    subject_names_list, subj_list, embedding_list, img_arr = load_data_arrs(db_path)

    emb_db = {}
    for subj in subject_names_list:
        emb_db[subj] = {}

    for i, _ in enumerate(subj_list):
        subj_name = subject_names_list[subj_list[i]]
        emb = embedding_list[i]
        if img_arr is None:
            img = None
        else:
            img = img_arr[i, :, :, :]
        emb_name = 'Embedding_%d' % (len(emb_db[subj_name]) + 1)

        emb_db[subj_name][emb_name] = {'emb': emb, 'img': img}

    return emb_db


def create_embeddings_include_file(db_folder, db_filename, include_folder):
    """Converts binary embedding to a .h file to compile as a C code.
    """
    db_path = os.path.join(db_folder, db_filename + '.bin')
    data_bin = bytearray()

    with open(db_path, "rb") as file:
        S = int.from_bytes(file.read(1), byteorder='big', signed=False) # pylint: disable=invalid-name
        L = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        N = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        W = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        H = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name
        K = int.from_bytes(file.read(2), byteorder='big', signed=False) # pylint: disable=invalid-name

        subject_names_str = file.read(K).decode('ascii')
        subject_names_list = subject_names_str.split('  ')
        subject_names_str = '\0'.join(subject_names_list) + '\0'

        names_bytes = bytearray()
        names_bytes.extend(map(ord, subject_names_str))

        K = len(subject_names_str) # pylint: disable=invalid-name

        data_bin.extend(S.to_bytes(1, 'little', signed=False))
        data_bin.extend(L.to_bytes(2, 'little', signed=False))
        data_bin.extend(N.to_bytes(2, 'little', signed=False))
        data_bin.extend(W.to_bytes(2, 'little', signed=False))
        data_bin.extend(H.to_bytes(2, 'little', signed=False))
        data_bin.extend(K.to_bytes(2, 'little', signed=False))

        data_bin.extend(names_bytes)

        for _ in range((L+1)*N):
            next_d = file.read(1)
            data_bin.extend(next_d)

    data_arr = []
    data_line = []
    for next_d in data_bin:
        data_line.append(f'0x{next_d:02x}')
        if (len(data_line) % 18) == 0:
            data_arr.append(','.join(data_line))
            data_line.clear()

    data_arr.append(','.join(data_line))
    data = ', \\\n  '.join(data_arr)

    db_h_path = os.path.join(include_folder, db_filename + '.h')
    with open(db_h_path, 'w') as h_file:
        h_file.write('#define EMBEDDINGS \\\n{ \\\n  ')
        h_file.write(data)
        h_file.write(' \\\n}\n')

    print(f'Embedding file is saved to {db_h_path}')

def Normalize_Img(img):
    return img.sub(128).clamp(min=-128, max=127).div(128.)
