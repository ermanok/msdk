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
 * @file        main.c
 * @brief     Example code for scanning the available addresses on an I2C bus
 * @details     This example uses the I2C Master to found addresses of the I2C Slave devices 
 *              connected to the bus. You must connect the pull-up jumpers (JP21 and JP22) 
 *              to the proper I/O voltage.
 */

/***** Includes *****/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "board.h"
#include "mxc_device.h"
#include "mxc_delay.h"
#include "nvic_table.h"
#include "i2c.h"

/***** Definitions *****/
#ifdef BOARD_EVKIT_V1
#define I2C_MASTER MXC_I2C2 // SCL P0_30; SDA P0_31
#define I2C_SCL_PIN 30
#define I2C_SDA_PIN 31
#else
#define I2C_MASTER MXC_I2C1 // SCL P0_16; SDA P0_17
#define I2C_SCL_PIN 16
#define I2C_SDA_PIN 17
#endif

#define I2C_FREQ 100000 // 100kHZ

/***** Globals *****/
uint8_t counter = 0;

// *****************************************************************************
int main()
{
    printf("\n\n******** I2C SLAVE ADDRESS SCANNER *********\n");
    printf("\nThis example finds the addresses of any I2C Slave devices connected to the");
    printf("\nsame bus as I2C%d (SCL - P0.%d, SDA - P0.%d).\n", MXC_I2C_GET_IDX(I2C_MASTER),
           I2C_SCL_PIN, I2C_SDA_PIN);

#ifdef BOARD_EVKIT_V1
    printf("\nIf desired you may connect I2C2 to an external bus through pins 6 (SDA)");
    printf("\nand 8 (SCL) on the camera header J4.\n");
#endif

    int error;

    //Setup the I2CM
    error = MXC_I2C_Init(I2C_MASTER, 1, 0);
    if (error != E_NO_ERROR) {
        printf("-->I2C Master Initialization failed, error:%d\n", error);
        return -1;
    } else {
        printf("\n-->I2C Master Initialization Complete\n");
    }

    printf("-->Scanning started\n");
    MXC_I2C_SetFrequency(I2C_MASTER, I2C_FREQ);
    mxc_i2c_req_t reqMaster;
    reqMaster.i2c = I2C_MASTER;
    reqMaster.addr = 0;
    reqMaster.tx_buf = NULL;
    reqMaster.tx_len = 0;
    reqMaster.rx_buf = NULL;
    reqMaster.rx_len = 0;
    reqMaster.restart = 0;
    reqMaster.callback = NULL;

    for (uint8_t address = 8; address < 120; address++) {
        printf(".");
        fflush(0);

        reqMaster.addr = address;
        if ((MXC_I2C_MasterTransaction(&reqMaster)) == 0) {
            printf("\nFound slave ID %03d; 0x%02X\n", address, address);
            counter++;
        }
        MXC_Delay(MXC_DELAY_MSEC(200));
    }

    printf("\n-->Scan finished. %d devices found\n", counter);

    return 0;
}
