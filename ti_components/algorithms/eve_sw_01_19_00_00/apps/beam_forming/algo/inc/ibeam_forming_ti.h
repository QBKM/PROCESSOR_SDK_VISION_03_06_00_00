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


/**
 *  @file       ibeam_forming_ti.h
 *
 *  @brief      This file defines the interface for Beam Forming
 *               applet.
 *  @version 0.0 (Dec 2016) : Base version.
 */

/** @ingroup    ti_ivision_BEAM_FORMING */
/*@{*/
#ifndef IBEAM_FORMING_TI_H_
#define IBEAM_FORMING_TI_H_

#include <ivision.h>
#include <ti/xdais/ires.h>


/**
 * @brief The unique const funtion table for the BEAM_FORMING_TI.
 */
extern const IVISION_Fxns BEAM_FORMING_TI_VISION_FXNS;

/**
* @brief IRES interface of the BEAM_FORMING_TI_ algorithm
*/
extern const IRES_Fxns BEAM_FORMING_TI_IRES;


#define BEAM_FORMING_TI_MAX_NUM_DETECTIONS (2048U)
#define BEAM_FORMING_TI_MAX_STEERING_MATRIX_SIZE (16384U)


/**
  @brief Following enums describes the error codes generated by this applet

  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_CONFIGURATION : Indicates an
  un-supported configuration

  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_NUM_DETECTIONS : Indicates
  that numDetection is above max number of detections

  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_STEERINGMATRIX_SIZE : Indicates
  that steering matrix size is more than supported

  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_COORDINATE_FORMAT: Indicates
  that the coordinate buffer pointer is not supported for current configuration

  BEAM_FORMING_TI_BUFDESC_IN_TOTAL :
  Total number of input buffers.
*/
typedef enum
{
  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_CONFIGURATION = IALG_CUSTOMFAILBASE,
  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_NUM_DETECTIONS,
  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_STEERINGMATRIX_SIZE,
  BEAM_FORMING_TI_ERRORTYPE_UNSUPPORTED_COORDINATE_FORMAT,
  BEAM_FORMING_TI_ERRORTYPE_MAX_ERROR_CODE
} BEAM_FORMING_TI_ErrorType;


/**
  @brief User provides most of the information through buffer descriptor
         during process call. Below enums define the purpose of buffer. For optimal
         performance all the buffers should be aligned to 128 bytes boundary.

  BEAM_FORMING_TI_BUFDESC_IN_ANTENNA_DATA_BUF: This buffer descriptor provides the
  pointer to a buffer which contains the antenna data. The data in this buffer is expected to be
  arranged as numAntennas x numDetections. Buffer is expected to look as shown below :

       __|A0| A1| A2|........ |Ak |
       D0|
       D1|
       D2|
          |
          |
      Dn |

  Here each entry is stored as real and imaginary part interleaved together. It is important to note that
  only following parameters of this structure are used by  this applet :
  bufDesc[]->bufPlanes[].buf
  bufDesc[]->bufPlanes[].accessMask

  BEAM_FORMING_TI_BUFDESC_IN_COORDINATE_BUF: This buffer descripter is to provide the pointer
  to the coordinate buffer which can be given in different format. Kindly refer
  BEAM_FORMING_TI_CoordinateBufFormat for various format supported by this applet.

  BEAM_FORMING_TI_BUFDESC_IN_STEERINGMATRIX_BUF: This buffer descriptor provides the
  pointer to a buffer which steering matrix for beam forming. Steering matrix dimension is expected
  to be numAntennas x numAngles.  Here each entry is stored as real and imaginary part interleaved together.
  Each row of steering matrix corresponds to one bin/angle. Final output gives the row number as binAngle.
  User is expected to do the mapping of binAngle to actual angle.
  The steering matrix is expected to be arranged
  as follows
  Steering vector bin_0
  Steering vector bin_1
  :
  :
  Steering vector bin_n

  Where offset between steering matrix of different bin is given by numAngles x numAntennas * sizeof(int16_t) * 2.
  As an example if user wants to detect from -20 to +20 degrees in azimuth and -10 to +10 degrees in elevation
  he should give a steering matrix having 41 x 21 rows where each row corresponds to the steering vector of a particular
  angle in azimuth or elevation. Final output will give the row via BEAM_FORMING_TI_Coordinates.angleBin field. User can
  then map this angle bin to the particular angle in azimuth or elevation


  BEAM_FORMING_TI_BUFDESC_IN_TOTAL :
  Total number of input buffers.
*/

typedef enum
{
  BEAM_FORMING_TI_BUFDESC_IN_ANTENNA_DATA_BUF = 0,
  BEAM_FORMING_TI_BUFDESC_IN_COORDINATE_BUF = 1,
  BEAM_FORMING_TI_BUFDESC_IN_STEERINGMATRIX_BUF = 2,
  BEAM_FORMING_TI_BUFDESC_IN_TOTAL       = 3
} BEAM_FORMING_TI_InBufOrder ;


