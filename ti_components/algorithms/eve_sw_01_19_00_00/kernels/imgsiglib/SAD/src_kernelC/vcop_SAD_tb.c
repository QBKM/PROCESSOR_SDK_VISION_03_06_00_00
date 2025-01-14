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


#include <stdio.h>
#include <vcop.h>

#include "test_profile.h"
typedef unsigned char  Uint8;
typedef unsigned short Uint16;
typedef unsigned int   Uint32;

typedef char    Int8;
typedef short   Int16;
typedef int     Int32;

#ifndef __DATA_2__

#define   TRANSPOSE_WIDTH            8
#define   TRANSPOSE_WIDTH_IN_BYTES  (8 * 4)
#define   TRANSPOSE_WIDTH_IN_HW     (8 * 2)

#define   BYTES_IN_HALF_WD   2
#define   BYTES_IN_WORD      4

#define   TWOSIXTY           260

/*-----------------------------------------------------------------------*/
/* Size of entire frame being processed.                                 */
/*-----------------------------------------------------------------------*/

#define   IMAGE_W           (32)
#define   IMAGE_H           (16)

/*-----------------------------------------------------------------------*/
/* Block size for SAD computation.                                       */
/*-----------------------------------------------------------------------*/

#define   BLK_W             (8)
#define   BLK_H             (8)

/*-----------------------------------------------------------------------*/
/* Size of input block being compared. This is a sub block from the      */
/* input frame.                                                          */
/*-----------------------------------------------------------------------*/

#define   IN_W              (8)
#define   IN_H              (8)

/*-----------------------------------------------------------------------*/
/* Size of reference block over which input block of blk_w X blk_h is    */
/* being compared.                                                       */
/*-----------------------------------------------------------------------*/

#define   REF_W             (32)
#define   REF_H             (16)

/*-----------------------------------------------------------------------*/
/* Offset values in the horizontal and vertical directions to jump       */
/* to next sub-block in the reference frame to run SAD function over.    */
/*-----------------------------------------------------------------------*/

#define   OFFSET_HORZ       (1)
#define   OFFSET_VERT       (1)

/*-----------------------------------------------------------------------*/
/* Steps in the vertical and horizontal direction --                     */
/* NO_STEPS_HORZ X NO_STEPS_VERT gives the total number of blocks in the */
/* reference frame being compared to the input block.                    */
/*-----------------------------------------------------------------------*/

#define   NO_STEPS_HORZ     (16) // This has to be a multiple of 16
#define   NO_STEPS_VERT     (2)

/*-----------------------------------------------------------------------*/
/* These are the total number of input blocks of size blk_w X blk_h for  */
/* which SAD values are being computed.                                  */
/*-----------------------------------------------------------------------*/

#define   NO_INPUT_BLKS_VERT    3
#define   NO_INPUT_BLKS_HORZ    2

#define   N0                (IMAGE_W * IMAGE_H)
#define   Nout              (NO_STEPS_VERT * NO_STEPS_HORZ)
#define   Ninter            (NO_STEPS_HORZ * NO_STEPS_VERT *  TRANSPOSE_WIDTH_IN_HW)
#define   Nmins             (NO_STEPS_VERT * NO_STEPS_HORZ * BLK_W)

