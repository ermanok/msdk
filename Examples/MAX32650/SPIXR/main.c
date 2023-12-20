/******************************************************************************
 *
 * Copyright (C) 2022-2023 Maxim Integrated Products, Inc. All Rights Reserved.
 * (now owned by Analog Devices, Inc.),
 * Copyright (C) 2023 Analog Devices, Inc. All Rights Reserved. This software
 * is proprietary to Analog Devices, Inc. and its licensors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

/**
 * @file
 * @brief   SPIXR example writing to External SRAM
 * @details Setup, Initialize, Write, and verifies the data written to SRAM.
 *          This example shows how to configure the External SRAM and
 *          uses the SPIXR library to write and read data from it in Quad mode.
 */

/* **** Includes **** */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "mxc_errors.h"
#include "mxc_sys.h"
#include "spixr.h"

/* **** Definitions **** */
// RAM Vendor Specific Commands
#define A1024_READ 0x03
#define A1024_WRITE 0x02
#define A1024_EQIO 0x38

// RAM Vendor Specific Values
#define BUFFER_SIZE 5000
#define A1024_ADDRESS 0x80000000

/* **** Globals **** */
mxc_spixr_cfg_t init_cfg = {
    0x08, /* Number of bits per character     */
    MXC_SPIXR_QUAD_SDIO, /* SPI Data Width                   */
    0x04, /* num of system clocks between SS active & first serial clock edge     */
    0x08, /* num of system clocks between last serial clock edge and ss inactive  */
    0x10, /* num of system clocks between transactions (read / write)             */
    0x1, /* Baud freq                        */
};

/* **** Functions **** */

/* ************************************************************************** */
int setup(void)
{
    uint8_t quad_cmd = A1024_EQIO; /* pre-defined command to use quad mode         */

    // // Initialize the desired configuration
    if (MXC_SPIXR_Init(&init_cfg) != E_NO_ERROR) {
        printf("\nSPIXR was not initialized properly.\n");
        printf("\nExample Failed\n");
        return E_UNINITIALIZED;
    }

    /* Hide this with function in SPIXR.C later */
    MXC_SPIXR->dma &= ~MXC_S_SPIXR_DMA_RX_DMA_EN_EN;
    MXC_SPIXR->dma |= MXC_F_SPIXR_DMA_TX_FIFO_EN;
    MXC_SPIXR->ctrl3 &= ~MXC_F_SPIXR_CTRL3_DATA_WIDTH;

    // Setup to communicate in quad mode
    MXC_SPIXR_SendCommand(&quad_cmd, 1, 1);
    // Wait until quad cmd is sent
    while (MXC_SPIXR_Busy()) {}

    MXC_SPIXR->ctrl3 &= ~MXC_F_SPIXR_CTRL3_DATA_WIDTH;
    MXC_SPIXR->ctrl3 |= MXC_S_SPIXR_CTRL3_DATA_WIDTH_QUAD;
    MXC_SPIXR->ctrl3 &= ~MXC_F_SPIXR_CTRL3_THREE_WIRE;

    MXC_SPIXR->dma = 0x00; /* Disable the FIFOs for transparent operation  */
    MXC_SPIXR->xmem_ctrl = (0x01 << MXC_F_SPIXR_XMEM_CTRL_XMEM_DCLKS_POS) |
                           (A1024_READ << MXC_F_SPIXR_XMEM_CTRL_XMEM_RD_CMD_POS) |
                           (A1024_WRITE << MXC_F_SPIXR_XMEM_CTRL_XMEM_WR_CMD_POS) |
                           MXC_F_SPIXR_XMEM_CTRL_XMEM_EN;

    return E_NO_ERROR;
}

// *****************************************************************************
int main(void)
{
    // Defining Variable(s) to write & store data to RAM
    uint8_t write_buffer[BUFFER_SIZE], read_buffer[BUFFER_SIZE];
    uint8_t *address = (uint8_t *)A1024_ADDRESS;

    /* Variable to store address of RAM */
    int temp, i;
    int fail = 0;
    unsigned int seed = 0;

    printf("\n***** SPIXR Example communicating with RAM in SPI Quad Mode *****\n");

    // Configure the SPIXR
    printf("Setting up the SPIXR to communicate with RAM in Quad Mode \n");
    if (E_NO_ERROR != setup()) {
        fail += 1;
    }

    // Initialize & write pseudo-random data to be written to the RAM
    printf("Initializing & Writing pseudo-random data to be written to RAM \n");
    for (i = 0; i < BUFFER_SIZE; i++) {
        temp = rand_r(&seed);
        write_buffer[i] = temp;
        // Write the data to the RAM
        *(address + i) = temp;
    }

    // Read data from RAM
    printf("Reading data from RAM and store it inside the read_buffer \n");
    for (i = 0; i < BUFFER_SIZE; i++) {
        read_buffer[i] = *(address + i);
    }

    // Verify data being read from RAM
    if (memcmp(write_buffer, read_buffer, BUFFER_SIZE)) {
        printf("Data is not verified.\n\n");
        fail += 1;
    } else {
        printf("Data is verified.\n\n");
    }

    // Disable the SPIXR
    MXC_SPIXR_Disable();

    if (fail != 0) {
        printf("\nExample Failed\n");
        return E_FAIL;
    }

    printf("\nExample Succeeded\n");
    return E_NO_ERROR;
}
