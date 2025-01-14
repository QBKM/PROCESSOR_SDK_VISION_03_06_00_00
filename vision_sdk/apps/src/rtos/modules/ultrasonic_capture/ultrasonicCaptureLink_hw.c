/******************************************************************************
Copyright (c) [2012 - 2017] Texas Instruments Incorporated

All rights reserved not granted herein.

Limited License.

 Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
 license under copyrights and patents it now or hereafter owns or controls to
 make,  have made, use, import, offer to sell and sell ("Utilize") this software
 subject to the terms herein.  With respect to the foregoing patent license,
 such license is granted  solely to the extent that any such patent is necessary
 to Utilize the software alone.  The patent license shall not apply to any
 combinations which include this software, other than combinations with devices
 manufactured by or for TI ("TI Devices").  No hardware patent is licensed
 hereunder.

 Redistributions must preserve existing copyright notices and reproduce this
 license (including the above copyright notice and the disclaimer and
 (if applicable) source code license limitations below) in the documentation
 and/or other materials provided with the distribution

 Redistribution and use in binary form, without modification, are permitted
 provided that the following conditions are met:

 * No reverse engineering, decompilation, or disassembly of this software
   is permitted with respect to any software provided in binary form.

 * Any redistribution and use are licensed by TI for use only with TI Devices.

 * Nothing shall obligate TI to provide you with source code for the software
   licensed and provided to you in object code.

 If software source code is provided to you, modification and redistribution of
 the source code are permitted provided that the following conditions are met:

 * Any redistribution and use of the source code, including any resulting
   derivative works, are licensed by TI for use only with TI Devices.

 * Any redistribution and use of any object code compiled from the source code
   and any resulting derivative works, are licensed by TI for use only with TI
   Devices.

 Neither the name of Texas Instruments Incorporated nor the names of its
 suppliers may be used to endorse or promote products derived from this software
 without specific prior written permission.

 DISCLAIMER.

 THIS SOFTWARE IS PROVIDED BY TI AND TI�S LICENSORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL TI AND TI�S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

/**
  ******************************************************************************
 * \file ultrasonicCaptureLink_hw.c
 *
 *******************************************************************************
 */

/*******************************************************************************
 *  INCLUDE FILES
 *******************************************************************************
 */
#include <xdc/std.h>
#include <stdio.h>
#include <string.h>
#include <ti/csl/hw_types.h>
#include <ti/csl/soc.h>

#define PRCM_ENABLE                     ((UInt32) 2U)
#define DEFAULT                         ((UInt32) 0xFF)
#define PINMUX_MODE_3                   ((UInt32) 3U)


Int32 UltrasonicCaptureLink_setPinmuxRegs
                (UInt32 mode_index, UInt32 offset, UInt32 pupd_info)
{
    UInt32 muxVal;

    if (offset != (UInt32) 0xffff)
    {
        muxVal  = HW_RD_REG32(SOC_CORE_PAD_IO_REGISTERS_BASE + offset);
        muxVal &= ~(0x0FU);
        muxVal |= (mode_index & 0x0000000FU);

        if (pupd_info != (UInt32) DEFAULT)
        {
            muxVal &= ~(0x70000U);
            muxVal |= ((pupd_info & 0x07U) << 16U);
        }
        HW_WR_REG32(SOC_CORE_PAD_IO_REGISTERS_BASE + offset, muxVal);
    }

    return (0);
}

/**
 * \brief Setup pin mux and power UART used for ultrasonic comm.
 */
void UltrasonicCaptureLink_hwSetup()
{
    #ifdef TDA2XX_FAMILY_BUILD
    /* UART10 mux
     * PAD=gpio6_14, PIN=uart10_rxd
     * PAD=gpio6_15, PIN=uart10_txd */

    UltrasonicCaptureLink_setPinmuxRegs(PINMUX_MODE_3, (UInt32) CTRL_CORE_PAD_GPIO6_14, DEFAULT);
    UltrasonicCaptureLink_setPinmuxRegs(PINMUX_MODE_3, (UInt32) CTRL_CORE_PAD_GPIO6_15, DEFAULT);

    /* Enable UART10 module */
    HW_WR_REG32(
        SOC_WKUPAON_CM_BASE + CM_WKUPAON_UART10_CLKCTRL, PRCM_ENABLE);
    while ((HW_RD_REG32(SOC_WKUPAON_CM_BASE +
                CM_WKUPAON_UART10_CLKCTRL) & ((UInt32) (0x00030000)))
                    != 0x0)
    {
        /* Do nothing - Busy wait */
    }

    #endif
}
