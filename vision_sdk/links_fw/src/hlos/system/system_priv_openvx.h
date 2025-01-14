/*
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
*/

/**
 *******************************************************************************
 *
 * \defgroup SYSTEM_IMPL   System framework implementation
 *
 * @{
 *
 *******************************************************************************
 */

/**
 *******************************************************************************
 * \file system_priv_openvx.h
 *
 * \brief  Header file for all system link internal APIs.
 *
 *******************************************************************************
 */

#ifndef SYSTEM_PRIV_OPENVX_H_
#define SYSTEM_PRIV_OPENVX_H_

/*******************************************************************************
 *  INCLUDE FILES
 *******************************************************************************
 */
/* None */

/*******************************************************************************
 *  Defines
 *******************************************************************************
 */

/**
 *******************************************************************************
 *  \brief  OpenVX Descriptor ID mask
 *******************************************************************************
*/
#define SYSTEM_OPENVX_DESC_ID_MASK          (0xFFFFU)
/**
 *******************************************************************************
 *  \brief  OpenVX Descriptor ID shift
 *******************************************************************************
*/
#define SYSTEM_OPENVX_DESC_ID_SHIFT         (12U)


/*******************************************************************************
 *  declaration for openvx notify handler, implemented in openvx layer.
 *******************************************************************************
 */
typedef void(*System_openVxNotifyHandler) (unsigned int payload);


/*******************************************************************************
 *  Data structure's
 *******************************************************************************
 */

/*******************************************************************************
 *  Function Declaration
 *******************************************************************************
 */

int System_openVxSendNotify(unsigned int cpuId, unsigned int payload);
void System_registerOpenVxNotifyCb(System_openVxNotifyHandler notifyCb);
void System_openVxIpcHandler(unsigned int payload, void *arg);
unsigned int System_ovxPhys2Virt(unsigned int phys_addr);
unsigned int System_ovxVirt2Phys(unsigned int virt_addr);
unsigned int System_ovxCacheWb(unsigned int virt_addr, unsigned int length);
unsigned int System_ovxCacheInv(unsigned int virt_addr, unsigned int length);
unsigned int System_ovxIsValidCMemPhysAddr(unsigned int physAddr);
unsigned int System_ovxIsValidCMemVirtAddr(unsigned int virt_addr);
unsigned int System_ovxGetObjDescShm();
void *System_ovxAllocMem(unsigned int size);
void System_ovxFreeMem(void *ptr, unsigned int size);
unsigned int System_openvxIsProcEnabled(unsigned int procId);
void System_openvxHwSpinLockAcquire(uint32_t hw_lock_id);
void System_openvxHwSpinLockRelease(uint32_t hw_lock_id);

#endif

/* @} */