#pragma DATA_SECTION(in_data, "Adata");
char in_data[N0] =
{

   0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00,
   0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00,
   0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00,
   0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00,
   0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00,
   0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00,
   0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00,
   0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#pragma DATA_SECTION(ref_data, "Bdata");
char ref_data[N0] =
{
    0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

};

#pragma DATA_SECTION(ref, "Cdata");
signed int ref[Nout] =
{
    0x00, 0x018, 0x15, 0x2D, 0x8A, 0xA2,
};

#else

#define   TRANSPOSE_WIDTH    8
#define   TRANSPOSE_WIDTH_IN_BYTES  (8 * 4)
#define   TRANSPOSE_WIDTH_IN_HW     (8 * 2)

#define   BYTES_IN_HALF_WD   2
#define   BYTES_IN_WORD      4

#define   TWOSIXTY           260

/*-----------------------------------------------------------------------*/
/* Size of entire frame being processed.                                 */
/*-----------------------------------------------------------------------*/

#define   IMAGE_W           (32)
#define   IMAGE_H           (16)

/*-----------------------------------------------------------------------*/
/* Block size for SAD computation.                                       */
/*-----------------------------------------------------------------------*/

#define   BLK_W             (16)
#define   BLK_H             (8)

/*-----------------------------------------------------------------------*/
/* Size of input block being compared. This is a sub block from the      */
/* input frame.                                                          */
/*-----------------------------------------------------------------------*/

#define   IN_W              (16)
#define   IN_H              (16)

/*-----------------------------------------------------------------------*/
/* Size of reference block over which input block of blk_w X blk_h is    */
/* being compared.                                                       */
/*-----------------------------------------------------------------------*/

#define   REF_W             (32)
#define   REF_H             (16)

/*-----------------------------------------------------------------------*/
/* Offset values in the horizontal and vertical directions to jump       */
/* to next sub-block in the reference frame to run SAD function over.    */
/*-----------------------------------------------------------------------*/

#define   OFFSET_HORZ       (1)
#define   OFFSET_VERT       (4)

/*-----------------------------------------------------------------------*/
/* Steps in the vertical and horizontal direction --                     */
/* NO_STEPS_HORZ X NO_STEPS_VERT gives the total number of blocks in the */
/* reference frame being compared to the input block.                    */
/*-----------------------------------------------------------------------*/

#define   NO_STEPS_HORZ     (16) // This has to be a multiple of 16
#define   NO_STEPS_VERT     (2)

/*-----------------------------------------------------------------------*/
/* These are the total number of input blocks of size blk_w X blk_h for  */
/* which SAD values are being computed.                                  */
/*-----------------------------------------------------------------------*/

#define   NO_INPUT_BLKS_VERT    2
#define   NO_INPUT_BLKS_HORZ    3

#define   N0                (IMAGE_W * IMAGE_H)
#define   Nout              (NO_INPUT_BLKS_VERT * NO_INPUT_BLKS_HORZ)
#define   Ninter            (NO_STEPS_HORZ * NO_STEPS_VERT * ( BLK_W + (BLK_W/TRANSPOSE_WIDTH)))
#define   Nmins             (NO_STEPS_VERT * NO_STEPS_HORZ * BLK_W)

#pragma DATA_SECTION(in_data, "Adata");
char in_data[N0] =
{

   0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,

};

#pragma DATA_SECTION(ref_data, "Bdata");
char ref_data[N0] =
{
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00,
  0x00, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00,
  0x03, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
  0x30, 0x0a, 0x0a, 0x18, 0x18, 0x18, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x30,
  0x33, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x33,

  0x30, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x30,
  0x33, 0x09, 0x09, 0x17, 0x17, 0x17, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x33,
  0x30, 0x08, 0x08, 0x16, 0x16, 0x16, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x30,
  0x33, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x33,
  0x33, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x33,
  0x30, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x30,
  0x33, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x33,
  0x33, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x33,

};

#pragma DATA_SECTION(ref, "Cdata");
signed int ref[Nout] =
{
    0x000, 0x031, 0x062, 0x081, 0x0a1, 0x0c1,

};
#endif

#pragma DATA_SECTION(sad_data, "Bdata");
signed short sad_data[N0] = {0};

#pragma DATA_SECTION(inter_array, "Adata");
signed short inter_array[Ninter] = {0};

#pragma DATA_SECTION(min_ary, "Cdata");
short min_ary[Nmins] = {0};

#pragma DATA_SECTION(out, "Cdata");
short out[Nout] = {0};

#if VCOP_HOST_EMULATION
  #include "vcop_SAD_kernel.k"    // kernel source
#else
  #include "../inc/vcop_SAD_kernel.h"
#endif

void print_output();
int  verify_output();


int main()
{
    int i, j, l, m;
    short min_sad_val;
    int  match_x_offset = 0;
    int  match_y_offset = 0;
    short *min_ary_ptr;

#ifdef REPORT
    int ok = 0;
    FILE* fpReport = fopen("../../../report.csv","a+");
    #ifdef SCTM
    unsigned int sctm_t1, sctm_t2, exec_diff;
    unsigned int overflow;

    EVE_SCTM_Enable(CTM);
    EVE_SCTM_CounterConfig(CTM, SCTM_Counter_0, VCOP_BUSY, SCTM_DURATION);
    EVE_SCTM_CounterTimerEnable(CTM, SCTM_Counter_0);

    sctm_t1 = EVE_SCTM_CounterRead (CTM, SCTM_Counter_0);
    #endif
#endif

    /*-------------------------------------------------------------------*/
    /* Actual filtering operation happens here as part of the test bench */
    /* and the results are written out so as to be compared with EVE     */
    /* results.                                                          */
    /*-------------------------------------------------------------------*/

    i = 0;
    j = 0;

    for ( i = 0; i < NO_INPUT_BLKS_VERT; i++)
    {
        for ( j = 0; j < NO_INPUT_BLKS_HORZ; j++)
        {

            vcop_SAD_char_int
            (
                &in_data[ (i * IN_W) + j],
                ref_data,
                sad_data,
                inter_array,
                &min_ary[( NO_STEPS_VERT * NO_STEPS_HORZ) * ( (i * NO_INPUT_BLKS_HORZ) + j) ],
                BLK_W,
                BLK_H,
                IN_W,
                IN_H,
                REF_W,
                REF_H,
                OFFSET_HORZ,
                OFFSET_VERT,
                NO_STEPS_HORZ,
                NO_STEPS_VERT
            );

            /*-------------------------------------------------------------------*/
            /* Identify the block with minimum SAD here...                       */
            /*-------------------------------------------------------------------*/
#ifdef CONSOLE
            printf("\n----  INPUT BLOCK %d  ---\n", ((i * NO_INPUT_BLKS_HORZ) + j));
#endif

            min_sad_val = 0x7FFF;

            min_ary_ptr = &min_ary[( NO_STEPS_VERT * NO_STEPS_HORZ) * ( (i * NO_INPUT_BLKS_HORZ) + j) ];

            for (l = 0; l < NO_STEPS_VERT; l++)
            {
                for (m = 0; m < NO_STEPS_HORZ; m++)
                {
#ifdef CONSOLE
                    printf("0x%2.3x, ",  min_ary_ptr[ (l * NO_STEPS_HORZ + m)]);
#endif

                    if ( min_ary_ptr[ (l * NO_STEPS_HORZ + m)] < min_sad_val )
                    {
                        min_sad_val = min_ary_ptr[ (l * NO_STEPS_HORZ + m)];
                        match_x_offset = m * OFFSET_HORZ;
                        match_y_offset = l * OFFSET_VERT;
                    }
                }
#ifdef CONSOLE
                printf("\n");
#endif
            }
#ifdef CONSOLE
             printf("\n");
#endif

            /*-----------------------------------------------------------*/
            /* Write the minimum values for all input blocks.            */
            /*-----------------------------------------------------------*/

            out[(i * NO_INPUT_BLKS_HORZ) + j] = (short) (min_sad_val);
#ifdef CONSOLE
            printf("\n Minimum SAD value is = %3x and located at ", out[(i * NO_INPUT_BLKS_HORZ) + j]);
            printf("reference block offset (%d, %d)\n-- ** --\n\n", match_x_offset, match_y_offset);
#endif

        }
    }

    print_output();

#ifdef REPORT
    #ifdef SCTM
    sctm_t2 = EVE_SCTM_CounterRead (CTM, SCTM_Counter_0);
    overflow = EVE_SCTM_OverflowCheck(CTM,SCTM_Counter_0);
    assert(overflow!=1);

    exec_diff = sctm_t2 - sctm_t1;
    EVE_SCTM_CounterTimerDisable(CTM, SCTM_Counter_0);
    #endif

    fprintf(fpReport,"vcop_SAD,");
    fprintf(fpReport,"%d,",IMAGE_W);
    fprintf(fpReport,"%d,",IMAGE_H);
    fprintf(fpReport,"%d,",BLK_W);
    fprintf(fpReport,"%d,",BLK_H);
    fprintf(fpReport,"1,");

    ok =  verify_output();
    if(ok) {
        fprintf(fpReport,"PASS,");
    }
    else {
        fprintf(fpReport,"FAIL,");
    }
    #ifdef SCTM
        fprintf(fpReport,"%d\n",exec_diff);
    #endif
    if(fpReport) {
        fclose(fpReport);
    }
#endif

    return 0;
}


void print_output()
{
   int k;

   printf("Minimum SADs for input blocks\n\n");

   for ( k = 0; k < NO_INPUT_BLKS_VERT * NO_INPUT_BLKS_HORZ; k++)
       printf("0x%2.3x ", out[k]);
}


int verify_output()
{
   int ok = 1;
   int i;

   for (i = 0; i < Nout; ++i)
   {
      if (out[i] != ref[i])
      {
         ok = 0;
      }
   }

#ifdef CONSOLE
   printf("\n\nSAD C-kernel:  ");
   printf(ok ? "PASS\n\n" : "FAIL\n\n");
#endif

   return ok;
}

