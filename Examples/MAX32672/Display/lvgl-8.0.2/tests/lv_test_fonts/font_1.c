#include "../../lvgl.h"

/*******************************************************************************
 * Size: 8 px
 * Bpp: 4
 * Opts: --bpp 4 --size 8 --font ../Montserrat-Medium.ttf -r 0x20-0x7F,0xB0,0x2022 --font ../FontAwesome5-Solid+Brands+Regular.woff -r 61441,61448,61451,61452,61452,61453,61457,61459,61461,61465,61468,61473,61478,61479,61480,61502,61512,61515,61516,61517,61521,61522,61523,61524,61543,61544,61550,61552,61553,61556,61559,61560,61561,61563,61587,61589,61636,61637,61639,61671,61674,61683,61724,61732,61787,61931,62016,62017,62018,62019,62020,62087,62099,62212,62189,62810,63426,63650 --format lvgl -o ..\generated_fonts/font_1.c
 ******************************************************************************/

#ifndef FONT_1
#define FONT_1 1
#endif

#if FONT_1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x58, 0xf, 0x11, 0x32, 0xb2, 0x80,

    /* U+22 "\"" */
    0x73, 0x90, 0x10, 0x72, 0x90,

    /* U+23 "#" */
    0x4, 0x52, 0x60, 0x4f, 0xc9, 0xc3, 0x43, 0x9c, 0x83, 0x64, 0x8b, 0xa1, 0x65, 0x85, 0x81,

    /* U+24 "$" */
    0x0, 0x40, 0x0, 0xad, 0x68, 0x97, 0x56, 0x89, 0xf9, 0x60, 0x42, 0x17, 0x21, 0x69, 0x7e, 0x96,
    0x96, 0xcc,

    /* U+25 "%" */
    0x58, 0x70, 0x63, 0xd, 0x8f, 0x30, 0x30, 0xa7, 0xdb, 0x7, 0x12, 0x7d, 0xa1, 0x57, 0x6, 0xa2,
    0xfa, 0x40,

    /* U+26 "&" */
    0x9, 0x98, 0x2, 0x2a, 0x30, 0x0, 0x97, 0xc1, 0x4, 0xd6, 0xc4, 0x2, 0xe6, 0xc, 0xc4, 0x75, 0x33,
    0x10,

    /* U+27 "'" */
    0x72, 0x0, 0x39, 0x0,

    /* U+28 "(" */
    0x8, 0x20, 0x32, 0x11, 0x1, 0x10, 0x8, 0x80, 0x22, 0x0, 0x19, 0x0,

    /* U+29 ")" */
    0x73, 0x6a, 0x12, 0x7, 0x7, 0x12, 0x6a,

    /* U+2A "*" */
    0x48, 0x40, 0x26, 0xc0, 0x7b, 0x90,

    /* U+2B "+" */
    0x0, 0x10, 0x6, 0x80, 0x2, 0x4b, 0xc8, 0xa4, 0xbc, 0x88,

    /* U+2C "," */
    0x0, 0x3a, 0x82, 0x0,

    /* U+2D "-" */
    0x5a, 0x60,

    /* U+2E "." */
    0x0, 0x3a, 0x0,

    /* U+2F "/" */
    0x0, 0xa8, 0x2, 0x22, 0x0, 0x55, 0x40, 0x8, 0x88, 0x0, 0x4c, 0x0, 0xb5, 0xc0, 0x2, 0x2, 0x0,

    /* U+30 "0" */
    0xa, 0xbb, 0x13, 0x65, 0xd4, 0xfa, 0x80, 0xbf, 0xa8, 0xb, 0xb6, 0x5d, 0x48,

    /* U+31 "1" */
    0x9e, 0x29, 0x40, 0xf, 0xf0,

    /* U+32 "2" */
    0x6a, 0xb9, 0x6, 0xab, 0x50, 0x9, 0x50, 0x1, 0x5, 0x1, 0x2d, 0xb4, 0x60,

    /* U+33 "3" */
    0x7a, 0xbe, 0x7, 0xa1, 0xc0, 0x2, 0x5, 0x80, 0x12, 0x8c, 0xa2, 0xa8, 0x64,

    /* U+34 "4" */
    0x0, 0x24, 0x80, 0x47, 0xd2, 0x0, 0x18, 0xa8, 0x20, 0x90, 0xa5, 0x92, 0x8b, 0xa4, 0x82,

    /* U+35 "5" */
    0x3d, 0xaa, 0x3, 0x5d, 0x50, 0x1, 0xb5, 0x0, 0xb7, 0x42, 0x6f, 0x54, 0x33, 0x0,

    /* U+36 "6" */
    0x9, 0xaa, 0x1b, 0x75, 0x50, 0xff, 0xd3, 0x45, 0xe1, 0x31, 0x6, 0x19, 0x8e,

    /* U+37 "7" */
    0xca, 0xa6, 0xb5, 0xd5, 0x5, 0x9c, 0x1a, 0xc0, 0x2a, 0x70, 0x3, 0x58, 0x0,

    /* U+38 "8" */
    0x1a, 0xa5, 0x92, 0x65, 0x7d, 0x25, 0xd4, 0xdc, 0xca, 0xb2, 0x2f, 0xa6, 0xfc,

    /* U+39 "9" */
    0x4a, 0x99, 0x7, 0xdc, 0x82, 0xc5, 0xc8, 0x69, 0xd4, 0x86, 0x9d, 0x58, 0xa8,

    /* U+3A ":" */
    0x74, 0x74, 0x0, 0x3a, 0x0,

    /* U+3B ";" */
    0x74, 0x74, 0x0, 0x3a, 0x8b, 0xb1, 0x0,

    /* U+3C "<" */
    0x0, 0x84, 0x0, 0x93, 0x20, 0x58, 0xa8, 0x5, 0xd5, 0x91, 0x1, 0x69, 0x10,

    /* U+3D "=" */
    0x49, 0x98, 0x52, 0x66, 0x14, 0x99, 0x84,

    /* U+3E ">" */
    0x10, 0xc, 0x53, 0x4, 0x7, 0x3d, 0xe2, 0x92, 0x5a, 0x29, 0x28, 0x0,

    /* U+3F "?" */
    0x6a, 0xb9, 0x6, 0xab, 0x50, 0xa, 0xa0, 0x2, 0x94, 0x0, 0x15, 0x80, 0x0,

    /* U+40 "@" */
    0x3, 0x87, 0x74, 0x28, 0x15, 0xe6, 0xf2, 0x12, 0xd4, 0x7d, 0x4b, 0x2e, 0x80, 0x7e, 0xa8, 0xf9,
    0x91, 0xc7, 0x15, 0xe0, 0xf6, 0x53, 0x0,

    /* U+41 "A" */
    0x0, 0xae, 0x40, 0x31, 0x9c, 0x20, 0x14, 0x4c, 0xa0, 0x0, 0x8d, 0x14, 0x82, 0x1f, 0x93, 0x2e,
    0x80,

    /* U+42 "B" */
    0x2d, 0x99, 0x58, 0x83, 0xcc, 0x8d, 0x41, 0xe6, 0x95, 0x40, 0xf3, 0x5d, 0x0, 0xf3, 0x28, 0xd0,

    /* U+43 "C" */
    0x7, 0xba, 0xa1, 0x2f, 0x5d, 0x50, 0xb2, 0x80, 0x36, 0x50, 0x6, 0x5e, 0xba, 0xa1, 0x0,

    /* U+44 "D" */
    0x2e, 0xab, 0xb1, 0x80, 0x12, 0xae, 0xbc, 0x3, 0x85, 0x48, 0x3, 0xa, 0x90, 0x25, 0x5d, 0x78,
    0x0,

    /* U+45 "E" */
    0x2e, 0xaa, 0x40, 0x25, 0x52, 0x1, 0xea, 0x88, 0xf, 0x54, 0x40, 0x4a, 0xa4, 0x80,

    /* U+46 "F" */
    0x2e, 0xaa, 0x40, 0x25, 0x52, 0x1, 0x2a, 0x88, 0x9, 0x54, 0x40, 0xe,

    /* U+47 "G" */
    0x7, 0xba, 0xa1, 0x2f, 0x5d, 0x50, 0xb2, 0x80, 0x4, 0x79, 0x40, 0x6, 0x45, 0xeb, 0xae, 0x40,

    /* U+48 "H" */
    0x2a, 0x0, 0x15, 0x0, 0x7c, 0x95, 0x49, 0x0, 0x25, 0x52, 0x40, 0x3e,

    /* U+49 "I" */
    0x2a, 0x0, 0xfc,

    /* U+4A "J" */
    0x5, 0xad, 0x50, 0x5a, 0xa0, 0x7, 0xf7, 0x88, 0x4d, 0x1a, 0x0,

    /* U+4B "K" */
    0x2a, 0x1, 0xa2, 0x0, 0xd, 0x41, 0x3, 0x6e, 0x10, 0x0, 0x77, 0x94, 0x0, 0xe3, 0x3e, 0x80,

    /* U+4C "L" */
    0x2a, 0x0, 0xff, 0xe3, 0xa5, 0x51, 0xc0,

    /* U+4D "M" */
    0x2c, 0x0, 0x8f, 0x0, 0x5c, 0x1, 0x0, 0x4, 0xe2, 0x8f, 0x0, 0xa2, 0x45, 0x0, 0x21, 0x89, 0x0,
    0x0,

    /* U+4E "N" */
    0x2d, 0x10, 0x2a, 0x1, 0xa0, 0xc, 0xdf, 0x60, 0x19, 0x3b, 0x80, 0x19, 0x6c, 0x0,

    /* U+4F "O" */
    0x7, 0xbb, 0x8c, 0x17, 0xae, 0xd5, 0xe3, 0x94, 0x0, 0x14, 0x5c, 0xa0, 0x0, 0xa2, 0xab, 0xae,
    0xd5, 0xe2,

    /* U+50 "P" */
    0x2e, 0xaa, 0x48, 0x1, 0x2a, 0x82, 0x80, 0x18, 0x9c, 0x12, 0xa9, 0x86, 0x9, 0x54, 0x60,

    /* U+51 "Q" */
    0x7, 0xbb, 0x8c, 0x17, 0xae, 0xd5, 0xe3, 0x94, 0x0, 0x14, 0x5c, 0xa0, 0x9, 0x15, 0x5d, 0x77,
    0x78, 0x83, 0xdc, 0x15, 0x18,

    /* U+52 "R" */
    0x2e, 0xaa, 0x48, 0x1, 0x2a, 0x82, 0x80, 0x18, 0x9c, 0x1e, 0xb0, 0x8c, 0x1e, 0xb4, 0x84,

    /* U+53 "S" */
    0x2a, 0xa8, 0x97, 0x2a, 0x84, 0xfd, 0x30, 0x21, 0x13, 0x90, 0xb5, 0x4e, 0xa0,

    /* U+54 "T" */
    0xaa, 0x75, 0x35, 0x50, 0xa9, 0x80, 0x3f, 0xf8, 0x60,

    /* U+55 "U" */
    0x39, 0x0, 0x24, 0x0, 0x7f, 0xf0, 0x9, 0x40, 0x5, 0xc3, 0x57, 0x58, 0xc0,

    /* U+56 "V" */
    0xb, 0x10, 0x2, 0xb8, 0x7c, 0x0, 0x39, 0xc1, 0x14, 0x57, 0x0, 0x28, 0x84, 0xb8, 0x4, 0x8b, 0x60,
    0x0,

    /* U+57 "W" */
    0x94, 0x0, 0x78, 0x81, 0xcd, 0x70, 0x33, 0x41, 0x54, 0x36, 0xd, 0x9c, 0x2, 0x30, 0xb9, 0x30,
    0x39, 0xc0, 0x3, 0x32, 0x82, 0x99, 0x80,

    /* U+58 "X" */
    0x58, 0x2, 0xa0, 0x50, 0x79, 0xb0, 0x4, 0x43, 0x84, 0x1, 0x57, 0xc2, 0xf, 0x89, 0x34, 0x0,

    /* U+59 "Y" */
    0xa, 0x20, 0x5, 0x80, 0x2e, 0x42, 0x60, 0x0, 0x3d, 0x62, 0x60, 0x12, 0xb4, 0x0, 0x70, 0x80,
    0x40,

    /* U+5A "Z" */
    0x6a, 0xa6, 0x68, 0x35, 0x5b, 0xe0, 0x5, 0x52, 0x20, 0xb, 0x82, 0x0, 0x43, 0x4d, 0x50, 0x0,

    /* U+5B "[" */
    0x2d, 0x40, 0x44, 0x0, 0x7f, 0xf0, 0x51, 0x0,

    /* U+5C "\\" */
    0x19, 0x0, 0x84, 0xc0, 0x37, 0xa8, 0x4, 0xbe, 0x1, 0x8c, 0x40, 0x2a, 0x60, 0x8, 0xf4, 0x0,

    /* U+5D "]" */
    0x8c, 0x80, 0xf, 0xe8, 0x0,

    /* U+5E "^" */
    0x3, 0xc0, 0xa, 0xa1, 0x40, 0xb9, 0x30, 0x0,

    /* U+5F "_" */
    0x77, 0xc0,

    /* U+60 "`" */
    0x6, 0x60,

    /* U+61 "a" */
    0x29, 0x94, 0x0, 0x42, 0xa1, 0x5b, 0x2, 0x2b, 0xf9, 0x10,

    /* U+62 "b" */
    0x48, 0x0, 0xff, 0x92, 0xad, 0x40, 0xd, 0x57, 0x20, 0x1f, 0x9a, 0xa9, 0x20,

    /* U+63 "c" */
    0x1a, 0xa8, 0x67, 0xaa, 0x82, 0x1, 0xd3, 0xd5, 0x41,

    /* U+64 "d" */
    0x0, 0xd6, 0x1, 0xc3, 0x55, 0x4, 0x75, 0x48, 0x6, 0x10, 0x8e, 0x9b, 0x0,

    /* U+65 "e" */
    0x19, 0x98, 0x60, 0x4, 0x4e, 0x39, 0x12, 0xd3, 0xf5, 0x41,

    /* U+66 "f" */
    0xa, 0xa0, 0x10, 0x50, 0x5b, 0xb8, 0x2d, 0x1c, 0x3, 0xf8,

    /* U+67 "g" */
    0x1a, 0x99, 0x5c, 0x74, 0xc3, 0x80, 0x46, 0x11, 0xd5, 0xe, 0x4, 0x61, 0x0,

    /* U+68 "h" */
    0x48, 0x0, 0xfe, 0x49, 0xb4, 0x5, 0x9a, 0xf0, 0x10, 0x17, 0x0, 0xe0,

    /* U+69 "i" */
    0x37, 0x37, 0x48, 0x0, 0xf0,

    /* U+6A "j" */
    0x3, 0x70, 0x37, 0x3, 0x80, 0xf, 0xe6, 0x8c,

    /* U+6B "k" */
    0x48, 0x0, 0xff, 0xa9, 0x0, 0x72, 0x50, 0x12, 0xa4, 0x0, 0xad, 0xae,

    /* U+6C "l" */
    0x48, 0x0, 0xff, 0x0,

    /* U+6D "m" */
    0x4c, 0x9b, 0x89, 0xb4, 0x5, 0x98, 0x39, 0xbf, 0x1, 0x1, 0x10, 0x1, 0xc0, 0x3f, 0x0,

    /* U+6E "n" */
    0x4c, 0x9b, 0x40, 0x59, 0xaf, 0x1, 0x1, 0x70, 0xe,

    /* U+6F "o" */
    0x1a, 0xa8, 0x67, 0xaa, 0x6c, 0x3, 0xa7, 0xaa, 0x6c,

    /* U+70 "p" */
    0x4c, 0xab, 0x50, 0x3, 0x55, 0xc8, 0x7, 0xe6, 0xaa, 0x48, 0x1, 0x2a, 0x8a, 0x0,

    /* U+71 "q" */
    0x1a, 0xa4, 0xdc, 0x75, 0x50, 0x3, 0xd1, 0xd5, 0x40, 0x1a, 0xa4, 0x80,

    /* U+72 "r" */
    0x4b, 0xa0, 0x0, 0xd0, 0x0, 0x80, 0x3c,

    /* U+73 "s" */
    0x5b, 0x95, 0xdc, 0xa5, 0x84, 0x44, 0xbc, 0xef, 0x80,

    /* U+74 "t" */
    0x29, 0x0, 0x5a, 0x38, 0x5a, 0x38, 0x7, 0x11, 0x24, 0x0,

    /* U+75 "u" */
    0x57, 0x1, 0xb0, 0xe, 0x1f, 0x2, 0x4, 0x29, 0xa0,

    /* U+76 "v" */
    0xb, 0x0, 0x42, 0x7, 0x38, 0x1a, 0x2, 0xe3, 0xf0, 0x5, 0xb4, 0xa0,

    /* U+77 "w" */
    0xb0, 0x7, 0x10, 0x50, 0x72, 0xa9, 0xe8, 0x88, 0xb, 0xfe, 0x92, 0xaa, 0x0, 0xc, 0x83, 0xc, 0x80,

    /* U+78 "x" */
    0x67, 0x1b, 0x6, 0xea, 0xa0, 0x0, 0xc0, 0xc1, 0xfe, 0xa4, 0x0,

    /* U+79 "y" */
    0xb, 0x10, 0x83, 0x8, 0x91, 0x23, 0x3, 0x2b, 0x90, 0xb, 0x80, 0xc0, 0x15, 0xf0, 0x0,

    /* U+7A "z" */
    0x59, 0xbb, 0x2c, 0x5, 0x5, 0x48, 0xcb, 0xdc, 0x0,

    /* U+7B "{" */
    0xa, 0x60, 0x66, 0x0, 0x4a, 0xe0, 0xae, 0x1, 0xcc, 0xc0,

    /* U+7C "|" */
    0x28, 0x0, 0xff, 0xe0, 0x0,

    /* U+7D "}" */
    0x97, 0x9, 0xc0, 0xe, 0x63, 0x6, 0x30, 0xa, 0x70, 0x0,

    /* U+7E "~" */
    0x29, 0x35, 0x17, 0x95, 0xd1,

    /* U+B0 "°" */
    0x26, 0x45, 0x63, 0x57, 0x20,

    /* U+2022 "•" */
    0x0, 0x2e, 0xaf, 0x80,

    /* U+F001 "" */
    0x0, 0xff, 0xe0, 0x13, 0x5f, 0x0, 0x23, 0x75, 0x28, 0x20, 0x7, 0x21, 0x6a, 0x0, 0xd9, 0xd2,
    0xa0, 0x18, 0xc0, 0x3f, 0xab, 0xc2, 0xbc, 0x3, 0x94, 0x0, 0xa0, 0xa, 0xfa,

    /* U+F008 "" */
    0xbd, 0xcc, 0xba, 0xac, 0xdb, 0x32, 0x9f, 0x34, 0x66, 0xdb, 0xe8, 0x1, 0xf9, 0x19, 0xb6, 0xfa,
    0x1b, 0x66, 0x53, 0xe6,

    /* U+F00B "" */
    0x34, 0x14, 0x4c, 0x79, 0x6d, 0x77, 0xb1, 0x50, 0xd1, 0x32, 0x8b, 0x8b, 0xbe, 0x14, 0x32, 0x33,
    0xc9, 0x30, 0xd0, 0xef, 0x4c, 0xa1, 0xa1, 0xde, 0x95, 0x43, 0x44, 0xca,

    /* U+F00C "" */
    0x0, 0xf4, 0xd0, 0x7, 0x4b, 0x5, 0x48, 0x2, 0x59, 0x68, 0x1a, 0x64, 0xcb, 0x41, 0x4a, 0xcc,
    0x5a, 0x0, 0xa9, 0x99, 0x40, 0x10,

    /* U+F00D "" */
    0x63, 0x0, 0x41, 0x56, 0x25, 0x3b, 0x69, 0x5a, 0xca, 0xb, 0x80, 0x14, 0x29, 0x60, 0xb0, 0xc2,
    0x5f, 0x10, 0x0,

    /* U+F011 "" */
    0x0, 0xb1, 0x44, 0x0, 0x3a, 0xe2, 0x7e, 0xe1, 0x20, 0xe0, 0xb, 0x81, 0x4a, 0x0, 0x94, 0x5c,
    0x40, 0x16, 0x80, 0x12, 0x50, 0x31, 0x20, 0xa4, 0x1e, 0x3c, 0x5b, 0x90, 0xfa, 0xd2, 0x4c, 0x0,

    /* U+F013 "" */
    0x0, 0xb3, 0x0, 0x10, 0xc4, 0xc, 0xd1, 0x1, 0x97, 0x70, 0x89, 0xdd, 0x34, 0x3, 0xdc, 0x10, 0xa0,
    0xf, 0xd4, 0x3, 0xdc, 0x10, 0xa9, 0x77, 0x8, 0x9d, 0xd2, 0x31, 0x3, 0x34, 0x40, 0x40,

    /* U+F015 "" */
    0x0, 0xc6, 0x4, 0x40, 0xd, 0x59, 0x51, 0x0, 0x0, 0xe8, 0x48, 0x28, 0x0, 0xfd, 0x46, 0x45, 0xd0,
    0xe2, 0xa, 0x80, 0x8b, 0x10, 0xbe, 0x20, 0x40, 0x2e, 0xb0, 0x8, 0xec, 0xc0, 0x36, 0xa2, 0x1,
    0x11, 0xa0,

    /* U+F019 "" */
    0x0, 0xbf, 0xc0, 0x1f, 0xfc, 0x87, 0xf0, 0x7, 0xb8, 0x1, 0xd8, 0x0, 0xce, 0xf, 0x1c, 0xaa, 0xe8,
    0x78, 0x78, 0x11, 0x43, 0xc0, 0x4, 0x89, 0x80,

    /* U+F01C "" */
    0x5, 0xff, 0xe5, 0x1, 0xbc, 0xff, 0xb2, 0xc6, 0xd8, 0xc0, 0x23, 0x6b, 0x57, 0xf6, 0x6, 0xf7,
    0x50, 0xa, 0x7e, 0x40, 0x22, 0x0, 0xf8, 0x80,

    /* U+F021 "" */
    0x0, 0xf8, 0xc0, 0xaf, 0xfd, 0x67, 0x85, 0x85, 0xdc, 0x3c, 0xb, 0x49, 0x17, 0x40, 0x5, 0x58,
    0x1, 0x22, 0xec, 0xea, 0x84, 0x44, 0x57, 0xbb, 0x42, 0x0, 0x2a, 0x80, 0x2c, 0x6b, 0x6d, 0x1,
    0x85, 0x32, 0x3c, 0x1c, 0x28, 0xcc, 0x40, 0x80,

    /* U+F026 "" */
    0x0, 0xa4, 0xd3, 0x1b, 0x2c, 0xc0, 0x39, 0x50, 0x1, 0x57, 0x60, 0x9, 0x38,

    /* U+F027 "" */
    0x0, 0xa4, 0x0, 0x69, 0x8c, 0x3, 0x96, 0x60, 0x34, 0x1, 0xe4, 0x40, 0x0, 0x6a, 0xee, 0x0, 0x8,
    0x1, 0x38, 0x0,

    /* U+F028 "" */
    0x0, 0xf2, 0xa0, 0x6, 0x90, 0x26, 0xf3, 0x32, 0x63, 0x0, 0x3e, 0x21, 0x96, 0x60, 0x33, 0x25,
    0x70, 0xf, 0xe5, 0x40, 0x0, 0xcc, 0x95, 0xaa, 0xec, 0x1, 0x7c, 0x48, 0x1, 0x38, 0x9, 0xbc, 0xc0,

    /* U+F03E "" */
    0xdf, 0xff, 0x69, 0x7c, 0x0, 0x62, 0x8, 0xb0, 0x4e, 0x40, 0x1, 0xca, 0x58, 0xd8, 0x2, 0xd6,
    0xc0, 0x31, 0x7f, 0xf8, 0x80,

    /* U+F048 "" */
    0x40, 0x8, 0xac, 0x82, 0x34, 0x1, 0x2e, 0x0, 0xe6, 0x0, 0x8c, 0x3, 0x50, 0x80, 0x4f, 0x82, 0x8,
    0x65, 0xec,

    /* U+F04B "" */
    0x0, 0xfb, 0x68, 0x40, 0x31, 0x2f, 0x38, 0x7, 0xa3, 0x50, 0x3, 0x8a, 0xe8, 0x3, 0xfe, 0x2b,
    0xa0, 0xa, 0x35, 0x0, 0x97, 0x9c, 0x2, 0xda, 0x10, 0xc,

    /* U+F04C "" */
    0x9b, 0x90, 0x9b, 0x96, 0x46, 0x6, 0x46, 0x0, 0xff, 0xeb, 0xed, 0xe8, 0x6d, 0xe8,

    /* U+F04D "" */
    0x24, 0x4e, 0x2d, 0xbb, 0xed, 0x0, 0xff, 0xeb, 0xba, 0x27, 0x38,

    /* U+F051 "" */
    0x20, 0x9, 0x36, 0x0, 0xac, 0x1e, 0x40, 0x33, 0x70, 0x6, 0x30, 0x8, 0x68, 0x0, 0x58, 0xe0, 0xd8,
    0x46, 0x80,

    /* U+F052 "" */
    0x0, 0xc4, 0x1, 0xf4, 0x6c, 0x0, 0x73, 0xb8, 0x1d, 0xc0, 0x12, 0xc0, 0x5, 0xa, 0x0, 0xb0, 0xe,
    0xb0, 0x5, 0xbb, 0xf5, 0x80, 0x29, 0xdf, 0xa8, 0x0, 0xa8, 0x9c, 0xa0,

    /* U+F053 "" */
    0x0, 0x98, 0x80, 0xf, 0x2c, 0xf, 0x14, 0x8b, 0x12, 0xa0, 0x83, 0xa0, 0x1, 0xc5, 0xb0, 0x1, 0x62,
    0xb0, 0x0, 0xbd, 0x80,

    /* U+F054 "" */
    0x26, 0x0, 0x9a, 0x5c, 0x0, 0x95, 0xe, 0x0, 0x59, 0x85, 0x0, 0x68, 0xa0, 0x5a, 0xe0, 0xb2, 0xe1,
    0x3, 0x79, 0x0, 0x0,

    /* U+F067 "" */
    0x0, 0x90, 0x3, 0x8e, 0xcc, 0x3, 0x38, 0x38, 0x1, 0xe3, 0x83, 0xa1, 0xe5, 0xd4, 0x15, 0xe7,
    0xbe, 0xc2, 0xff, 0x80, 0x3f, 0x95, 0x14, 0x0,

    /* U+F068 "" */
    0x78, 0x8e, 0x79, 0x77, 0xe9,

    /* U+F06E "" */
    0x0, 0x46, 0x65, 0x0, 0x1, 0xd5, 0xda, 0xf5, 0xd1, 0xd2, 0x84, 0x8e, 0x82, 0xd7, 0x0, 0x40,
    0x80, 0x6a, 0x28, 0xe8, 0xe8, 0x2d, 0x1d, 0x5e, 0xbf, 0x5c, 0x10,

    /* U+F070 "" */
    0x1d, 0x30, 0xf, 0xc3, 0x1b, 0x19, 0x95, 0x10, 0x4, 0xb8, 0xaf, 0x10, 0x3d, 0x40, 0x3, 0xc6,
    0xd, 0xda, 0x82, 0x84, 0x0, 0xb7, 0x52, 0x8, 0x2, 0x0, 0x75, 0x51, 0xb6, 0x48, 0x58, 0x80, 0x2a,
    0x7f, 0x13, 0xd3, 0xc4, 0x2, 0x6c, 0xc3, 0x8d, 0x9c, 0x0,

    /* U+F071 "" */
    0x0, 0xc7, 0xc6, 0x1, 0xfb, 0xc7, 0xc0, 0x3e, 0x63, 0x39, 0x80, 0x3d, 0x5, 0x85, 0x0, 0x1d, 0x2,
    0x60, 0x63, 0x0, 0x11, 0x38, 0xb, 0x8, 0x39, 0x0, 0x24, 0x0, 0x28, 0x20, 0x8, 0x0, 0x30, 0x0,
    0x74, 0x40, 0xe, 0x0,

    /* U+F074 "" */
    0x0, 0xf1, 0x2, 0x20, 0x2, 0x4d, 0x5a, 0xbb, 0xe, 0x58, 0x47, 0x70, 0xf4, 0x78, 0xf0, 0x0, 0xa0,
    0xa0, 0x17, 0x70, 0x74, 0xf8, 0xf2, 0xaf, 0x6, 0xec, 0x10, 0x88, 0x0, 0x93, 0x54,

    /* U+F077 "" */
    0x0, 0xfe, 0x4e, 0x40, 0x9, 0x2c, 0xad, 0x1, 0x2d, 0xf1, 0xed, 0x3d, 0xe0, 0x21, 0xfe, 0xe0,
    0x2, 0x8b,

    /* U+F078 "" */
    0x0, 0xfa, 0xe0, 0x2, 0x8b, 0xf7, 0x80, 0x87, 0xf4, 0xb7, 0xc7, 0xb4, 0x4, 0xb2, 0xb4, 0x0,
    0x93, 0x90, 0x0,

    /* U+F079 "" */
    0x0, 0x4a, 0xa, 0x26, 0x0, 0xad, 0xae, 0x7f, 0xeb, 0x10, 0x1, 0xa4, 0x75, 0xdc, 0x20, 0x14, 0x1,
    0xb0, 0x0, 0x40, 0xc0, 0x31, 0xa2, 0x17, 0xc7, 0xd4, 0x1, 0x98, 0xff, 0x6d, 0x82, 0xa8, 0x0,
    0xf7, 0x74, 0x2e, 0xc0, 0x0,

    /* U+F07B "" */
    0xdf, 0xf5, 0x80, 0x62, 0x0, 0x27, 0xfd, 0xa0, 0x1f, 0x10, 0x7, 0xff, 0x10, 0x80, 0x3c, 0x40,

    /* U+F093 "" */
    0x0, 0xa6, 0x40, 0x1d, 0x2c, 0xc9, 0x0, 0x9d, 0x80, 0xc, 0xe0, 0x7, 0xf0, 0x7, 0xb8, 0x7, 0xf3,
    0xc2, 0x0, 0x12, 0x1e, 0x1e, 0x9d, 0xd4, 0xf0, 0x0, 0x17, 0x72, 0xa0, 0x0,

    /* U+F095 "" */
    0x0, 0xff, 0xe1, 0xbf, 0x50, 0x7, 0xa4, 0x50, 0x3, 0xc4, 0x4, 0x1, 0xe8, 0xb, 0x0, 0xe1, 0x91,
    0x70, 0x7d, 0xc4, 0xc2, 0xd0, 0x4, 0x91, 0xd9, 0xe1, 0x80, 0x10, 0x4e, 0x38, 0xc0, 0x0,

    /* U+F0C4 "" */
    0x3, 0x0, 0xf6, 0x76, 0x1, 0x6e, 0x1, 0x51, 0x96, 0x1f, 0x5, 0x60, 0x68, 0x61, 0x2, 0x78, 0x1,
    0x8, 0x1, 0x92, 0xc, 0xb2, 0x0, 0x2a, 0x19, 0x86, 0x90, 0xad, 0xa0, 0x7b, 0xc0,

    /* U+F0C5 "" */
    0x0, 0x7f, 0xce, 0x8e, 0x80, 0x11, 0x9a, 0x30, 0x2, 0xb8, 0x0, 0xff, 0xe5, 0x1c, 0x3b, 0xd0,
    0x9, 0xe, 0xe8, 0x70,

    /* U+F0C7 "" */
    0x24, 0x4c, 0x21, 0xbf, 0xfc, 0x41, 0x77, 0x87, 0xc1, 0x13, 0x1, 0x5, 0xda, 0x2c, 0x3, 0x36,
    0x30, 0x6, 0x45, 0x40, 0x3, 0xa3, 0x73, 0x23, 0x80,

    /* U+F0E7 "" */
    0x7, 0xff, 0x30, 0x5, 0xa0, 0x4, 0x0, 0x98, 0x1, 0x4e, 0x0, 0x20, 0x3, 0xe0, 0x2, 0x5c, 0x42,
    0x40, 0xf, 0x2, 0xe4, 0x1, 0x18, 0xc0, 0x6, 0x5b, 0x0, 0x80,

    /* U+F0EA "" */
    0x79, 0xb9, 0x70, 0x4, 0x33, 0xb4, 0x0, 0x6a, 0x77, 0x18, 0x5, 0xce, 0xeb, 0xb0, 0x7, 0x8c, 0x3,
    0x9d, 0xd0, 0xe0, 0x1c, 0xf1, 0xe0, 0x18,

    /* U+F0F3 "" */
    0x0, 0xb4, 0x3, 0x27, 0x17, 0x18, 0x2, 0x44, 0x7, 0x80, 0x4, 0x1, 0x10, 0x18, 0x7, 0x1c, 0x0,
    0x74, 0x63, 0xbf, 0x6b, 0xc6, 0x3e, 0x43, 0x0,

    /* U+F11C "" */
    0xdf, 0xff, 0xb4, 0xb9, 0xdd, 0xce, 0xee, 0x20, 0xf2, 0x26, 0x91, 0x3c, 0x3, 0xfe, 0xf2, 0xac,
    0xa2, 0xf0, 0x2e, 0x7f, 0xf9, 0xf8, 0x80,

    /* U+F124 "" */
    0x0, 0xff, 0xe2, 0x25, 0xe0, 0x7, 0x2e, 0x5a, 0x38, 0x4, 0xdd, 0x46, 0x0, 0xf0, 0x6, 0xc8, 0x80,
    0x46, 0x80, 0xb, 0x77, 0x18, 0x2, 0x40, 0x26, 0x88, 0x20, 0xa, 0x80, 0x7e, 0x80, 0xf, 0xb4,
    0x98, 0x3, 0xe5, 0xd0, 0xc,

    /* U+F15B "" */
    0xff, 0xa2, 0xc0, 0x39, 0x2c, 0x2, 0x47, 0x30, 0x8, 0xdd, 0xc0, 0x1f, 0xfc, 0xc0,

    /* U+F1EB "" */
    0x0, 0x91, 0xdc, 0x80, 0x1a, 0x7e, 0xef, 0x7c, 0x86, 0x25, 0xfe, 0x63, 0xed, 0x33, 0xb4, 0x2f,
    0xfd, 0x61, 0xbc, 0x43, 0x63, 0x54, 0x1b, 0x12, 0x1, 0xfa, 0x74, 0xaf, 0x10, 0xe, 0xcf, 0x0,
    0xfc, 0xd2, 0x1, 0x80,

    /* U+F240 "" */
    0x24, 0x4f, 0xc1, 0xbf, 0xff, 0x4d, 0x6, 0x2a, 0xfa, 0x14, 0x3c, 0x47, 0xce, 0x0, 0xd9, 0x9f,
    0x42, 0x3f, 0x6e, 0xf8, 0x60,

    /* U+F241 "" */
    0x24, 0x4f, 0xc1, 0xbf, 0xff, 0x4d, 0x6, 0x2a, 0xec, 0xb8, 0x50, 0xf1, 0x1d, 0xe0, 0xe0, 0xd,
    0x99, 0xda, 0x90, 0x8f, 0xdb, 0xbb, 0xbc, 0x60,

    /* U+F242 "" */
    0x24, 0x4f, 0xc1, 0xbf, 0xff, 0x4d, 0x6, 0x2a, 0xd7, 0x74, 0x28, 0x78, 0x8c, 0x1, 0x38, 0x3,
    0x66, 0x64, 0x4a, 0x11, 0xfb, 0x76, 0xff, 0x86, 0x0,

    /* U+F243 "" */
    0x24, 0x4f, 0xc1, 0xbf, 0xff, 0x4d, 0x6, 0x2e, 0x5d, 0xe8, 0x50, 0xf1, 0xf0, 0xc, 0xe0, 0xd,
    0x9d, 0x44, 0xd0, 0x8f, 0xdb, 0xdf, 0xf8, 0x60,

    /* U+F244 "" */
    0x24, 0x4f, 0xc1, 0xbf, 0xff, 0x4c, 0x5, 0xdf, 0xd0, 0xe0, 0x1f, 0x9c, 0x0, 0x89, 0xf4, 0x13,
    0xff, 0xfc, 0x3c,

    /* U+F287 "" */
    0x0, 0xff, 0xe1, 0xbe, 0xc0, 0x7, 0xce, 0x97, 0x80, 0x1a, 0x6c, 0x78, 0x9d, 0x45, 0xc8, 0x1d,
    0x24, 0x72, 0x66, 0xab, 0xc, 0xd8, 0x85, 0xe0, 0x7e, 0xc8, 0x11, 0x0, 0xc, 0x4d, 0x60, 0x1f,
    0x9b, 0xb0, 0x2,

    /* U+F293 "" */
    0x6, 0xdd, 0x61, 0x82, 0x49, 0x71, 0x70, 0x69, 0xa3, 0x59, 0x14, 0x78, 0x9e, 0xc, 0x0, 0xf0,
    0x10, 0x72, 0x31, 0x7f, 0x1, 0xd3, 0x65, 0x91, 0x24, 0x92, 0xd0, 0xd0,

    /* U+F2ED "" */
    0x78, 0xdf, 0xd8, 0x70, 0x2, 0xba, 0x80, 0x3d, 0xdf, 0xbc, 0xc, 0xce, 0x66, 0x0, 0xff, 0xe5,
    0x69, 0x99, 0xcc, 0xda,

    /* U+F304 "" */
    0x0, 0xf3, 0xf1, 0x80, 0x72, 0x60, 0xe8, 0x6, 0x8b, 0x24, 0x90, 0xa, 0x1c, 0x1b, 0xdc, 0x1, 0xe,
    0x0, 0x74, 0x0, 0x3b, 0x80, 0xf, 0x0, 0x14, 0x80, 0x1e, 0x0, 0x38, 0x62, 0x0, 0x1d, 0xdc, 0x70,
    0xe,

    /* U+F55A "" */
    0x0, 0x57, 0xff, 0xb0, 0x2d, 0x41, 0x8c, 0xcc, 0x7, 0x48, 0x0, 0x5d, 0xd2, 0x80, 0x7f, 0xf0,
    0x29, 0x0, 0xb, 0xba, 0x50, 0xa, 0xd4, 0x18, 0xcc, 0xc0, 0x60,

    /* U+F7C2 "" */
    0x7, 0xff, 0xb8, 0x5f, 0x27, 0x60, 0x89, 0xb, 0xb7, 0x84, 0x0, 0x14, 0x64, 0x10, 0xf, 0xfe,
    0x51, 0x80, 0x61, 0x20,

    /* U+F8A2 "" */
    0x0, 0xf8, 0xc0, 0x4, 0x60, 0x11, 0x60, 0x16, 0x51, 0x14, 0xe0, 0xf, 0x16, 0xdd, 0xa8, 0x1,
    0xe2, 0xdb, 0xbb, 0x80, 0xb2, 0x88, 0xb0, 0x80};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0,
     .adv_w        = 0,
     .box_w        = 0,
     .box_h        = 0,
     .ofs_x        = 0,
     .ofs_y        = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 34, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 34, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 11, .adv_w = 90, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 44, .adv_w = 108, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 88, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 80, .adv_w = 27, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 84, .adv_w = 43, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 43, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 103, .adv_w = 51, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 109, .adv_w = 74, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 119, .adv_w = 29, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 123, .adv_w = 49, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 125, .adv_w = 29, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 45, .box_w = 5, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 145, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 47, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 86, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 29, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 29, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 282, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 74, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 302, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 132, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 350, .adv_w = 94, .box_w = 7, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 97, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 93, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 106, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 86, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 99, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 104, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 66, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 122, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 104, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 108, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 108, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 592, .adv_w = 93, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 101, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 91, .box_w = 7, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 144, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 86, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 83, .box_w = 7, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 84, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 43, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 740, .adv_w = 45, .box_w = 5, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 756, .adv_w = 43, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 761, .adv_w = 75, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 769, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 771, .adv_w = 77, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 773, .adv_w = 77, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 87, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 78, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 45, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 851, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 36, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 876, .adv_w = 79, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 135, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 87, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 81, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 87, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 939, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 951, .adv_w = 52, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 967, .adv_w = 53, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 87, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 72, .box_w = 6, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 115, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 72, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1041, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 45, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1060, .adv_w = 38, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1065, .adv_w = 45, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1075, .adv_w = 74, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1080, .adv_w = 54, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1085, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1089, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1118, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1138, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1166, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 88, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1207, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1239, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1271, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1306, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1331, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1355, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1395, .adv_w = 64, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1408, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1428, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1461, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1482, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1501, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1527, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1541, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1552, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1571, .adv_w = 112, .box_w = 9, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1600, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1621, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1642, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1666, .adv_w = 112, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1671, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1698, .adv_w = 160, .box_w = 11, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1741, .adv_w = 144, .box_w = 11, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1779, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1810, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1828, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1847, .adv_w = 160, .box_w = 11, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1885, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1901, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1931, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1963, .adv_w = 112, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1994, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2014, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2039, .adv_w = 80, .box_w = 7, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 2067, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2091, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2116, .adv_w = 144, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2139, .adv_w = 128, .box_w = 10, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2177, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2191, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2227, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2248, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2272, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2297, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2321, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2340, .adv_w = 160, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2375, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2403, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2423, .adv_w = 128, .box_w = 9, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 2458, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2485, .adv_w = 96, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2505, .adv_w = 129, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0,    0x1f72, 0xef51, 0xef58, 0xef5b, 0xef5c, 0xef5d, 0xef61, 0xef63, 0xef65, 0xef69, 0xef6c,
    0xef71, 0xef76, 0xef77, 0xef78, 0xef8e, 0xef98, 0xef9b, 0xef9c, 0xef9d, 0xefa1, 0xefa2, 0xefa3,
    0xefa4, 0xefb7, 0xefb8, 0xefbe, 0xefc0, 0xefc1, 0xefc4, 0xefc7, 0xefc8, 0xefc9, 0xefcb, 0xefe3,
    0xefe5, 0xf014, 0xf015, 0xf017, 0xf037, 0xf03a, 0xf043, 0xf06c, 0xf074, 0xf0ab, 0xf13b, 0xf190,
    0xf191, 0xf192, 0xf193, 0xf194, 0xf1d7, 0xf1e3, 0xf23d, 0xf254, 0xf4aa, 0xf712, 0xf7f2};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {{.range_start       = 32,
                                                .range_length      = 95,
                                                .glyph_id_start    = 1,
                                                .unicode_list      = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length       = 0,
                                                .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start       = 176,
                                                .range_length      = 63475,
                                                .glyph_id_start    = 96,
                                                .unicode_list      = unicode_list_1,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length       = 59,
                                                .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] = {
    0,  0,  1,  2,  0,  3,  4,  5,  2,  6,  7,  8,  9,  10, 9,  10, 11, 12, 0,  13, 14, 15, 16,
    17, 18, 19, 12, 20, 20, 0,  0,  0,  21, 22, 23, 24, 25, 22, 26, 27, 28, 29, 29, 30, 31, 32,
    29, 29, 22, 33, 34, 35, 3,  36, 30, 37, 37, 38, 39, 40, 41, 42, 43, 0,  44, 0,  45, 46, 47,
    48, 49, 50, 51, 45, 52, 52, 53, 48, 45, 45, 46, 46, 54, 55, 56, 57, 51, 58, 58, 59, 58, 60,
    41, 0,  0,  9,  61, 9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] = {
    0,  0,  1,  2,  0,  3,  4,  5,  2,  6,  7,  8,  9,  10, 9,  10, 11, 12, 13, 14, 15, 16, 17,
    12, 18, 19, 20, 21, 21, 0,  0,  0,  22, 23, 24, 25, 23, 25, 25, 25, 23, 25, 25, 26, 25, 25,
    25, 25, 23, 25, 23, 25, 3,  27, 28, 29, 29, 30, 31, 32, 33, 34, 35, 0,  36, 0,  37, 38, 39,
    39, 39, 0,  39, 38, 40, 41, 38, 38, 42, 42, 39, 42, 39, 42, 43, 44, 45, 46, 46, 47, 46, 48,
    0,  0,  35, 9,  49, 9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0};

/*Kern values between classes*/
static const int8_t kern_class_values[] = {
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  1,   0,   0,   0,  0,   1,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   6,   0,   3,  -3, 0,   0,   0,   0,  -7,  -8,  1,  6,   3,
    2,   -5, 1,   6,   0,  5,   1,  4,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  8,   1,
    -1,  0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   3,   0,   -4, 0,   0,   0,  0,   0,
    -3,  2,  3,   0,   0,  -1,  0,  -1,  1,   0,   -1, 0,  -1,  -1,  -3,  0,  0,   0,   0,  -1,  0,
    0,   -2, -2,  0,   0,  -1,  0,  -3,  0,   0,   0,  0,  0,   0,   0,   0,  0,   -1,  -1, 0,   -2,
    0,   -3, 0,   -15, 0,  0,   -3, 0,   3,   4,   0,  0,  -3,  1,   1,   4,  3,   -2,  3,  0,   0,
    -7,  0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  -5,  0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   -3, -2,  -6,  0,   -5, -1, 0,   0,   0,   0,  0,   5,   0,  -4,  -1,
    0,   0,  0,   -2,  0,  0,   -1, -9,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  -10, -1,
    5,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   -5,  0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   4,   0,  1,   0,  0,   -3,  0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  5,   1,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -5,  0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  1,   3,   1,   4,  -1, 0,   0,   3,   -1, -4,  -18, 1,  3,   3,
    0,   -2, 0,   5,   0,  4,   0,  4,   0,   -12, 0,  -2, 4,   0,   4,   -1, 3,   1,   0,  0,   0,
    -1,  0,  0,   -2,  10, 0,   10, 0,   4,   0,   5,  2,  2,   4,   0,   0,  0,   -5,  0,  0,   0,
    0,   0,  -1,  0,   1,  -2,  -2, -3,  1,   0,   -1, 0,  0,   0,   -5,  0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -8,  0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   -7, 0,   -8,  0,  0,   0,  0,   -1,  0,   13, -2, -2,  1,   1,   -1, 0,   -2,  1,  0,   0,
    -7,  0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  -12, 0,   1,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   -8, 0,   8,   0,   0,  -5, 0,   4,   0,   -9, -12, -9,  -3, 4,   0,
    0,   -9, 0,   2,   -3, 0,   -2, 0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  3,   4,
    -16, 0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   6,   0,   1,  0,   0,   0,  0,   0,
    1,   1,  -2,  -3,  0,  0,   0,  -1,  0,   0,   -1, 0,  0,   0,   -3,  0,  -1,  0,   -3, -3,  0,
    -3,  -4, -4,  -2,  0,  -3,  0,  -3,  0,   0,   0,  0,  -1,  0,   0,   1,  0,   1,   -1, 0,   0,
    0,   0,  0,   1,   -1, 0,   0,  0,   -1,  1,   1,  0,  0,   0,   0,   -2, 0,   0,   0,  0,   0,
    0,   0,  0,   0,   2,  -1,  0,  -2,  0,   -2,  0,  0,  -1,  0,   4,   0,  0,   -1,  0,  0,   0,
    0,   0,  0,   0,   -1, -1,  0,  0,   -1,  0,   -1, 0,  0,   0,   0,   0,  0,   0,   0,  0,   -1,
    -1,  0,  -1,  -2,  0,  0,   0,  0,   0,   0,   0,  0,  -1,  0,   -1,  -1, -1,  0,   0,  0,   0,
    0,   0,  0,   0,   0,  -1,  0,  0,   0,   0,   -1, -2, 0,   -2,  0,   -4, -1,  -4,  3,  0,   0,
    -3,  1,  3,   3,   0,  -3,  0,  -2,  0,   0,   -6, 1,  -1,  1,   -7,  1,  0,   0,   0,  -7,  0,
    -7,  -1, -11, -1,  0,  -6,  0,  3,   4,   0,   2,  0,  0,   0,   0,   0,  0,   -2,  -2, 0,   -4,
    0,   0,  0,   -1,  0,  0,   0,  -1,  0,   0,   0,  0,  0,   -1,  -1,  0,  -1,  -2,  0,  0,   0,
    0,   0,  0,   0,   -1, -1,  0,  -1,  -2,  -1,  0,  0,  -1,  0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   -1,  -1, 0,   -2, 0,   -1,  0,   -3, 1,  0,   0,   -2,  1,  1,   1,   0,  0,   0,
    0,   0,  0,   -1,  0,  0,   0,  0,   0,   1,   0,  0,  -1,  0,   -1,  -1, -2,  0,   0,  0,   0,
    0,   0,  0,   1,   0,  -1,  0,  0,   0,   0,   -1, -2, 0,   -2,  0,   4,  -1,  0,   -4, 0,   0,
    3,   -6, -7,  -5,  -3, 1,   0,  -1,  -8,  -2,  0,  -2, 0,   -3,  2,   -2, -8,  0,   -3, 0,   0,
    1,   0,  1,   -1,  0,  1,   0,  -4,  -5,  0,   -6, -3, -3,  -3,  -4,  -2, -3,  0,   -2, -3,  1,
    0,   0,  0,   -1,  0,  0,   0,  1,   0,   1,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    -1,  0,  -1,  0,   0,  -1,  0,  -2,  -3,  -3,  0,  0,  -4,  0,   0,   0,  0,   0,   0,  -1,  0,
    0,   0,  0,   1,   -1, 0,   0,  0,   1,   0,   0,  0,  0,   0,   0,   0,  0,   6,   0,  0,   0,
    0,   0,  0,   1,   0,  0,   0,  -1,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  -2,  0,
    1,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   -1,  0,  0,   0,   -2, 0,   0,
    0,   0,  -6,  -4,  0,  0,   0,  -2,  -6,  0,   0,  -1, 1,   0,   -3,  0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   -2, 0,   0,  -2,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   1,
    0,   -2, 0,   0,   0,  0,   2,  0,   1,   -3,  -3, 0,  -1,  -1,  -2,  0,  0,   0,   0,  0,   0,
    -4,  0,  -1,  0,   -2, -1,  0,  -3,  -3,  -4,  -1, 0,  -3,  0,   -4,  0,  0,   0,   0,  10,  0,
    0,   1,  0,   0,   -2, 0,   1,  0,   -6,  0,   0,  0,  0,   0,   -12, -2, 4,   4,   -1, -5,  0,
    1,   -2, 0,   -6,  -1, -2,  1,  -9,  -1,  2,   0,  2,  -4,  -2,  -5,  -4, -5,  0,   0,  -8,  0,
    7,   0,  0,   -1,  0,  0,   0,  -1,  -1,  -1,  -3, -4, 0,   -12, 0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  -1,  0,
    -1,  -1, -2,  0,   0,  -3,  0,  -1,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   -3, 0,   0,  3,   0,   2,   0,  -3, 1,   -1,  0,   -3, -1,  0,   -2, -1,  -1,
    0,   -2, -2,  0,   0,  -1,  0,  -1,  -2,  -2,  0,  0,  -1,  0,   1,   -1, 0,   -3,  0,  0,   0,
    -3,  0,  -2,  0,   -2, -2,  1,  0,   0,   0,   0,  0,  0,   0,   0,   -3, 1,   0,   -2, 0,   -1,
    -2,  -4, -1,  -1,  -1, 0,   -1, -2,  0,   0,   0,  0,  0,   0,   -1,  -1, -1,  0,   0,  0,   0,
    2,   -1, 0,   -1,  0,  0,   0,  -1,  -2,  -1,  -1, -2, -1,  0,   1,   5,  0,   0,   -3, 0,   -1,
    3,   0,  -1,  -5,  -2, 2,   0,  0,   -6,  -2,  1,  -2, 1,   0,   -1,  -1, -4,  0,   -2, 1,   0,
    0,   -2, 0,   0,   0,  1,   1,  -3,  -2,  0,   -2, -1, -2,  -1,  -1,  0,  -2,  1,   -2, -2,  4,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   1,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  -2,  0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   -1,  0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  -1,  -1,  0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  -2,  0,   0,  -2,  0,
    0,   -1, -1,  0,   0,  0,   0,  -1,  0,   0,   0,  0,  -1,  0,   0,   0,  0,   0,   -1, 0,   0,
    0,   0,  -2,  0,   -3, 0,   0,  0,   -4,  0,   1,  -3, 3,   0,   -1,  -6, 0,   0,   -3, -1,  0,
    -5,  -3, -4,  0,   0,  -6,  -1, -5,  -5,  -6,  0,  -3, 0,   1,   9,   -2, 0,   -3,  -1, 0,   -1,
    -2,  -3, -2,  -5,  -5, -3,  -1, 0,   0,   -1,  0,  0,  0,   0,   -9,  -1, 4,   3,   -3, -5,  0,
    0,   -4, 0,   -6,  -1, -1,  3,  -12, -2,  0,   0,  0,  -8,  -2,  -7,  -1, -9,  0,   0,  -9,  0,
    8,   0,  0,   -1,  0,  0,   0,  0,   -1,  -1,  -5, -1, 0,   -8,  0,   0,  0,   0,   -4, 0,   -1,
    0,   0,  -4,  -6,  0,  0,   -1, -2,  -4,  -1,  0,  -1, 0,   0,   0,   0,  -6,  -1,  -4, -4,  -1,
    -2,  -3, -1,  -2,  0,  -3,  -1, -4,  -2,  0,   -2, -2, -1,  -2,  0,   1,  0,   -1,  -4, 0,   3,
    0,   -2, 0,   0,   0,  0,   2,  0,   1,   -3,  5,  0,  -1,  -1,  -2,  0,  0,   0,   0,  0,   0,
    -4,  0,  -1,  0,   -2, -1,  0,  -3,  -3,  -4,  -1, 0,  -3,  1,   5,   0,  0,   0,   0,  10,  0,
    0,   1,  0,   0,   -2, 0,   1,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    -1,  -3, 0,   0,   0,  0,   0,  -1,  0,   0,   0,  -1, -1,  0,   0,   -3, -1,  0,   0,  -3,  0,
    2,   -1, 0,   0,   0,  0,   0,  0,   1,   0,   0,  0,  0,   2,   3,   1,  -1,  0,   -4, -2,  0,
    4,   -4, -4,  -3,  -3, 5,   2,  1,   -11, -1,  3,  -1, 0,   -1,  1,   -1, -4,  0,   -1, 1,   -2,
    -1,  -4, -1,  0,   0,  4,   3,  0,   -4,  0,   -7, -2, 4,   -2,  -5,  0,  -2,  -4,  -4, -1,  5,
    1,   0,  -2,  0,   -3, 0,   1,  4,   -3,  -5,  -5, -3, 4,   0,   0,   -9, -1,  1,   -2, -1,  -3,
    0,   -3, -5,  -2,  -2, -1,  0,  0,   -3,  -3,  -1, 0,  4,   3,   -1,  -7, 0,   -7,  -2, 0,   -4,
    -7,  0,  -4,  -2,  -4, -4,  3,  0,   0,   -2,  0,  -3, -1,  0,   -1,  -2, 0,   2,   -4, 1,   0,
    0,   -7, 0,   -1,  -3, -2,  -1, -4,  -3,  -4,  -3, 0,  -4,  -1,  -3,  -2, -4,  -1,  0,  0,   0,
    6,   -2, 0,   -4,  -1, 0,   -1, -3,  -3,  -3,  -4, -5, -2,  -3,  3,   0,  -2,  0,   -6, -2,  1,
    3,   -4, -5,  -3,  -4, 4,   -1, 1,   -12, -2,  3,  -3, -2,  -5,  0,   -4, -5,  -2,  -1, -1,  -1,
    -3,  -4, 0,   0,   0,  4,   4,  -1,  -8,  0,   -8, -3, 3,   -5,  -9,  -3, -4,  -5,  -6, -4,  3,
    0,   0,  0,   0,   -2, 0,   0,  1,   -2,  3,   1,  -2, 3,   0,   0,   -4, 0,   0,   0,  0,   0,
    0,   -1, 0,   0,   0,  0,   0,  0,   -1,  0,   0,  0,  0,   1,   4,   0,  0,   -2,  0,  0,   0,
    0,   -1, -1,  -2,  0,  0,   0,  0,   1,   0,   0,  0,  0,   1,   0,   -1, 0,   5,   0,  2,   0,
    0,   -2, 0,   3,   0,  0,   0,  1,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  4,   0,
    4,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   -8, 0,   -1,  2,  0,   4,
    0,   0,  13,  2,   -3, -3,  1,  1,   -1,  0,   -6, 0,  0,   6,   -8,  0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -9,  5,  18,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   -8,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -2,  0,  0,   -2,  -1,  0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   -1,  0,   -3, 0,  0,   0,   0,   0,  1,   17,  -3, -1,  4,
    3,   -3, 1,   0,   0,  1,   1,  -2,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  -17, 4,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   -4,  0,  0,   0,
    -3,  0,  0,   0,   0,  -3,  -1, 0,   0,   0,   -3, 0,  -2,  0,   -6,  0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -9,  0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   -1,  0,  0,   -2,
    0,   -2, 0,   -3,  0,  0,   0,  -2,  1,   -2,  0,  0,  -3,  -1,  -3,  0,  0,   -3,  0,  -1,  0,
    -6,  0,  -1,  0,   0,  -10, -2, -5,  -1,  -5,  0,  0,  -9,  0,   -3,  -1, 0,   0,   0,  0,   0,
    0,   0,  0,   -2,  -2, -1,  -2, 0,   0,   0,   0,  -3, 0,   -3,  2,   -1, 3,   0,   -1, -3,  -1,
    -2,  -2, 0,   -2,  -1, -1,  1,  -3,  0,   0,   0,  0,  -11, -1,  -2,  0,  -3,  0,   -1, -6,  -1,
    0,   0,  -1,  -1,  0,  0,   0,  0,   1,   0,   -1, -2, -1,  2,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  0,   0,   0,   2,  0,   0,   0,  0,   0,
    0,   -3, 0,   -1,  0,  0,   0,  -3,  1,   0,   0,  0,  -3,  -1,  -3,  0,  0,   -4,  0,  -1,  0,
    -6,  0,  0,   0,   0,  -12, 0,  -3,  -5,  -6,  0,  0,  -9,  0,   -1,  -2, 0,   0,   0,  0,   0,
    0,   0,  0,   -1,  -2, -1,  -2, 0,   0,   0,   2,  -2, 0,   4,   6,   -1, -1,  -4,  2,  6,   2,
    3,   -3, 2,   5,   2,  4,   3,  3,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  8,   6,
    -2,  -1, 0,   -1,  10, 6,   10, 0,   0,   0,   1,  0,  0,   5,   0,   0,  -2,  0,   0,  0,   0,
    0,   0,  0,   0,   0,  -1,  0,  0,   0,   0,   0,  0,  0,   0,   2,   0,  0,   0,   0,  -11, -2,
    -1,  -5, -6,  0,   0,  -9,  0,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  -2,  0,   0,  0,   0,  0,   0,   0,   0,  0,  -1,  0,   0,   0,  0,   0,   0,  0,   0,
    2,   0,  0,   0,   0,  -11, -2, -1,  -5,  -6,  0,  0,  -5,  0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  -1, 0,   0,   0,   -3, 1,   0,   -1, 1,   2,
    1,   -4, 0,   0,   -1, 1,   0,  1,   0,   0,   0,  0,  -3,  0,   -1,  -1, -3,  0,   -1, -5,  0,
    8,   -1, 0,   -3,  -1, 0,   -1, -2,  0,   -1,  -4, -3, -2,  0,   0,   0,  -2,  0,   0,  0,   0,
    0,   0,  0,   0,   0,  -1,  0,  0,   0,   0,   0,  0,  0,   0,   2,   0,  0,   0,   0,  -11, -2,
    -1,  -5, -6,  0,   0,  -9,  0,  0,   0,   0,   0,  0,  6,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  -2,  0,   -4, -2,  -1, 4,   -1,  -1,  -5, 0,  -1,  0,   -1,  -3, 0,   3,   0,  1,   0,
    1,   -3, -5,  -2,  0,  -5,  -2, -3,  -5,  -5,  0,  -2, -3,  -2,  -2,  -1, -1,  -2,  -1, 0,   -1,
    0,   2,  0,   2,   -1, 0,   4,  0,   0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  -1,  -1,
    -1,  0,  0,   -3,  0,  -1,  0,  -2,  0,   0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  -8,  0,
    0,   0,  0,   0,   0,  0,   0,  0,   0,   0,   -1, -1, 0,   -2,  0,   0,  0,   0,   -1, 0,   0,
    -2,  -1, 1,   0,   -2, -2,  -1, 0,   -4,  -1,  -3, -1, -2,  0,   -2,  0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -9,  0,  4,   0,   0,   -2, 0,  0,   0,   0,   -2, 0,   -1,  0,  0,   -1,
    0,   0,  -1,  0,   -3, 0,   0,  5,   -2,  -4,  -4, 1,  1,   1,   0,   -4, 1,   2,   1,  4,   1,
    4,   -1, -3,  0,   0,  -5,  0,  0,   -4,  -3,  0,  0,  -3,  0,   -2,  -2, 0,   -2,  0,  -2,  0,
    -1,  2,  0,   -1,  -4, -1,  5,  0,   0,   -1,  0,  -3, 0,   0,   2,   -3, 0,   1,   -1, 1,   0,
    0,   -4, 0,   -1,  0,  0,   -1, 1,   -1,  0,   0,  0,  -5,  -2,  -3,  0,  -4,  0,   0,  -6,  0,
    5,   -1, 0,   -2,  0,  1,   0,  -1,  0,   -1,  -4, 0,  -1,  1,   0,   0,  0,   0,   -1, 0,   0,
    1,   -2, 0,   0,   0,  -2,  -1, 0,   -2,  0,   0,  0,  0,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  -8,  0,  3,   0,   0,   -1, 0,  0,   0,   0,   0,  0,   -1,  -1, 0,   0,
    0,   3,  0,   3,   0,  0,   0,  0,   0,   -8,  -7, 0,  6,   4,   2,   -5, 1,   5,   0,  5,   0,
    3,   0,  0,   0,   0,  0,   0,  0,   0,   0,   0,  0,  7,   0,   0,   0,  0,   0,   0,  0,   0,
    0,   0,  0,   0,   0,  0,   0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes = {
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 61,
    .right_class_cnt     = 49,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {.glyph_bitmap  = gylph_bitmap,
                                         .glyph_dsc     = glyph_dsc,
                                         .cmaps         = cmaps,
                                         .kern_dsc      = &kern_classes,
                                         .kern_scale    = 16,
                                         .cmap_num      = 2,
                                         .bpp           = 4,
                                         .kern_classes  = 1,
                                         .bitmap_format = 1};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t font_1 = {
    .get_glyph_dsc    = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height      = 10, /*The maximum line height required by the font*/
    .base_line        = 2,  /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if FONT_1*/
