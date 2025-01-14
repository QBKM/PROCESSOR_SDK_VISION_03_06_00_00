/*
*
* Copyright (c) 2008-2017 Texas Instruments Incorporated
*
* All rights reserved not granted herein.
*
* Limited License.
*
* Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
* license under copyrights and patents it now or hereafter owns or controls to make,
* have made, use, import, offer to sell and sell ("Utilize") this software subject to the
* terms herein.  With respect to the foregoing patent license, such license is granted
* solely to the extent that any such patent is necessary to Utilize the software alone.
* The patent license shall not apply to any combinations which include this software,
* other than combinations with devices manufactured by or for TI ("TI Devices").
* No hardware patent is licensed hereunder.
*
* Redistributions must preserve existing copyright notices and reproduce this license
* (including the above copyright notice and the disclaimer and (if applicable) source
* code license limitations below) in the documentation and/or other materials provided
* with the distribution
*
* Redistribution and use in binary form, without modification, are permitted provided
* that the following conditions are met:
*
* *       No reverse engineering, decompilation, or disassembly of this software is
* permitted with respect to any software provided in binary form.
*
* *       any redistribution and use are licensed by TI for use only with TI Devices.
*
* *       Nothing shall obligate TI to provide you with source code for the software
* licensed and provided to you in object code.
*
* If software source code is provided to you, modification and redistribution of the
* source code are permitted provided that the following conditions are met:
*
* *       any redistribution and use of the source code, including any resulting derivative
* works, are licensed by TI for use only with TI Devices.
*
* *       any redistribution and use of any object code compiled from the source code
* and any resulting derivative works, are licensed by TI for use only with TI Devices.
*
* Neither the name of Texas Instruments Incorporated nor the names of its suppliers
*
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* DISCLAIMER.
*
* THIS SOFTWARE IS PROVIDED BY TI AND TI'S LICENSORS "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL TI AND TI'S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
* OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
* OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/



/**
 *  @Component:   CSTF
 *
 *  @Filename:    cstf_cred.h
 *
 *  @Description: CoreSight Trace Funnel 
 *
 *  Generated by: Socrates CRED generator prototype
 *
 *//* ====================================================================== */

#ifndef __CSTF_CRED_H
#define __CSTF_CRED_H

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * Instance I_CSTF1 of component CSTF mapped in NETRA at address 0x4B164000
 */

 /*-------------------------------------------------------------------------*//**
 * @DEFINITION   BITFIELD
 *
 * @BRIEF        The bitfield must be defined according to register width
 *               of the component - 64/32/16/8
 *
 *//*------------------------------------------------------------------------ */
#undef BITFIELD
#define BITFIELD BITFIELD_32

/*
 *  List of Register arrays for component CSTF
 *
 */


/*
 *  List of bundle arrays for component CSTF
 *
 */

/*
 *  List of bundles for component CSTF
 *
 */


/*
 * List of registers for component CSTF
 *
 */

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL
 *
 * @BRIEF        Funnel Control Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL                                    0x0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL
 *
 * @BRIEF        Priority Control Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL                                    0x4ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBDATA0
 *
 * @BRIEF        Integration Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBDATA0                              0xEECul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR2
 *
 * @BRIEF        Integration Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR2                               0xEF0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR1
 *
 * @BRIEF        Integration Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR1                               0xEF4ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR0
 *
 * @BRIEF        Integration Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR0                               0xEF8ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITCTRL
 *
 * @BRIEF        Integration Mode Control Register 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITCTRL                                  0xF00ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_CLAIMSET
 *
 * @BRIEF        Claim Tag Set 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_CLAIMSET                                0xFA0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_CLAIMCLR
 *
 * @BRIEF        Claim Tag Clear 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_CLAIMCLR                                0xFA4ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_LOCKACCESS
 *
 * @BRIEF        Lock Access 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_LOCKACCESS                              0xFB0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_LOCKSTATUS
 *
 * @BRIEF        Lock Status 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_LOCKSTATUS                              0xFB4ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_AUTHSTATUS
 *
 * @BRIEF        Authentification status 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_AUTHSTATUS                              0xFB8ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_DEVID
 *
 * @BRIEF        Device ID 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_DEVID                                   0xFC8ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_DEVTYPE
 *
 * @BRIEF        Device type identifier 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_DEVTYPE                                 0xFCCul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID4
 *
 * @BRIEF        Peripheral ID4 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID4                               0xFD0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID0
 *
 * @BRIEF        Peripheral ID0 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID0                               0xFE0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID1
 *
 * @BRIEF        Peripheral ID1 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID1                               0xFE4ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID2
 *
 * @BRIEF        Peripheral ID2 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID2                               0xFE8ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID3
 *
 * @BRIEF        Peripheral ID3 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID3                               0xFECul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID0
 *
 * @BRIEF        Component ID0 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID0                               0xFF0ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID1
 *
 * @BRIEF        Component ID1 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID1                               0xFF4ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID2
 *
 * @BRIEF        Component ID2 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID2                               0xFF8ul

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID3
 *
 * @BRIEF        Component ID3 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID3                               0xFFCul


