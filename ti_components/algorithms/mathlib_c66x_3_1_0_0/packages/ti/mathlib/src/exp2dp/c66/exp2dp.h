/* ======================================================================== *
 * MATHLIB -- TI Floating-Point Math Function Library                       *
 *                                                                          *
 *                                                                          *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/   *
 *                                                                          *
 *                                                                          *
 *  Redistribution and use in source and binary forms, with or without      *
 *  modification, are permitted provided that the following conditions      *
 *  are met:                                                                *
 *                                                                          *
 *    Redistributions of source code must retain the above copyright        *
 *    notice, this list of conditions and the following disclaimer.         *
 *                                                                          *
 *    Redistributions in binary form must reproduce the above copyright     *
 *    notice, this list of conditions and the following disclaimer in the   *
 *    documentation and/or other materials provided with the                *
 *    distribution.                                                         *
 *                                                                          *
 *    Neither the name of Texas Instruments Incorporated nor the names of   *
 *    its contributors may be used to endorse or promote products derived   *
 *    from this software without specific prior written permission.         *
 *                                                                          *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS     *
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT       *
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR   *
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT    *
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,   *
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT        *
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,   *
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY   *
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT     *
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE   *
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.    *
 * ======================================================================== */

/* ======================================================================= */
/* exp2dp.h - double Precision Exponential Base 2                          */
/* ======================================================================= */

#ifndef EXP2DP_H_
#define EXP2DP_H_ 1

/** @defgroup exp2dp */
/** @ingroup  exp2dp */
/* @{ */

/**
 * @par Description:
 *    The exp2dp function returns the exponential function of a real 
 *    floating-point argument a. The return value is the number 2 raised to 
 *    the power a. If the magnitude of a is too large, the maximum double-precision 
 *    floating-point number (1.797693e+308 = 2^1024) is returned.
 * @par 
 * 	  @param[in] a = Input double 
 * @par 
 * 	  @return Resultant double 
 * 
 *
 * @par Special Cases:
 *  - If | a | < 1.11e-16, then the return value is 1.0 for small arguments.                                         
 *  - If a < -1022, then the return value is 0.0.                                                                    
 *  - If a > +1024, then the return value is 1.797693e+308 = 2^1024 (maximum double-precision 
 *    floating-point number).
 *
 *
 * @sa 
 *  - exp2dp_i
 *  - exp2dp_v
 *
 *
 * @par Implementation Notes:
 *  - The code supports both big and little endian modes. 
 *  
 */

double exp2dp   (double a);
double exp2dp_c (double a);

/** @} */

#endif /* EXP2DP_H_ */

/* ======================================================================== */
/*  End of file: exp2dp.h                                                   */
/* ======================================================================== */
