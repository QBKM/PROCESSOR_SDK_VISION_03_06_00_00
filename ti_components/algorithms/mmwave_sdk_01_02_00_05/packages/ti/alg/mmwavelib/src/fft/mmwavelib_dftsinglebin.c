 /*
  * (C) Copyright 2016, Texas Instruments Incorporated -  http://www.ti.com/
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
 *   @file     mmwavelib_dftsinglebin.c
 *
 *   @brief    Routine to compute single bin DFT
 *
 */
#include <stdint.h>
#include <c6x.h>
#include <ti/alg/mmwavelib/src/fft/mmwavelib_fft.h>

/*!*****************************************************************************************************************
 * \brief
 * Function Name       :    mmwavelib_dftSingleBin
 *
 * \par
 * <b>Description</b>  :    Calculates single bin DFT. 
 *                          for (i = 0; i < length; i++)
 *                            outputComplex +=  inputComplex(i)*exp(-j*2*pi*i*doppInd/length);
 *                        
 *
 * @param[in]               inBuf        : Input int16 real, int16 imaginary complex array,
 *                                         Real part is at low 16 bits, imaginary part is at high 16 bits. 
 * @param[in]               sincos       : Table with sine cosine values for exp(-1j*2*pi*k/N) 
 *                                         Sine is at low 16 bits, cosine is at high 16 bits.
 * @param[out]              output       : Single point DFT value, int32 real in lower half of 64bit,
 *                                         int32 imaginary in higher half.
 * @param[in]               length        : Length of input buffer (size of DFT) must be multiple of 4
 *
 * @param[in]               doppInd       : Index value at wich the DFT is calculated
 *
 * @return                  void
 * @pre                     (1) inBuf must be 8 byte aligned.
 * @pre                     (2) length must be multiple of 4.
 *
 * @ingroup                 MMWAVELIB_FFT
 *
 * Cycles                   length/4*5 + 76 (cgt 8.1.3)
 *******************************************************************************************************************
 */
void mmwavelib_dftSingleBin(const uint32_t inBuf[restrict],
                            const uint32_t sincos[restrict],
                            uint64_t * restrict output,
                            uint32_t length, 
                            uint32_t doppInd)
{
    uint32_t i;
    const int64_t * restrict inputPtr = (const int64_t*) inBuf;
    const int64_t * restrict inputPtrNext = inputPtr;

    uint32_t prod0;
    uint32_t inSamp0;
    uint32_t prod1;
    uint32_t inSamp1;
    uint32_t prod2;
    uint32_t inSamp2;
    uint32_t prod3;
    uint32_t inSamp3;

    uint32_t expIdx = 0;
    uint32_t e0;
    uint32_t e1;
    uint32_t e2;
    uint32_t e3;
    uint32_t eb;

    int32_t sumRe0 = 0;
    int32_t sumIm0 = 0;
    int32_t sumRe1 = 0;
    int32_t sumIm1 = 0;

    e0 = sincos[expIdx];
    expIdx = (expIdx + doppInd) & (length - 1U);
    e1 = sincos[expIdx];
    expIdx = (expIdx + doppInd) & (length - 1U);
    e2 = sincos[expIdx];
    expIdx = (expIdx + doppInd) & (length - 1U);
    e3 = sincos[expIdx];
    expIdx = (expIdx + doppInd) & (length - 1U);
    eb = sincos[expIdx];

    e0 = (uint32_t)_shr2((int32_t)e0, 1U);
    e1 = (uint32_t)_shr2((int32_t)e1, 1U);
    e2 = (uint32_t)_shr2((int32_t)e2, 1U);
    e3 = (uint32_t)_shr2((int32_t)e3, 1U);

    inputPtrNext++;
    for (i = 0; i < (length/2U); i += 2U)
    {
        inSamp0 = _rotl(_loll(*inputPtr), 16U);
        inSamp1  = _swap2(_hill(*inputPtr));

        inputPtr+=2;
        inSamp2 = _rotl(_loll(*inputPtrNext), 16U);
        inSamp3  = _swap2(_hill(*inputPtrNext));
        inputPtrNext+=2;
 
        prod0 = _cmpyr1(inSamp0, e0);
        prod1 = _cmpyr1(inSamp1, e1);
        prod2 = _cmpyr1(inSamp2, e2);
        prod3 = _cmpyr1(inSamp3, e3);

        sumRe0 +=  _ext((int32_t)prod0, 0, 16U);
        sumIm0 +=  _ext((int32_t)prod0, 16U, 16U);

        sumRe0 +=  _ext((int32_t)prod1, 0, 16U);
        sumIm0 +=  _ext((int32_t)prod1, 16U, 16U);

        sumRe1 +=  _ext((int32_t)prod2, 0, 16U);
        sumIm1 +=  _ext((int32_t)prod2, 16U, 16U);

        sumRe1 +=  _ext((int32_t)prod3, 0, 16U);
        sumIm1 +=  _ext((int32_t)prod3, 16U, 16U);


        e0 = _cmpyr1(e0, eb);
        e1 = _cmpyr1(e1, eb);
        e2 = _cmpyr1(e2, eb);
        e3 = _cmpyr1(e3, eb);

    }
    *output = (uint64_t)_itoll(sumIm0 + sumIm1, sumRe0 + sumRe1);
}