/*
 * List of register bitfields for component CSTF
 *
 */
 
/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__HT   
 *
 * @BRIEF        Minimum hold time[3:0] 
 *               The formatting scheme can easily become inefficient if fast 
 *               switching occurs, so, 
 *               where possible, this must be minimized. If a source has 
 *               nothing to transmit, then 
 *               another source is selected irrespective of the minimum 
 *               number of cycles. Reset 
 *               is 0x3 . The CSTF holds for the minimum hold time and one 
 *               additional cycle. 
 *               The maximum vlaue that can be entered is 0xE and this 
 *               equates to 15 cycles. 
 *               0xF is reserved. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__HT                           BITFIELD(11, 8)
#define CSTF__CSTF_FCTL__HT__POS                      8

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS7   
 *
 * @BRIEF        Enable Slave port 7 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS7                         BITFIELD(7, 7)
#define CSTF__CSTF_FCTL__ENS7__POS                    7

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS6   
 *
 * @BRIEF        Enable Slave port 6 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS6                         BITFIELD(6, 6)
#define CSTF__CSTF_FCTL__ENS6__POS                    6

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS5   
 *
 * @BRIEF        Enable Slave port 5 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS5                         BITFIELD(5, 5)
#define CSTF__CSTF_FCTL__ENS5__POS                    5

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS4   
 *
 * @BRIEF        Enable Slave port 4 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS4                         BITFIELD(4, 4)
#define CSTF__CSTF_FCTL__ENS4__POS                    4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS3   
 *
 * @BRIEF        Enable Slave port 3 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS3                         BITFIELD(3, 3)
#define CSTF__CSTF_FCTL__ENS3__POS                    3

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS2   
 *
 * @BRIEF        Enable Slave port 2 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS2                         BITFIELD(2, 2)
#define CSTF__CSTF_FCTL__ENS2__POS                    2

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS1   
 *
 * @BRIEF        Enable Slave port 1 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS1                         BITFIELD(1, 1)
#define CSTF__CSTF_FCTL__ENS1__POS                    1

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_FCTL__ENS0   
 *
 * @BRIEF        Enable Slave port 0 - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_FCTL__ENS0                         BITFIELD(0, 0)
#define CSTF__CSTF_FCTL__ENS0__POS                    0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT7   
 *
 * @BRIEF        Priority value of the 8th slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT7                     BITFIELD(23, 21)
#define CSTF__CSTF_PCTL__PRIPORT7__POS                21

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT6   
 *
 * @BRIEF        Priority value of the 7th slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT6                     BITFIELD(20, 18)
#define CSTF__CSTF_PCTL__PRIPORT6__POS                18

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT5   
 *
 * @BRIEF        Priority value of the 6th slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT5                     BITFIELD(17, 15)
#define CSTF__CSTF_PCTL__PRIPORT5__POS                15

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT4   
 *
 * @BRIEF        Priority value of the 5th slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT4                     BITFIELD(14, 12)
#define CSTF__CSTF_PCTL__PRIPORT4__POS                12

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT3   
 *
 * @BRIEF        Priority value of the 4th slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT3                     BITFIELD(11, 9)
#define CSTF__CSTF_PCTL__PRIPORT3__POS                9

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT2   
 *
 * @BRIEF        Priority value of the 3rd slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT2                     BITFIELD(8, 6)
#define CSTF__CSTF_PCTL__PRIPORT2__POS                6

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT1   
 *
 * @BRIEF        Priority value of the 2nd slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT1                     BITFIELD(5, 3)
#define CSTF__CSTF_PCTL__PRIPORT1__POS                3

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PCTL__PRIPORT0   
 *
 * @BRIEF        Priority value of the first slave port. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PCTL__PRIPORT0                     BITFIELD(2, 0)
