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


#ifndef _OSA_MEM_H_
#define _OSA_MEM_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>


#include <osa_mutex.h>
#include <osa_mem_shared.h>

#define  OSA_MEM_MAXHEAPS                                                 (8U)

typedef enum
{
  OSA_MEM_REGION_TYPE_SR0,
  OSA_MEM_REGION_TYPE_SR1,
  OSA_MEM_REGION_TYPE_REMOTE_LOG,
  OSA_MEM_REGION_TYPE_SYSTEM_IPC,
  OSA_MEM_REGION_TYPE_OPENVX_OBJ_DESC,
  OSA_MEM_REGION_TYPE_AUTO,
  OSA_MEM_REGION_TYPE_INVALID,
  OSA_MEM_REGION_TYPE_MAX

} OSA_MemRegionType;

typedef struct
{
  unsigned int physAddr;
  unsigned int virtAddr;
  unsigned int size;
} OSA_MemRegion;

int OSA_memInit(void);
int OSA_memDeInit(void);

unsigned int OSA_memMap(unsigned int physAddr, unsigned int size);
int          OSA_memUnMap(unsigned int virtAddr, unsigned int size);

unsigned int OSA_memPhys2Virt(unsigned int physAddr, OSA_MemRegionType type);
unsigned int OSA_memVirt2Phys(unsigned int virtAddr, OSA_MemRegionType type);

unsigned int OSA_memOffset2Virt(unsigned int offset, OSA_MemRegionType type);
unsigned int OSA_memVirt2Offset(unsigned int virtAddr, OSA_MemRegionType type);

unsigned int OSA_memPhys2Offset(unsigned int physAddr, OSA_MemRegionType type);
unsigned int OSA_memOffset2Phys(unsigned int offset, OSA_MemRegionType type);

unsigned int OSA_memMapHeapIdToRegionId(Osa_HeapId heapId);

int OSA_memCacheWb(unsigned int virtAddrStart, unsigned int virtAddrEnd);
int OSA_memCacheInv(unsigned int virtAddr, unsigned int length);

Void* OSA_memAllocSR(UInt32 heapId, UInt32 size, UInt32 align);
Int32 OSA_memFreeSR(UInt32 heapId, Ptr addr, UInt32 size);


unsigned int OSA_getOpenVxShmVirtAddr();
unsigned int OSA_memVirt2RegionType(unsigned int virtAddr);
unsigned int OSA_memPhys2RegionType(unsigned int physAddr);

#endif /* _OSA_MEM_H_ */

