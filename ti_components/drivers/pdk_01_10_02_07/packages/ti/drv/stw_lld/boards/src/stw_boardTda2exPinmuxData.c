/*
 *  Copyright (C) 2014 Texas Instruments Incorporated
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * \file        stw_boardTda2exPinmuxData.c
 *
 * \brief       This file contains the pin mux configurations for the TDA2EX
 *              EVM. These are prepared based on how the peripherals are
 *              extended on the boards.
 *
 */

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */
#include <stdint.h>
#include <ti/csl/csl_types.h>
#include <ti/drv/stw_lld/i2clld/lld_hsi2c.h>
#include <ti/drv/stw_lld/boards/stw_board.h>
#include <ti/drv/stw_lld/devices/stw_device.h>
#include <ti/csl/soc.h>
#include <ti/drv/stw_lld/boards/src/stw_boardPriv.h>

/* ========================================================================== */
/*                         Structures and Enums                               */
/* ========================================================================== */

/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */

/* Peripheral Pin Configurations */

boardPinmuxBoardCfg_t gBoardTda2exPinMuxData[] =
{
    /* pin mux for UART1 RXD pin */
    {DEVICE_ID_UART,         DEVICE_UART_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_UART1_RXD, 0x40000},
    /* pin mux for UART1 TXD pin */
    {DEVICE_ID_UART,         DEVICE_UART_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_UART1_TXD, 0x0},
    /* pin mux for UART2 RXD pin */
    {DEVICE_ID_UART,         DEVICE_UART_INST_ID_2,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_UART2_RXD, 0x40000},
    /* pin mux for UART2 TXD pin */
    {DEVICE_ID_UART,         DEVICE_UART_INST_ID_2,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_UART2_TXD, 0x0},
    /* pin mux for UART3 RXD pin */
    {DEVICE_ID_UART,         DEVICE_UART_INST_ID_3,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_SPI2_SCLK, 0x40001},
    /* pin mux for UART3 TXD pin */
    {DEVICE_ID_UART,         DEVICE_UART_INST_ID_3,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_SPI2_D1, 0x1},
    /* pin mux for I2C1 mux */
    {DEVICE_ID_I2C,          DEVICE_I2C_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_I2C1_SDA, 0x60000},
    {DEVICE_ID_I2C,          DEVICE_I2C_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_I2C1_SCL, 0x60000},
    /* pin mux for I2C2 mux */
    {DEVICE_ID_I2C,          DEVICE_I2C_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_I2C2_SDA, 0x60000},
    {DEVICE_ID_I2C,          DEVICE_I2C_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_I2C2_SCL, 0x60000},
    /* pin mux for I2C5 mux */
    {DEVICE_ID_I2C,          DEVICE_I2C_INST_ID_4,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_MCASP1_AXR0, 0x60000},
    {DEVICE_ID_I2C,          DEVICE_I2C_INST_ID_4,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_MCASP1_AXR1, 0x60000},
    /* pin mux for VOUT1 mux  */
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_CLK, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_DE, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_FLD, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_HSYNC, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_VSYNC, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D0, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D1, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D2, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D3, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D4, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D5, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D6, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D7, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D8, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D9, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D10, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D11, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D12, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D13, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D14, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D15, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D16, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D17, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D18, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D19, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D20, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D21, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D22, 0x40000},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI1_INST_ID_0,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_VOUT1_D23, 0x40000},
    /* pin mux for VOUT3 mux  */
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD0, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD1, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD2, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD3, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD4, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD5, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD6, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD7, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD8, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD9, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD10, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD11, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD12, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD13, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD14, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_AD15, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A0, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A1, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A2, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A3, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A4, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A5, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A6, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A7, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A8, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A9, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_A10, 0x40003},
    {DEVICE_MODULE_ID_DCTRL, DEVICE_MODULE_DSS_DISPC_OVLY_DPI3_INST_ID_1,
     BOARD_MODE_DEFAULT, CTRL_CORE_PAD_GPMC_CS3, 0x40003},
    /* pin mux for VIN1A mux  */
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_8BIT | BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_CLK0, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_8BIT | BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_HSYNC0, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_8BIT | BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_VSYNC0, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D0, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D1, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D2, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D3, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D4, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D5, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D6, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_BT656 |
      BOARD_MODE_VIDEO_8BIT |
      BOARD_MODE_VIDEO_10BIT | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D7, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_10BIT |
      BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D8, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_10BIT |
      BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D9, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D10, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_12BIT |
      BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D11, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT |
      BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D12, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_14BIT |
      BOARD_MODE_VIDEO_16BIT |
      BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D13, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D14, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_BT1120 | BOARD_MODE_VIDEO_16BIT | BOARD_MODE_VIDEO_24BIT),
     CTRL_CORE_PAD_VIN2A_D15, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D16, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D17, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D18, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D19, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D20, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D21, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D22, 0x40000},
    {DEVICE_MODULE_ID_VIP,   DEVICE_MODULE_VIP1_S1_PORTA_INST_ID_0,
     (BOARD_MODE_VIDEO_24BIT), CTRL_CORE_PAD_VIN2A_D23, 0x40000},
    {DEVICE_ID_INVALID,      0,                                          0,0, 0},
};
