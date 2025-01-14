/*
*
* Copyright (c) 2009-2017 Texas Instruments Incorporated
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

/*
 *****************************************************************************
 *
 * BAM DMA node for feature matching applet
 *
 *  Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
 * ALL RIGHTS RESERVED
 *****************************************************************************
*/

/**
 *****************************************************************************
 * @file
 *  feature_matching_bam_dma_node.h
 *
 * @brief
 *
 * @version 0.1 (Aug 2014) : First version of custom dma node for feature
 *                           matching applet
 *
 *****************************************************************************
*/

#ifndef FEATURE_MATCHING_BAM_DMA_NODE_H_
#define FEATURE_MATCHING_BAM_DMA_NODE_H_

#include "bam_types.h"

typedef struct
{
  uint16_t  descriptorLength;
  uint16_t  numDescPerIter1;
  uint16_t  numDescPerIter2;
} BAM_DMA_NODE_FEAT_MATCH_args;

typedef struct
{
  uint32_t totalNumBytesIn1;
  uint32_t totalNumBytesIn2;
  uint16_t numDesc1PerIter;
  uint16_t numDesc2PerIter;
  uint8_t *extMemPtrIn1;
  uint8_t *extMemPtrIn2;
  uint8_t *extMemPtrOut;
} BAM_DMA_NODE_FEAT_MATCH_updateParams;

/* Source Node kernel Info, helper, and exec functions */
extern BAM_KernelInfo           gBAM_TI_featMatchDmaNodeReadKernel;
extern BAM_KernelHelperFuncDef  gBAM_TI_featMatchDmaNodeReadKernelHelperFunc;
extern BAM_KernelExecFuncDef    gBAM_TI_featMatchDmaNodeReadKernelExecFunc;

/* Sink Node kernel Info, helper, and exec functions */
extern BAM_KernelInfo           gBAM_TI_featMatchDmaNodeWriteKernel;
extern BAM_KernelHelperFuncDef  gBAM_TI_featMatchDmaNodeWriteKernelHelperFunc;
extern BAM_KernelExecFuncDef    gBAM_TI_featMatchDmaNodeWriteKernelExecFunc;

#endif /* FEATURE_MATCHING_BAM_DMA_NODE_H_ */

