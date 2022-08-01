/******************************************************************************
 * Copyright (C) 2022 Maxim Integrated Products, Inc., All rights Reserved.
 * 
 * This software is protected by copyright laws of the United States and
 * of foreign countries. This material may also be protected by patent laws
 * and technology transfer regulations of the United States and of foreign
 * countries. This software is furnished under a license agreement and/or a
 * nondisclosure agreement and may only be used or reproduced in accordance
 * with the terms of those agreements. Dissemination of this information to
 * any party or parties not specified in the license agreement and/or
 * nondisclosure agreement is expressly prohibited.
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 ******************************************************************************/

/**
 * @file    main.c
 * @brief   ADC demo application
 * @details Continuously monitors the ADC channels
 */

/***** Includes *****/
#include <stdio.h>
#include <stdint.h>

#include <MAX32xxx.h>

/***** Definitions *****/

/* Change to #undef USE_INTERRUPTS for polling mode */
#define USE_INTERRUPTS
// #define DMA

/***** Globals *****/
#ifdef USE_INTERRUPTS
volatile unsigned int adc_done = 0;
#endif

volatile unsigned int dma_done = 0;
static uint16_t adc_val;

/***** Functions *****/

#ifdef USE_INTERRUPTS
void adc_complete_cb(void* req, int error)
{
    adc_done = 1;
    return;
}
void ADC_IRQHandler(void)
{
    MXC_ADC_Handler();
}
#endif

#ifdef DMA
void DMA0_IRQHandler(void)
{
    MXC_DMA_Handler();
    MXC_DMA_ReleaseChannel(0);
    dma_done = 1;
}

void DMA_Callback(int ch, int error)
{
    // Read 32-bit value and truncate to 16-bit for output depending on data align bit
    if ((MXC_ADC->ctrl & MXC_F_ADC_CTRL_DATA_ALIGN) != 0) {
        adc_val = (uint16_t)(adc_val >> 6); /* MSB justified */
    }
}
#endif

int main(void)
{
    // unsigned int overflow;

    printf("ADC Example\n");

    /* Initialize ADC */
    if (MXC_ADC_Init() != E_NO_ERROR) {
        printf("Error Bad Parameter\n");

        while (1)
            ;
    }

    /* Set up LIMIT0 to monitor high and low trip points */
    MXC_ADC_SetMonitorChannel(MXC_ADC_MONITOR_0, MXC_ADC_CH_0);
    MXC_ADC_SetMonitorHighThreshold(MXC_ADC_MONITOR_0, 0x300);
    MXC_ADC_SetMonitorLowThreshold(MXC_ADC_MONITOR_0, 0x25);
    MXC_ADC_EnableMonitor(MXC_ADC_MONITOR_0);

#ifdef USE_INTERRUPTS
    NVIC_EnableIRQ(ADC_IRQn);
#endif

#ifdef DMA
    MXC_DMA_ReleaseChannel(0);
    NVIC_EnableIRQ(DMA0_IRQn);
#endif

    while (1) {
        /* Flash LED when starting ADC cycle */
        LED_On(0);
        MXC_TMR_Delay(MXC_TMR0, MSEC(10));
        LED_Off(0);

        /* Convert channel 0 */
#ifdef USE_INTERRUPTS
        adc_done = 0;
        MXC_ADC_StartConversionAsync(MXC_ADC_CH_0, adc_complete_cb);

        while (!adc_done) {
        };

#endif

#ifdef DMA
        dma_done = 0;

        MXC_ADC_StartConversionDMA(MXC_ADC_CH_0, &adc_val, DMA_Callback);

        while (!dma_done)
            ;

        printf("0: 0x%04x\n", adc_val);
#else
        // MXC_ADC_StartConversion(MXC_ADC_CH_0);
        static uint8_t overflow;
        overflow = (MXC_ADC_GetData(&adc_val) == E_OVERFLOW ? 1 : 0);
        /* Display results on OLED display, display asterisk if overflow */
        printf("0: 0x%04x%s\n\n", adc_val, overflow ? "*" : " ");
#endif

        /* Determine if programmable limits on AIN0 were exceeded */
        if (MXC_ADC_GetFlags() & (MXC_F_ADC_INTR_LO_LIMIT_IF | MXC_F_ADC_INTR_HI_LIMIT_IF)) {
            printf(" %s Limit on AIN0 ",
                   (MXC_ADC_GetFlags() & MXC_F_ADC_INTR_LO_LIMIT_IF) ? "Low" : "High");
            MXC_ADC_ClearFlags(MXC_F_ADC_INTR_LO_LIMIT_IF | MXC_F_ADC_INTR_HI_LIMIT_IF);
        } else {
            printf("                   ");
        }

        printf("\n");

        /* Delay for 1/4 second before next reading */
        MXC_TMR_Delay(MXC_TMR0, MSEC(250));
    }
}