/**
  @brief User provides most of the information through buffer descriptor
         during process call. Below enums define the purpose of out buffer. For optimal
         performance all the buffers should be aligned to 128 byte boundary.

  BEAM_FORMING_TI_BUFDESC_OUT_BUFFER:This buffer descriptor provides the
  output buffer to store the data after Beam Forming. This buffer contains the list of structure
  as defines in BEAM_FORMING_TI_Coordinates for each detection
  It is important to note that only following enteries from this structure are used by
  this applet :
  bufDesc[]->bufPlanes[].buf
  bufDesc[]->bufPlanes[].accessMask

  BEAM_FORMING_TI_BUFDESC_OUT_TOTAL :
  Total number of output buffers.
*/

typedef enum
{
  BEAM_FORMING_TI_BUFDESC_OUT_BUFFER = 0,
  BEAM_FORMING_TI_BUFDESC_OUT_TOTAL  = 1
} BEAM_FORMING_TI_OutBufOrder ;

/**
  @brief This enum is to select the type of format in which coordinate
  buffer(BEAM_FORMING_TI_BUFDESC_IN_COORDINATE_BUF) is given to this applet.

  BEAM_FORMING_TI_COORDINATE_BUF_FORMAT_1:
   In this format the pointer to coordinate buffer points to the coordinates of each detection which is
  stored as a list of coordinates structure defined by BEAM_FORMING_TI_Coordinates. Angle  field of
  this structure is optional

  BEAM_FORMING_TI_COORDINATE_BUF_FORMAT_2:
  In this format the pointer to coordinate buffer points to a buffer which holds the range and doppler
  coordinate in interleave manner. Where each range and doppler is 16 bit signed number and stored such
  that range lies in the upper 16 bit and doppler coordinate types in lower 16  bit.

*/

typedef enum
{
  BEAM_FORMING_TI_COORDINATE_BUF_FORMAT_1,
  BEAM_FORMING_TI_COORDINATE_BUF_FORMAT_2
} BEAM_FORMING_TI_CoordinateBufFormat;

/**
  BEAM_FORMING_TI_Coordinates
  @brief  This structure defines coordinates for a detection after the beam forming. It
  is important to note that it is expected that order enery and angleBin enteries in this
  structure remains same ( with energy coming before angleBin).

@param  velocity
            velocity or a particular detection.

@param  range
            Range dimension for a particular detection

@param energy
            Energy calculated for a particular detection

@param angleBin
            Bin number from the steering matrix corresponding to a particular detection. User is expected
            to do the mapping of bin to angle. This field is not required to be populated for this applet
*/
typedef struct
{
  uint16_t       velocity;
  uint16_t       range;
  uint16_t       energy;
  uint16_t       angleBin;
} BEAM_FORMING_TI_Coordinates;


/**
  @struct BEAM_FORMING_TI_CreateParams
  @brief  This structure contains all the parameters needed
              at create time for this applet

@param  maxNumAntenna
              Maximum number of antennas in the system

@param maxNumDetection
              Maximum number of detections. It is important to note that maximum number
              of detection supported is given by BEAM_FORMING_TI_MAX_NUM_DETECTIONS macro

@param maxNumAngle
              Maximum number of angles

@param coordinateBufFormat
              This field is used to indicate the format of the coordinate buffer. Kindly refer
              BEAM_FORMING_TI_CoordinateBufFormat enum for various supported formats.
*/
typedef struct
{
  IVISION_Params visionParams;
  uint16_t       maxNumAntenna;
  uint16_t       maxNumDetection;
  uint16_t       maxNumAngle;
  uint8_t        coordinateBufFormat;
} BEAM_FORMING_TI_CreateParams;


/**
  @struct BEAM_FORMING_TI_InArgs
  @brief  This structure contains all the parameters which are given as an
          input to  Beam Forming applet at frame level

  @param  iVisionInArgs
                Common InArgs  for all ivision based modules

@param  numDetections
            Number of detections

  @param  numAntennas
              number of antennas.

  @param  numAngles
                number of angles/bin for beam forming

 @param beamFormingScaling
                Scaling ( right shift with rounding) that needs to be applied after doing compelx matrix
                multiplication for beam forming. Mathematically if after complex multiplication either real/imaginary part is
                x then final output would be equal to (x + 1 << (n - 1) ) >> n, where n is the scaling factor
@param energyScaling
               Scaling ( right shift with rounding) that needs to be applied after calculating the energy in 32 bit
               to convert it to 16 bit. Mathematically if after energy computation energy is x then final output
               would be equal to (x + 1 << (n - 1) ) >> n, where n is the scaling factor


*/

typedef struct
{
  IVISION_InArgs iVisionInArgs;
  uint16_t       numDetections;
  uint16_t       numAntennas;
  uint16_t       numAngles;
  uint16_t       beamFormingScaling;
  uint16_t       energyScaling;
} BEAM_FORMING_TI_InArgs;


/**
  @struct BEAM_FORMING_TI_OutArgs
  @brief  This structure contains all the parameters which are given as an
          output by Beam Forming applet  at frame level

  @param  iVisionOutArgs
          Common outArgs for all ivison based modules
*/

typedef struct
{
  IVISION_OutArgs iVisionOutArgs;
} BEAM_FORMING_TI_OutArgs;


/*@}*/
/* ti_ivision_BEAM_FORMING */

#endif /*IBEAM_FORMING_TI_H_ */
/*==========================================================================*/
/*     END of the FILE                                                      */
/*==========================================================================*/

