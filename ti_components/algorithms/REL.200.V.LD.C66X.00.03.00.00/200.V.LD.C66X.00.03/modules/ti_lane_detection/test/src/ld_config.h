/*
* module name       :TI Lane Detection 
*
* module descripton :Lane Detection and departure warning using TI�s C66x DSP
*
*/
/*
 
Copyright (c) [2014] � [2017] Texas Instruments Incorporated
 
All rights reserved not granted herein.
 
Limited License.  
 
Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive license under copyrights and patents it now or hereafter owns or controls to make, have made, use, import, offer to sell and sell ("Utilize") this software subject to the terms herein.  With respect to the foregoing patent license, such license is granted  solely to the extent that any such patent is necessary to Utilize the software alone.  The patent license shall not apply to any combinations which include this software, other than combinations with devices manufactured by or for TI (�TI Devices�).  No hardware patent is licensed hereunder.
 
Redistributions must preserve existing copyright notices and reproduce this license (including the above copyright notice and the disclaimer and (if applicable) source code license limitations below) in the documentation and/or other materials provided with the distribution
 
Redistribution and use in binary form, without modification, are permitted provided that the following conditions are met:
 
*       No reverse engineering, decompilation, or disassembly of this software is permitted with respect to any software provided in binary form.
 
*       any redistribution and use are licensed by TI for use only with TI Devices.
 
*       Nothing shall obligate TI to provide you with source code for the software licensed and provided to you in object code.
 
If software source code is provided to you, modification and redistribution of the source code are permitted provided that the following conditions are met:
 
*       any redistribution and use of the source code, including any resulting derivative works, are licensed by TI for use only with TI Devices.
 
*       any redistribution and use of any object code compiled from the source code and any resulting derivative works, are licensed by TI for use only with TI Devices.
 
Neither the name of Texas Instruments Incorporated nor the names of its suppliers may be used to endorse or promote products derived from this software without specific prior written permission.
 
DISCLAIMER.
 
THIS SOFTWARE IS PROVIDED BY TI AND TI�S LICENSORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL TI AND TI�S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
*/

#ifndef LD_CONFIG_H_
#define LD_CONFIG_H_

#include "configparser.h"
#include "stdint.h"
#include "xdais_types.h"
#include "ild_ti.h"

#define LD_FILE_NAME_SIZE  (256)
#define LD_NUM_MAX_TESTCASES (20)

typedef struct
{
    uint8_t  inFileName[LD_FILE_NAME_SIZE];
    uint8_t  outFileName[LD_FILE_NAME_SIZE];
    uint16_t maxImageWidth;
    uint16_t maxImageHeight;
    uint16_t actualImgWidth;
    uint16_t actualImgHeight;
    uint16_t maxFrames;
    uint16_t roiWidth;
    uint16_t roiHeight;
    uint16_t startX;
    uint16_t startY;
    uint8_t  cannyHiThresh;
    uint8_t  cannyLoThresh;
    uint8_t  houghNmsThresh;
    uint16_t  maxRho;
    uint16_t  startThetaLeft;
    uint16_t  endThetaLeft;
    uint16_t  startThetaRight;
    uint16_t  endThetaRight;
    uint8_t  thetaStepSize;
    uint8_t  trackMethod;
    uint8_t  enableWarning;
    uint8_t  numHoughMaximasDet;
    uint8_t  numHoughMaximasTrack;
    uint16_t departThetaLeftMin;
    uint16_t departThetaLeftMax;
    uint16_t departRhoLeftMin;
    uint16_t departRhoLeftMax;
    uint16_t departThetaRightMin;
    uint16_t departThetaRightMax;
    uint16_t departRhoRightMin;
    uint16_t departRhoRightMax;
    uint8_t visType;
} sLD_Config;

extern uint32_t ld_numTestCases;
extern sLD_Config gConfig_LD[LD_NUM_MAX_TESTCASES];
extern sTokenMapping gsTokenMap_LD[MAX_ITEMS_TO_PARSE];

#endif /* LD_CONFIG_H_ */