#define CSTF__CSTF_PCTL__PRIPORT0__POS                0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBDATA0__ATDATA31   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBDATA0__ATDATA31               BITFIELD(4, 4)
#define CSTF__CSTF_ITATBDATA0__ATDATA31__POS          4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBDATA0__ATDATA23   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBDATA0__ATDATA23               BITFIELD(3, 3)
#define CSTF__CSTF_ITATBDATA0__ATDATA23__POS          3

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBDATA0__ATDATA15   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBDATA0__ATDATA15               BITFIELD(2, 2)
#define CSTF__CSTF_ITATBDATA0__ATDATA15__POS          2

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBDATA0__ATDATA7   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBDATA0__ATDATA7                BITFIELD(1, 1)
#define CSTF__CSTF_ITATBDATA0__ATDATA7__POS           1

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBDATA0__ATDATA0   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBDATA0__ATDATA0                BITFIELD(0, 0)
#define CSTF__CSTF_ITATBDATA0__ATDATA0__POS           0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR2__AFVALID   
 *
 * @BRIEF        Bitfield description is not available - (WO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR2__AFVALID                 BITFIELD(1, 1)
#define CSTF__CSTF_ITATBCTR2__AFVALID__POS            1

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR2__ATREADY   
 *
 * @BRIEF        Bitfield description is not available - (WO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR2__ATREADY                 BITFIELD(0, 0)
#define CSTF__CSTF_ITATBCTR2__ATREADY__POS            0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR1__ATID   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR1__ATID                    BITFIELD(6, 0)
#define CSTF__CSTF_ITATBCTR1__ATID__POS               0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR0__ATBYTES   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR0__ATBYTES                 BITFIELD(9, 8)
#define CSTF__CSTF_ITATBCTR0__ATBYTES__POS            8

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR0__AFREADYS   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR0__AFREADYS                BITFIELD(1, 1)
#define CSTF__CSTF_ITATBCTR0__AFREADYS__POS           1

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITATBCTR0__ATVALIDS   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITATBCTR0__ATVALIDS                BITFIELD(0, 0)
#define CSTF__CSTF_ITATBCTR0__ATVALIDS__POS           0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_ITCTRL__ITCTRL   
 *
 * @BRIEF        Bitfield description is not available - (RW)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_ITCTRL__ITCTRL                     BITFIELD(0, 0)
#define CSTF__CSTF_ITCTRL__ITCTRL__POS                0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_CLAIMSET__CLAIMTAGSET   
 *
 * @BRIEF        A bit-programmable register bank that reads the Claim Tag 
 *               Value (CTV) 
 *               Reads 
 *               A read returns 32'h000000FF indicating that this claim tag 
 *               is eight bits wide 
 *               32'h0000000F indicates that this claim tag is four bits 
 *               wide. Logic 1 indicates that 
 *               this bit can be set. Logic 0 indicates that this bit is 
 *               unimplemented, that is, it 
 *               cannot be set. 
 *               Writes 
 *               Bit-clear has no effect on the CTV. 
 *               Bit-set marks the bit in the CTV. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_CLAIMSET__CLAIMTAGSET              BITFIELD(3, 0)
#define CSTF__CSTF_CLAIMSET__CLAIMTAGSET__POS         0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_CLAIMCLR__CLAIMTAGCLEAR   
 *
 * @BRIEF        A bit-programmable register bank that sets the CTV. 
 *               Reads 
 *               A read returns a value indicating the current claim value. 
 *               Writes 
 *               Bit-clear has no effect on CTV. 
 *               Bit-set removes the bit in the CTV. 
 *               This is 0 on reset. - (RW) 
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_CLAIMCLR__CLAIMTAGCLEAR            BITFIELD(3, 0)
#define CSTF__CSTF_CLAIMCLR__CLAIMTAGCLEAR__POS       0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_LOCKACCESS__WRITEACCESSCODE   
 *
 * @BRIEF        Bitfield description is not available - (WO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_LOCKACCESS__WRITEACCESSCODE        BITFIELD(31, 0)
#define CSTF__CSTF_LOCKACCESS__WRITEACCESSCODE__POS   0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_LOCKSTATUS__EIGHT_BIT   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_LOCKSTATUS__EIGHT_BIT              BITFIELD(2, 2)
#define CSTF__CSTF_LOCKSTATUS__EIGHT_BIT__POS         2

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_LOCKSTATUS__STATUS   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_LOCKSTATUS__STATUS                 BITFIELD(1, 1)
#define CSTF__CSTF_LOCKSTATUS__STATUS__POS            1

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_LOCKSTATUS__IMP   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_LOCKSTATUS__IMP                    BITFIELD(0, 0)
#define CSTF__CSTF_LOCKSTATUS__IMP__POS               0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_AUTHSTATUS__SECURE_NONINVASIVE_DEBUG   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_AUTHSTATUS__SECURE_NONINVASIVE_DEBUG BITFIELD(7, 6)
#define CSTF__CSTF_AUTHSTATUS__SECURE_NONINVASIVE_DEBUG__POS 6

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_AUTHSTATUS__SECURE_INVASIVE_DEBUG   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_AUTHSTATUS__SECURE_INVASIVE_DEBUG  BITFIELD(5, 4)
#define CSTF__CSTF_AUTHSTATUS__SECURE_INVASIVE_DEBUG__POS 4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_AUTHSTATUS__NONSECURE_NONINVASIVE_DEBUG   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_AUTHSTATUS__NONSECURE_NONINVASIVE_DEBUG BITFIELD(3, 2)
#define CSTF__CSTF_AUTHSTATUS__NONSECURE_NONINVASIVE_DEBUG__POS 2

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_AUTHSTATUS__NONSECURE_INVASIVE_DEBUG   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_AUTHSTATUS__NONSECURE_INVASIVE_DEBUG BITFIELD(1, 0)
#define CSTF__CSTF_AUTHSTATUS__NONSECURE_INVASIVE_DEBUG__POS 0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_DEVID__DEVICEID   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_DEVID__DEVICEID                    BITFIELD(31, 0)
#define CSTF__CSTF_DEVID__DEVICEID__POS               0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_DEVTYPE__SUB_TYPE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_DEVTYPE__SUB_TYPE                  BITFIELD(7, 4)
#define CSTF__CSTF_DEVTYPE__SUB_TYPE__POS             4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_DEVTYPE__MAIN_TYPE_CLASS   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_DEVTYPE__MAIN_TYPE_CLASS           BITFIELD(3, 0)
#define CSTF__CSTF_DEVTYPE__MAIN_TYPE_CLASS__POS      0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID4__FOURKB_COUNT   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID4__FOURKB_COUNT            BITFIELD(7, 4)
#define CSTF__CSTF_PERIPHID4__FOURKB_COUNT__POS       4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID4__JEP106_CONTINUATION_CODE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID4__JEP106_CONTINUATION_CODE BITFIELD(3, 0)
#define CSTF__CSTF_PERIPHID4__JEP106_CONTINUATION_CODE__POS 0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID0__PART_NUMBER_0   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID0__PART_NUMBER_0           BITFIELD(7, 0)
#define CSTF__CSTF_PERIPHID0__PART_NUMBER_0__POS      0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID1__JEP106_IDENTITY_CODE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID1__JEP106_IDENTITY_CODE    BITFIELD(7, 4)
#define CSTF__CSTF_PERIPHID1__JEP106_IDENTITY_CODE__POS 4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID1__PART_NUMBER_1   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID1__PART_NUMBER_1           BITFIELD(3, 0)
#define CSTF__CSTF_PERIPHID1__PART_NUMBER_1__POS      0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID2__REVISION   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID2__REVISION                BITFIELD(7, 4)
#define CSTF__CSTF_PERIPHID2__REVISION__POS           4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID2__JEP106_ENABLE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID2__JEP106_ENABLE           BITFIELD(3, 3)
#define CSTF__CSTF_PERIPHID2__JEP106_ENABLE__POS      3

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID2__JEP106_IDENTITY   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID2__JEP106_IDENTITY         BITFIELD(2, 0)
#define CSTF__CSTF_PERIPHID2__JEP106_IDENTITY__POS    0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID3__REVAND   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID3__REVAND                  BITFIELD(7, 4)
#define CSTF__CSTF_PERIPHID3__REVAND__POS             4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_PERIPHID3__CUSTOMER_MODIFIED   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_PERIPHID3__CUSTOMER_MODIFIED       BITFIELD(3, 0)
#define CSTF__CSTF_PERIPHID3__CUSTOMER_MODIFIED__POS  0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID0__PREAMBLE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID0__PREAMBLE                BITFIELD(7, 0)
#define CSTF__CSTF_COMPONID0__PREAMBLE__POS           0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID1__COMPONENT_CLASS   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID1__COMPONENT_CLASS         BITFIELD(7, 4)
#define CSTF__CSTF_COMPONID1__COMPONENT_CLASS__POS    4

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID1__PREAMBLE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID1__PREAMBLE                BITFIELD(3, 0)
#define CSTF__CSTF_COMPONID1__PREAMBLE__POS           0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID2__PREAMBLE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID2__PREAMBLE                BITFIELD(7, 0)
#define CSTF__CSTF_COMPONID2__PREAMBLE__POS           0

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CSTF__CSTF_COMPONID3__PREAMBLE   
 *
 * @BRIEF        Bitfield description is not available - (RO)
 *
 *//*------------------------------------------------------------------------ */
#define CSTF__CSTF_COMPONID3__PREAMBLE                BITFIELD(7, 0)
#define CSTF__CSTF_COMPONID3__PREAMBLE__POS           0


/*
 * List of register bitfields values for component CSTF
 *
 */


#ifdef __cplusplus
}
#endif
#endif  /* __CSTF_CRED_H */
