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
 *******************************************************************************
 * \file iss_sensor_ar0143.c
 *
 *
 *
 *******************************************************************************
*/

/**
 *  \file ar0143_mars_linear_1280x800_setup.h
 *
 *  \brief AR0143 sensor settings for 1280x800 frame size in linear mode.
 *
 */

#ifndef AR0143_MARS_LINEAR_1280X720_SETUP_H_
#define AR0143_MARS_LINEAR_1280X720_SETUP_H_

#define FRAME_LEN_LINES_LIN720P      (0x32D)
#define MAX_COARSE_INT_LINES_LINEAR_720P      (758U)

/* AR0143 recommended setting */
#define AR0143_MARS_LINEAR_1280X720_CONFIG                                          \
{ \
    {0x301A, 0x10D8, 0x300}, /*RESET_REGISTER*/ \
    {0x3100, 0x4000, 0x10}, /*RESERVED_MFR_3100*/ \
    {0x3102, 0x6060, 0x10}, /*RESERVED_MFR_3102*/ \
    {0x3104, 0x6060, 0x10}, /*RESERVED_MFR_3104*/ \
    {0x3106, 0x6060, 0x10}, /*RESERVED_MFR_3106*/ \
    {0x3108, 0x0F9F, 0x10}, /*RESERVED_MFR_3108*/ \
    {0x3280, 0x0FA0, 0x10}, /*RESERVED_MFR_3280*/ \
    {0x3282, 0x0FA0, 0x10}, /*RESERVED_MFR_3282*/ \
    {0x3284, 0x0FA0, 0x10}, /*RESERVED_MFR_3284*/ \
    {0x3286, 0x0FA0, 0x10}, /*RESERVED_MFR_3286*/ \
    {0x3288, 0x0FA0, 0x10}, /*RESERVED_MFR_3288*/ \
    {0x328A, 0x0FA0, 0x10}, /*RESERVED_MFR_328A*/ \
    {0x328C, 0x0FA0, 0x10}, /*RESERVED_MFR_328C*/ \
    {0x328E, 0x0FA0, 0x10}, /*RESERVED_MFR_328E*/ \
    {0x3290, 0x0FA0, 0x10}, /*RESERVED_MFR_3290*/ \
    {0x3292, 0x0FA0, 0x10}, /*RESERVED_MFR_3292*/ \
    {0x3294, 0x0FA0, 0x10}, /*RESERVED_MFR_3294*/ \
    {0x3296, 0x0FA0, 0x10}, /*RESERVED_MFR_3296*/ \
    {0x3298, 0x0FA0, 0x10}, /*RESERVED_MFR_3298*/ \
    {0x329A, 0x0FA0, 0x10}, /*RESERVED_MFR_329A*/ \
    {0x329C, 0x0FA0, 0x10}, /*RESERVED_MFR_329C*/ \
    {0x329E, 0x0FA0, 0x10}, /*RESERVED_MFR_329E*/ \
    {0x3110, 0x0011, 0x10}, /*HDR_CONTROL0*/ \
    {0x3112, 0x7FE7, 0x10}, /*RESERVED_MFR_3112*/ \
    {0x3114, 0x0000, 0x10}, /*RESERVED_MFR_3114*/ \
    {0x3116, 0xC000, 0x10}, /*RESERVED_MFR_3116*/ \
    {0x3120, 0x0BA0, 0x10}, /*HDR_SC_CONTROL0*/ \
    {0x3122, 0x0FA0, 0x10}, /*HDR_SC_CONTROL1*/ \
    {0x3124, 0x00B4, 0x10}, /*HDR_MD_CONTROL0*/ \
    {0x3126, 0x0030, 0x10}, /*HDR_MD_CONTROL1*/ \
    {0x3128, 0x6100, 0x10}, /*RESERVED_MFR_3128*/ \
    {0x3506, 0x3333, 0x10}, /*RESERVED_MFR_3506*/ \
    {0x3508, 0x3333, 0x10}, /*RESERVED_MFR_3508*/ \
    {0x350A, 0x3333, 0x10}, /*RESERVED_MFR_350A*/ \
    {0x350C, 0x035F, 0x10}, /*RESERVED_MFR_350C*/ \
    {0x350E, 0xEF14, 0x10}, /*RESERVED_MFR_350E*/ \
    {0x3086, 0x0600, 0x10}, /*RESERVED_MFR_3086*/ \
    {0x3C00, 0xDD67, 0x10}, /*RESERVED_MFR_3C00*/ \
    {0x3092, 0x1C24, 0x10}, /*RESERVED_MFR_3092*/ \
    {0x3096, 0x147E, 0x10}, /*RESERVED_MFR_3096*/ \
    {0x3750, 0x147E, 0x10}, /*RESERVED_MFR_3750*/ \
    {0x30B0, 0x0800, 0x10}, /*DIGITAL_TEST*/ \
    {0x30FE, 0x0000, 0x10}, /*NOISE_PEDESTAL*/ \
    {0x32D0, 0x3A02, 0x10}, /*RESERVED_MFR_32D0*/ \
    {0x32D6, 0x3C04, 0x10}, /*RESERVED_MFR_32D6*/ \
    {0x3C0C, 0x0516, 0x10}, /*DELAY_BUFFER_LLPCK_RD_WR_OVERLAP*/ \
    {0x3F96, 0xFFFE, 0x10}, /*TEMPVSENS1_FLAG_CTRL*/ \
    {0x3088, 0x6680, 0x10}, /*LFM_CTRL*/ \
    {0x33E2, 0x0000, 0x10}, /*SAMPLE_CTRL*/ \
    {0x3366, 0x7777, 0x10}, /*ANALOG_GAIN*/ \
    {0x3056, 0x0080, 0x10}, /*GREEN1_GAIN*/ \
    {0x305C, 0x0080, 0x10}, /*GREEN2_GAIN*/ \
    {0x3058, 0x0080, 0x10}, /*BLUE_GAIN*/ \
    {0x305A, 0x0080, 0x10}, /*RED_GAIN*/ \
    {0x306E, 0x9010, 0x10}, /*DATAPATH_SELECT*/ \
    {0x30BA, 0x01E2, 0x10}, /*DIGITAL_CTRL*/ \
    {0x32EA, 0x3C0E, 0x10}, /*RESERVED_MFR_32EA*/ \
    {0x3362, 0x0000, 0x10}, /*DC_GAIN*/ \
    {0x3364, 0x005B, 0x10}, /*RESERVED_MFR_3364*/ \
    {0x3370, 0x0131, 0x10}, /*DBLC_CONTROL*/ \
    {0x3372, 0x700F, 0x10}, /*DBLC_FS0_CONTROL*/ \
    {0x3386, 0x0000, 0x10}, /*DBLC_PEDESTAL*/ \
    {0x3C04, 0x0E80, 0x10}, /*RESERVED_MFR_3C04*/ \
    {0x30B4, 0x01C7, 0x10}, /*TEMPSENS0_CTRL_REG*/ \
    {0x30B8, 0x0007, 0x10}, /*TEMPSENS1_CTRL_REG*/ \
    {0x3F90, 0x8D03, 0x10}, /*TEMPVSENS0_TMG_CTRL*/ \
    {0x3F92, 0x0D03, 0x10}, /*TEMPVSENS1_TMG_CTRL*/ \
    {0x3502, 0x0808, 0x10}, /*RESERVED_MFR_3502*/ \
    {0x3566, 0x1D28, 0x10}, /*RESERVED_MFR_3566*/ \
    {0x3518, 0x1FFE, 0x10}, /*RESERVED_MFR_3518*/ \
    {0x3520, 0x4688, 0x10}, /*RESERVED_MFR_3520*/ \
    {0x3522, 0x8840, 0x10}, /*RESERVED_MFR_3522*/ \
    {0x3524, 0x4046, 0x10}, /*RESERVED_MFR_3524*/ \
    {0x3526, 0x0F00, 0x10}, /*RESERVED_MFR_3526*/ \
    {0x3528, 0xDDDD, 0x10}, /*RESERVED_MFR_3528*/ \
    {0x352C, 0x4646, 0x10}, /*RESERVED_MFR_352C*/ \
    {0x352A, 0x089F, 0x10}, /*RESERVED_MFR_352A*/ \
    {0x352E, 0x0011, 0x10}, /*RESERVED_MFR_352E*/ \
    {0x3530, 0x4400, 0x10}, /*RESERVED_MFR_3530*/ \
    {0x3536, 0xFF07, 0x10}, /*RESERVED_MFR_3536*/ \
    {0x3538, 0xFFFF, 0x10}, /*RESERVED_MFR_3538*/ \
    {0x353A, 0x9000, 0x10}, /*RESERVED_MFR_353A*/ \
    {0x353C, 0x3F00, 0x10}, /*RESERVED_MFR_353C*/ \
    {0x32EC, 0x72A1, 0x10}, /*RESERVED_MFR_32EC*/ \
    {0x3540, 0xC637, 0x10}, /*RESERVED_MFR_3540*/ \
    {0x3542, 0x464B, 0x10}, /*RESERVED_MFR_3542*/ \
    {0x3544, 0x4B50, 0x10}, /*RESERVED_MFR_3544*/ \
    {0x3546, 0x545A, 0x10}, /*RESERVED_MFR_3546*/ \
    {0x3548, 0x5A00, 0x10}, /*RESERVED_MFR_3548*/ \
    {0x354A, 0x007F, 0x10}, /*RESERVED_MFR_354A*/ \
    {0x3556, 0x101F, 0x10}, /*RESERVED_MFR_3556*/ \
    {0x3566, 0x3328, 0x10}, /*RESERVED_MFR_3566*/ \
    {0x337A, 0x0CA3, 0x10}, /*DBLC_SCALE0*/ \
    {0x3372, 0x710F, 0x10}, /*DBLC_FS0_CONTROL*/ \
    {0x2512, 0x8000, 0x10}, /*SEQ_CTRL_PORT*/ \
    {0x2510, 0x0903, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x3350, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2004, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1420, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1578, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x087B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x24FF, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x24FF, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x24EA, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2410, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2224, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1015, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x5813, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0214, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0024, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xFF24, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xFF24, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xEA23, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2464, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x7A24, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0405, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2C40, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0AFF, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0ACC, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0A07, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x3851, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1440, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0004, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0801, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0408, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1180, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2652, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0815, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1813, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xC810, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1611, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8111, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8910, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x5612, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1009, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x020D, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0905, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1588, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1388, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0938, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1199, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x11D9, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x091E, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1214, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x10D6, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0901, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1212, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x11DD, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x11D9, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0901, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1441, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0904, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1056, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0811, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xDB09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0311, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xFB11, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xBB12, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1A12, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1008, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1250, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1076, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x10E6, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1461, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0906, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1240, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1260, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x091C, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1460, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x090C, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0B09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0515, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xC813, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xC808, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1066, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x090B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1588, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1388, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0913, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0C14, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4009, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0310, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xE611, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xFB12, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6212, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6011, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xFF11, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xFB14, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4109, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6609, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1211, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xBB12, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6312, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6014, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0015, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1811, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xB812, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xA012, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0010, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2610, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0013, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0011, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8030, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x5342, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1100, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1002, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1016, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1101, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1109, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1056, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0D09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0614, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4009, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0214, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6009, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0615, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4C13, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0C09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0713, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4C09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0715, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0xCC09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0211, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4908, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1461, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1460, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0903, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1588, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1308, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0905, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1388, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0913, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1159, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x090B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1214, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0901, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x10D6, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1212, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x115D, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1159, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1056, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0903, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x115B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0913, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x111B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x113B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x121A, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1210, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0901, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1250, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x10F6, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x10E6, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0903, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x15AB, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x13AB, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1240, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1260, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0964, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1588, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0903, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0B08, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0813, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8809, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0715, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8D13, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8D09, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0D15, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8813, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x8809, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0310, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x6609, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x030C, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0914, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x10E6, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1262, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1260, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x113F, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x113B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1066, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x117B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0927, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x113B, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1263, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1260, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1400, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x155A, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1138, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x12A0, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1200, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1026, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1000, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1342, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x1100, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x437A, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0605, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0807, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x4137, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x502C, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x2CFE, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x16FE, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x2510, 0x0C2C, 0x10}, /*SEQ_DATA_PORT*/ \
    {0x1008, 0x0338, 0x10}, /*FINE_INTEGRATION_TIME_MIN*/ \
    {0x100C, 0x051B, 0x10}, /*FINE_INTEGRATION_TIME2_MIN*/ \
    {0x100E, 0x06FE, 0x10}, /*FINE_INTEGRATION_TIME3_MIN*/ \
    {0x1010, 0x0155, 0x10}, /*FINE_INTEGRATION_TIME4_MIN*/ \
    {0x3230, 0x02D6, 0x10}, /*FINE_CORRECTION*/ \
    {0x3232, 0x04B9, 0x10}, /*FINE_CORRECTION2*/ \
    {0x3234, 0x069C, 0x10}, /*FINE_CORRECTION3*/ \
    {0x3236, 0x00F3, 0x10}, /*FINE_CORRECTION4*/ \
    {0x32E6, 0x00DA, 0x10}, /*RESERVED_MFR_32E6*/ \
    {0x350C, 0x035F, 0x10}, /*RESERVED_MFR_350C*/ \
    {0x32D0, 0x3A02, 0x10}, /*RESERVED_MFR_32D0*/ \
    {0x32D2, 0x3508, 0x10}, /*RESERVED_MFR_32D2*/ \
    {0x32D4, 0x3702, 0x10}, /*RESERVED_MFR_32D4*/ \
    {0x32D6, 0x3C04, 0x10}, /*RESERVED_MFR_32D6*/ \
    {0x32DC, 0x370A, 0x10}, /*RESERVED_MFR_32DC*/ \
    {0x302A, 0x0008, 0x10}, /*VT_PIX_CLK_DIV*/ \
    {0x302C, 0x0001, 0x10}, /*VT_SYS_CLK_DIV*/ \
    {0x302E, 0x0002, 0x10}, /*PRE_PLL_CLK_DIV*/ \
    {0x3030, 0x002C, 0x10}, /*PLL_MULTIPLIER*/ \
    {0x3036, 0x0008, 0x10}, /*OP_WORD_CLK_DIV*/ \
    {0x3038, 0x0001, 0x10}, /*OP_SYS_CLK_DIV*/ \
    {0x30B0, 0x0800, 0x10}, /*DIGITAL_TEST*/ \
    {0x30B0, 0x0802, 0x10}, /*DIGITAL_TEST*/ \
    {0x31DC, 0x0038, 0x10}, /*RESERVED_MFR_31DC*/ \
    {0x30A2, 0x0001, 0x10}, /*X_ODD_INC_*/ \
    {0x30A6, 0x0001, 0x10}, /*Y_ODD_INC_*/ \
    {0x3040, 0x0000, 0x10}, /*READ_MODE*/ \
    {0x3082, 0x0008, 0x10}, /*OPERATION_MODE_CTRL*/ \
    {0x30BA, 0x01E2, 0x10}, /*DIGITAL_CTRL*/ \
    {0x3044, 0x0400, 0x10}, /*DARK_CONTROL*/ \
    {0x3064, 0xD802, 0x10}, /*SMIA_TEST*/ \
    {0x3032, 0x0000, 0x10}, /*SMIA_TEST*/ \
    {0x3180, 0x0080, 0x10}, /*RESERVED_MFR_3180*/ \
    {0x33E4, 0x0080, 0x10}, /*RESERVED_MFR_33E4*/ \
    {0x33E0, 0x0880, 0x10}, /*TEST_ASIL_ROWS*/ \
    {0x3004, 0x0020, 0x10}, /*X_ADDR_START_*/ \
    {0x3008, 0x051F, 0x10}, /*X_ADDR_END_*/ \
    {0x3002, 0x007C, 0x10}, /*Y_ADDR_START_*/ \
    {0x3006, 0x034B, 0x10}, /*Y_ADDR_END_*/ \
    {0x3400, 0x0010, 0x10}, /*RESERVED_MFR_3400*/ \
    {0x3402, 0x0500, 0x10}, /*X_OUTPUT_CONTROL*/ \
    {0x3404, 0x02D0, 0x10}, /*Y_OUTPUT_CONTROL*/ \
    {0x3082, 0x0000, 0x10}, /*OPERATION_MODE_CTRL*/ \
    {0x30BA, 0x01E2, 0x10}, /*DIGITAL_CTRL*/ \
    {0x300C, 0x0BE4, 0x10}, /*LINE_LENGTH_PCK_*/ \
    {0x300A, FRAME_LEN_LINES_LIN720P, 0x10}, /*FRAME_LENGTH_LINES_*/ \
    {0x3042, 0x0000, 0x10}, /*EXTRA_DELAY*/ \
    {0x3238, 0x0222, 0x10}, /*EXPOSURE_RATIO*/ \
    {0x3012, 0x0186, 0x10}, /*COARSE_INTEGRATION_TIME_*/ \
    {0x3014, 0x0338, 0x10}, /*FINE_INTEGRATION_TIME_*/ \
    {0x321E, 0x0570, 0x10}, /*FINE_INTEGRATION_TIME2*/ \
    {0x3222, 0x01FF, 0x10}, /*FINE_INTEGRATION_TIME3*/ \
    {0x30B0, 0x0802, 0x10}, /*DIGITAL_TEST*/ \
    {0x3070, 0x0000, 0x10}, /*TEST PATTERN*/ \
    {0x32EA, 0x3C0E, 0x10}, /*RESERVED_MFR_32EA*/ \
    {0x32EC, 0x72A0, 0x10}, /*RESERVED_MFR_32EC*/ \
    {0x3C06, 0x083C, 0x10}, /*RESERVED_MFR_3C06*/ \
    {0x3C08, 0x0100, 0x10}, /*RESERVED_MFR_3C08*/ \
    {0x31D0, 0x0000, 0x10}, /*COMPANDING*/ \
    {0x31AE, 0x0001, 0x10}, /*SERIAL_FORMAT*/ \
    {0x31AC, 0x0C0C, 0x10}, /*DATA_FORMAT_BITS*/ \
    {0x301A, 0x10DC, 0x10}, /*RESET_REGISTER*/ \
}

#endif /* #ifndef AR0143_MARS_LINEAR_1280X720_SETUP_H_  */

