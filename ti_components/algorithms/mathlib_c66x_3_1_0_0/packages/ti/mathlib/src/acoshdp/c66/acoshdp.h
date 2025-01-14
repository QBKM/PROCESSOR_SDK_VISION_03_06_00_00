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
/* acoshdp.h - Double precision inverse hyperbolic cosine                  */
/* ======================================================================= */

#ifndef ACOSHDP_H_
#define ACOSHDP_H_ 1

/** @defgroup acoshdp */
/** @ingroup  acoshdp */
/* @{ */

/**
 * @par Description:
 *    The acoshdp function returns the inverse hyperbolic cosine function
 *    of a real floating-point argument a.
 *
 * @par 
 *    @param[in] a = Input double 
 * @par 
 *    @return Resultant double 
 * 
 *
 * @par Special Cases:
 *  - If a is greater than 1.7976931348623157e+308, the return
 *    value is 710.475860073944.
 *  - If a is smaller than 1.0, the return value is 0, the real
 *    part of the answer.
 *  - If a is NaN (Not a Number), the return value is NaN.
 *
 *
 * @sa 
 *  - acoshdp_i
 *  - acoshdp_v
 *
 *
 * @par Implementation Notes:
 *  - The code supports both big and little endian modes. 
 *  
 */

double acoshdp_c (double a);
double acoshdp (double a);

/** @} */

#endif /* ACOSHDP_H_ */

/* ======================================================================= */
/*  End of file: acoshdp.h                                                 */
/* ======================================================================= */
