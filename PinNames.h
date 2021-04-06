/* mbed Microcontroller Library
 * SPDX-License-Identifier: BSD-3-Clause
 ******************************************************************************
 *
 * Copyright (c) 2016-2021 STMicroelectronics.
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 *
 * Automatically generated from STM32CubeMX/db/mcu/STM32F103C(8-B)Tx.xml
 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ALT0  = 0x100,
    ALT1  = 0x200,
    ALT2  = 0x300,
    ALT3  = 0x400,
    ALT4  = 0x500
} ALTx;

typedef enum {

    PA_0       = 0x00,
    PA_1       = 0x01,
    PA_2       = 0x02,
    PA_3       = 0x03,
    PA_4       = 0x04,
    PA_5       = 0x05,
    PA_6       = 0x06,
    PA_7       = 0x07,
    PA_7_ALT0  = PA_7  | ALT0, // same pin used for alternate HW
    PA_8       = 0x08,
    PA_9       = 0x09,
    PA_10      = 0x0A,
    PA_11      = 0x0B,
    PA_12      = 0x0C,
    PA_13      = 0x0D,
    PA_14      = 0x0E,
    PA_15      = 0x0F,
    PB_0       = 0x10,
    PB_0_ALT0  = PB_0  | ALT0, // same pin used for alternate HW
    PB_1       = 0x11,
    PB_1_ALT0  = PB_1  | ALT0, // same pin used for alternate HW
    PB_2       = 0x12,
    PB_3       = 0x13,
    PB_4       = 0x14,
    PB_5       = 0x15,
    PB_6       = 0x16,
    PB_7       = 0x17,
    PB_8       = 0x18,
    PB_9       = 0x19,
    PB_10      = 0x1A,
    PB_11      = 0x1B,
    PB_12      = 0x1C,
    PB_13      = 0x1D,
    PB_14      = 0x1E,
    PB_15      = 0x1F,
    PC_13      = 0x2D,
    PC_14      = 0x2E,
    PC_15      = 0x2F,
    PD_0       = 0x30,
    PD_1       = 0x31,

    /**** ADC internal channels ****/

    ADC_TEMP = 0xF0, // Internal pin virtual value
    ADC_VREF = 0xF1, // Internal pin virtual value
//    ADC_VBAT = 0xF2, // Internal pin virtual value

//    // Arduino Uno(Rev3) Header pin connection naming
//    A0 = Px_x,
//    A1 = Px_x,
//    A2 = Px_x,
//    A3 = Px_x,
//    A4 = Px_x,
//    A5 = Px_x,
//    D0 = Px_x,
//    D1 = Px_x,
//    D2 = Px_x,
//    D3 = Px_x,
//    D4 = Px_x,
//    D5 = Px_x,
//    D6 = Px_x,
//    D7 = Px_x,
//    D8 = Px_x,
//    D9 = Px_x,
//    D10= Px_x,
//    D11= Px_x,
//    D12= Px_x,
//    D13= Px_x,
//    D14= Px_x,
//    D15= Px_x,

    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    STDIO_UART_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    STDIO_UART_TX = PA_2,
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    STDIO_UART_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    STDIO_UART_RX = PA_3,
#endif

    USBTX = STDIO_UART_TX, // used for greentea tests
    USBRX = STDIO_UART_RX, // used for greentea tests

    // I2C signals aliases
    I2C_SDA = PB_6,
    I2C_SCL = PB_7,

    // SPI signals aliases
    SPI_CS   = PA_4,
    SPI_MOSI = PA_7,
    SPI_MISO = PA_6,
    SPI_SCK  = PA_5,

    // Standardized LED and button names
    LED1    = PC_13,
    // BUTTON1 = NC,

    // Backward legacy names
    // USER_BUTTON = BUTTON1,
    PWM_OUT = PB_5,

    /**** USB pins ****/
    USB_DM = PA_11,
    USB_DP = PA_12,

    /**** OSCILLATOR pins ****/
    RCC_OSC32_IN = PC_14,
    RCC_OSC32_OUT = PC_15,
    RCC_OSC_IN = PD_0,
    RCC_OSC_OUT = PD_1,

    /**** DEBUG pins ****/
    SYS_JTCK_SWCLK = PA_14,
    SYS_JTDI = PA_15,
    SYS_JTDO_TRACESWO = PB_3,
    SYS_JTMS_SWDIO = PA_13,
    SYS_NJTRST = PB_4,
    SYS_WKUP = PA_0,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
