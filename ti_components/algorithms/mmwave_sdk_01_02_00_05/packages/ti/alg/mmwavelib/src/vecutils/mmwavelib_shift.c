 /*
  * (C) Copyright 2017, Texas Instruments Incorporated -  http://www.ti.com/
  *-------------------------------------------------------------------------
  *
  *  Redistribution and use in source and binary forms, with or without
  *  modification, are permitted provided that the following conditions are
  *  met:
  *
  *    Redistributions of source code must retain the above copyright
  *    notice, this list of conditions and the following disclaimer.
  *
  *    Redistributions in binary form must reproduce the above copyright
  *    notice, this list of conditions and the following disclaimer in the
  *    documentation and/or other materials provided with the distribution.
  *
  *    Neither the name of Texas Instruments Incorporated nor the names of
  *    its contributors may be used to endorse or promote products derived
  *    from this software without specific prior written permission.
  *
  *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
  *  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
  *  TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
  *  PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  *  THEORY OF LIABILITY, WHETHER IN CONTRACT,  STRICT LIABILITY, OR TORT
  *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  */
/**
 *   @file     mmwavelib_shift.c
 *
 *   @brief    Routine to right-shift vector elements
 *
 */

#include <stdint.h>
#include <c6x.h>
#include "mmwavelib_vecutils.h"

/*!************************************************************************************************
 * @brief                  Function shifts each signed 16-bit element in vector right by k bits.
 *                         The math is as follows:
 *                         for ( i=0; i < len; i++)
 *                         {
 *                             output[i] = input[i]>>k;
 *                         }
 *
 * @param[in]              input    : Input array.
 * @param[out]             output   : Output array.
 * @param[in]              numshift : Number of bits to be right-shifted.
 * @param[in]              len      : Number of 16-bit elements in input.
 *
 * @return                 void
 *
 * @pre                    (1)input and output are 8 byte alligned.
 * @pre                    (2)len is a multiple of 8.
 *
 * @ingroup                MMWAVELIB_VEC_UTILS
 *
 * Cycles                  0.25*len + 32 (cgt8.1.3)
 **************************************************************************************************
 */
void mmwavelib_shiftright16(int16_t input[restrict],
                            int16_t output[restrict],
                            uint8_t numshift,
                            uint32_t len)
{
    uint64_t doubleWord;
    uint32_t upperWord, lowerWord;
    uint32_t i;
    uint64_t *restrict inptr = (uint64_t*)input;
    uint64_t *restrict outptr = (uint64_t*)output;

    _nassert((uint32_t) inptr % 8U == 0); /* 8 byte alligned */
    _nassert((uint32_t) outptr % 8U == 0); /* 8 byte alligned */
    _nassert(len % 8U == 0);

    for(i = 0; i < len/4U; i++)
    {
        doubleWord = inptr[i]; /*four 16-bit input*/

        lowerWord = _shr2(_loll(doubleWord), numshift);
        upperWord = _shr2(_hill(doubleWord), numshift);

        outptr[i] = _itoll(upperWord, lowerWord);
    }

}


/*!************************************************************************************************
 * @brief                  Function shifts each signed 32-bit word in vector right by k bits.
 *                         The math is as follows:
 *                         for ( i=0; i < len; i++)
 *                         {
 *                             output[i] = input[i]>>k;
 *                         }
 *
 * @param[in]              input    : Input array.
 * @param[out]             output   : Output array.
 * @param[in]              numshift : Number of bits to be right-shifted.
 * @param[in]              len      : Number of 32-bit words in input.
 *
 * @return                 void
 *
 * @pre                    (1)input and output are 8 byte alligned.
 * @pre                    (2)len is a multiple of 4.
 *
 * @ingroup                MMWAVELIB_VEC_UTILS
 *
 * Cycles                  0.5*len + 32 (cgt8.1.3)
 **************************************************************************************************
 */
void mmwavelib_shiftright32(int32_t input[restrict],
                            int32_t output[restrict],
                            uint8_t numshift,
                            uint32_t len)
{
    uint64_t doubleWord;
    int32_t  upperWord, lowerWord;
    uint32_t i;
    uint64_t *restrict inptr = (uint64_t*)input;
    uint64_t *restrict outptr = (uint64_t*)output;

    _nassert((uint32_t) inptr % 8U == 0); /* 8 byte alligned */
    _nassert((uint32_t) outptr % 8U == 0); /* 8 byte alligned */
    _nassert(len % 4U == 0); /*So that loop can be unrolled by 2*/
    
    for(i = 0; i < len/2U; i++)
    {
        doubleWord = inptr[i]; /*two 32-bit input*/

        /*lowerWord = ((int32_t)_loll(doubleWord)) >> numshift;
        upperWord = ((int32_t)_hill(doubleWord)) >> numshift;*/
        lowerWord = _sshvr((int32_t)_loll(doubleWord), (int32_t)numshift);
        upperWord = _sshvr((int32_t)_hill(doubleWord), (int32_t)numshift);

        outptr[i] = _itoll(upperWord, lowerWord);
    }

}