/*!*****************************************************************************************************************
* \brief
* Function Name       :    mmwavelib_dftSingleBinWithWindow
*
* \par
* <b>Description</b>  :    Calculates single bin DFT with windowing.
*                          
*                          for (i = 0; i < length; i++)
*                             outputComplex +=  inputComplex(i)*win(i)*exp(-j*2*pi*i*doppInd/length);
*                           
*
* @param[in]               inBuf        : Input int16 real, int16 imaginary complex array,
*                                         Real part is at low 16 bits, imaginary part is at high 16 bits.
* @param[in]               sincos       : Table with sine cosine values for exp(-1j*2*pi*k/N)
*                                         Sine is at low 16 bits, cosine is at high 16 bits.
* @param[in]               win          : Window real array (32 bit) of length length/2 (since its a  symmetric window))
* @param[out]              output       : Single point DFT value, int32 real in lower half of 64bit,
*                                         int32 imaginary in higher half.
* @param[in]              length        : Length of input buffer (size of DFT) must be multiple of 4
* @param[in]              doppInd       : Index value at which the DFT is calculated
*
* @return                  void
*
* @pre                     (1) inBuf and win must be 8 byte aligned.
* @pre                     (2) length must be multiple of 4.
*
* @ingroup                 MMWAVELIB_FFT
* Cycles                    length/4*7 + 58 (cgt 8.1.3)
*******************************************************************************************************************
*/
void mmwavelib_dftSingleBinWithWindow(
                   const uint32_t inBuf[restrict],
                   const uint32_t sincos[restrict],
                   const int32_t win[restrict],
                   uint64_t * restrict output,
                   uint32_t length,
                   uint32_t doppInd)
{
    uint32_t i;
    const int64_t * restrict inputPtr = (const int64_t*) inBuf;
    int32_t wina, winb;
    const int64_t *restrict xl_win = (const int64_t *)win;


    uint32_t prod0;
    uint32_t inSamp0;
    uint32_t prod1;
    uint32_t inSamp1;
    uint32_t prod2;
    uint32_t inSamp2;
    uint32_t prod3;
    uint32_t inSamp3;
    int64_t wprod;

    uint32_t expIdx = 0;
    uint32_t e0;
    uint32_t e1;
    uint32_t e2;
    uint32_t e3;
    uint32_t eb;
    uint32_t ebm;
    int64_t temp;
    
    
    int64_t sumRe0 = 0;
    int64_t sumIm0 = 0;
    int64_t sumRe1 = 0;
    int64_t sumIm1 = 0;

    e0 = sincos[expIdx];  /* sincos[0]*/
    expIdx = (expIdx + doppInd) & (length - 1U); 
    e1 = sincos[expIdx]; /*sincos[doppInd]*/
    expIdx = (expIdx + doppInd) & (length - 1U);
    eb = sincos[expIdx]; /*sincos[2*doppInd]*/

    expIdx = (doppInd * (length - 1U)) & (length - 1U);
    e2 = sincos[expIdx];  /* e-j2*pi*(N-1)*doppInd/N)*/
    expIdx = (expIdx - doppInd) & (length - 1U);
    e3 = sincos[expIdx]; /* e-j2*pi*(N-2)*doppInd/N)*/
  
    
    temp = _saddsub2(0U, eb);
    ebm = _packhl2(_hill(temp), _loll(temp));   /* complex conjugate of eb */
    
    
    e0 = (uint32_t)_shr2((int32_t)e0, 1U);     /* right shift to avoid overflow of _cmpyr1*/
    e1 = (uint32_t)_shr2((int32_t)e1, 1U);
    e2 = (uint32_t)_shr2((int32_t)e2, 1U);
    e3 = (uint32_t)_shr2((int32_t)e3, 1U);
        
    
    for (i = 0; i < length/4U; i += 1U)
    {
        inSamp0 = _rotl(_loll(inputPtr[i]), 16U); /* x[2*i] */
        inSamp1  = _swap2(_hill(inputPtr[i]));   /*  x[2*i+1] */

        inSamp2 = _rotl(_hill(inputPtr[length/2U - i - 1U]), 16U);  /* x[N-1-2*i] */
        inSamp3  = _swap2(_loll(inputPtr[length/2U - i - 1U]));    /* x[N-2-2*i] */

        prod0 = _cmpyr1(inSamp0, e0);
        prod1 = _cmpyr1(inSamp1, e1);
        prod2 = _cmpyr1(inSamp2, e2);
        prod3 = _cmpyr1(inSamp3, e3);

        /* read 2 window elements */
        wina = _loll(xl_win[i]);
        winb = _hill(xl_win[i]);

        wprod  =  _mpy2ir(prod0, wina);
        sumRe0 =  _lsadd(_hill(wprod), sumRe0);
        sumIm0 =  _lsadd(_loll(wprod), sumIm0);

        wprod  =  _mpy2ir(prod1, winb);
        sumRe0 =  _lsadd(_hill(wprod), sumRe0);
        sumIm0 =  _lsadd(_loll(wprod), sumIm0);

        wprod  =  _mpy2ir(prod2, wina);
        sumRe1 =  _lsadd(_hill(wprod), sumRe1);
        sumIm1 =  _lsadd(_loll(wprod), sumIm1);

        wprod  =  _mpy2ir(prod3, winb);
        sumRe1 =  _lsadd(_hill(wprod), sumRe1);
        sumIm1 =  _lsadd(_loll(wprod), sumIm1);

        e0 = _cmpyr1(e0, eb);
        e1 = _cmpyr1(e1, eb);
        e2 = _cmpyr1(e2, ebm);
        e3 = _cmpyr1(e3, ebm);
    }

    sumRe0 =  sumRe0 + sumRe1;
    sumIm0 =  sumIm0 + sumIm1;

    *output = _itoll(_loll(sumIm0), _loll(sumRe0));

}


