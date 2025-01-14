;******************************************************************************
;* FD_TOULL_T2.ASM  - THUMB-2 STATE -  v16.9.2                                *
;*                                                                            *
;* Copyright (c) 1996-2017 Texas Instruments Incorporated                     *
;* http://www.ti.com/                                                         *
;*                                                                            *
;*  Redistribution and  use in source  and binary forms, with  or without     *
;*  modification,  are permitted provided  that the  following conditions     *
;*  are met:                                                                  *
;*                                                                            *
;*     Redistributions  of source  code must  retain the  above copyright     *
;*     notice, this list of conditions and the following disclaimer.          *
;*                                                                            *
;*     Redistributions in binary form  must reproduce the above copyright     *
;*     notice, this  list of conditions  and the following  disclaimer in     *
;*     the  documentation  and/or   other  materials  provided  with  the     *
;*     distribution.                                                          *
;*                                                                            *
;*     Neither the  name of Texas Instruments Incorporated  nor the names     *
;*     of its  contributors may  be used to  endorse or  promote products     *
;*     derived  from   this  software  without   specific  prior  written     *
;*     permission.                                                            *
;*                                                                            *
;*  THIS SOFTWARE  IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS     *
;*  "AS IS"  AND ANY  EXPRESS OR IMPLIED  WARRANTIES, INCLUDING,  BUT NOT     *
;*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR     *
;*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT     *
;*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     *
;*  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES  (INCLUDING, BUT  NOT     *
;*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     *
;*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY     *
;*  THEORY OF  LIABILITY, WHETHER IN CONTRACT, STRICT  LIABILITY, OR TORT     *
;*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE     *
;*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.      *
;*                                                                            *
;******************************************************************************

;****************************************************************************
;* FD$TOULL - CONVERT AN IEEE 754 FORMAT DOUBLE PRECISION FLOATING 
;*   	      POINT NUMBER TO A 64 BIT UNSIGNED INTEGER
;****************************************************************************
;*
;*   o INPUT OP IS IN r0:r1
;*   o RESULT IS RETURNED IN r0:r1 (r1:r0 IF LITTLE ENDIAN)
;*
;*   o SIGNALLING NOT-A-NUMBER (SNaN) AND QUIET NOT-A-NUMBER (QNaN)
;*     ARE TREATED AS INFINITY
;*   o OVERFLOW RETURNS 0xFFFFFFFF:FFFFFFFF
;*   o UNDERFLOW RETURNS ZERO (0x00000000:00000000)
;*   o NEGATIVE VALUE RETURNS ZERO
;*   o ROUNDING MODE:  ROUND TO ZERO
;*
;****************************************************************************
;*
;* +------------------------------------------------------------------+
;* | DOUBLE PRECISION FLOATING POINT FORMAT                           |
;* |   64-bit representation                                          |
;* |   31 30      20 19                  0                            |
;* |   +-+----------+---------------------+                           |
;* |   |S|     E    |        M1           |                           |
;* |   +-+----------+---------------------+                           |
;* |                                                                  |
;* |   31                                0                            |
;* |   +----------------------------------+                           |
;* |   |             M2                   |                           |
;* |   +----------------------------------+                           |
;* |                                                                  |
;* |   <S>  SIGN FIELD    :          0 - POSITIVE VALUE               |
;* |                                 1 - NEGATIVE VALUE               |
;* |                                                                  |
;* |   <E>  EXPONENT FIELD: 0000000000 - ZERO IFF M == 0              |
;* |            0000000001..1111111110 - EXPONENT VALUE(1023 BIAS)    |
;* |                        1111111111 - INFINITY                     |
;* |                                                                  |
;* |   <M1:M2>  MANTISSA FIELDS:  FRACTIONAL MAGNITUDE WITH IMPLIED 1 |
;* +------------------------------------------------------------------+
;*
;****************************************************************************

	.thumb

        .if __TI_EABI_ASSEMBLER         ; ASSIGN EXTERNAL NAMES BASED ON
        .asg __aeabi_d2ulz, __TI_FD$TOULL  ; RTS BEING BUILT
        .else
	.clink
        .asg FD$TOULL, __TI_FD$TOULL
        .endif

	.if .TMS470_BIG_DOUBLE
rp1_hi	.set	r0	; High word of regpair 1
rp1_lo	.set	r1	; Low word of regpair 1
	.else
rp1_hi	.set	r1	; High word of regpair 1
rp1_lo	.set	r0	; Low word of regpair 1
	.endif

	.if .TMS470_LITTLE
res_hi	.set	r1	; High word of result   
res_lo	.set	r0	; Low word of result   
	.else
res_hi	.set	r0	; High word of result   
res_lo	.set	r1	; Low word of result   
	.endif

ope	.set	r3
tmp     .set    r2

	.thumbfunc __TI_FD$TOULL
	.global	__TI_FD$TOULL
__TI_FD$TOULL: .asmfunc stack_usage(12)
        
        CMP	rp1_hi, #0			; CHECK FOR A NEGATIVE VALUE
	ITTT	MI
	MOVMI	rp1_hi, #0			; RETURN ZERO IF IT IS NEGATIVE
	MOVMI	rp1_lo, #0			; 
	BXMI	lr

	PUSH	{r2, r3, lr}			; SAVE CONTEXT

	LSL	ope, rp1_hi, #1			; PUT EXPONENT IN ope
	LSRS	ope, ope, #21	

	SUB	ope, ope, #0x300		; ADJUST FOR EXPONENT BIAS AND
	SUBS	ope, ope, #0xFF			; CHECK FOR UNDERFLOW
	ITTT	MI
	MOVMI	rp1_hi, #0			; IF UNDERFLOW, RETURN ZERO
	MOVMI	rp1_lo, #0			; 
	POPMI	{r2, r3, pc}		

	RSBS	ope, ope, #0x3F			; CHECK FOR OVERFLOW. IF OVRFLW,
	BCC	ovfl				; RETURN 0xFFFFFFFF:FFFFFFFF

	LSL	rp1_hi, rp1_hi, #11		; SHIFT THE EXPONENT (11 BITS) 
        ORR	rp1_hi, rp1_hi, rp1_lo, LSR #21 ; OUT OF THE MANTISSA R0:R1 
        LSL	rp1_lo, rp1_lo, #11		; 
	ORRS	rp1_hi, rp1_hi, #0x80000000	; SET IMPLIED ONE IN HI MANTISSA 

        ; ADJUST THE VALUE IN R0:R1 FOR THE EXPONENT BY RIGHT SHIFTING 
        ; EXPONENT NUMBER OF BITS OUT OF R0:R1.
        SUBS    tmp, ope, #0x20         	; IF (EXP >= 32)
	ITTEE	CS
        LSRCS   rp1_lo, rp1_hi, tmp         ;    R1 = MNT.HI >> EXP - 32
        MOVCS	rp1_hi, #0                  	;    R0 = 0 

        RSBCC   tmp, ope, #0x20         	; IF (EXP < 32)
        LSRCC   rp1_lo, rp1_lo, ope         ; R0:R1 = R0:R1 >> EXP
	
	ITTT	CC
        LSLCC   tmp, rp1_hi,  tmp        	;
        ORRCC   rp1_lo, rp1_lo, tmp             ;
        LSRCC   rp1_hi, rp1_hi, ope         ;

	; IF THE ENDIANNESS OF THE DOUBLE IS DIFFERENT FROM THE TARGET
	; ENDIAN (MIXED ENDIAN) SWAP THE REGISTER VALUES BEFORE RETURNING.

	.if .TMS470_LITTLE != .TMS470_LITTLE_DOUBLE
	CPY	lr, res_hi			
	CPY	res_hi, res_lo			
	CPY	res_lo, lr		
	.endif

	POP 	{r2, r3, pc}	

ovfl:	MOVS	r0, #0x0			; IF OVERFLOW, RETURN 0XFFFFFFFF
	SUBS	r0, r0, #0x1
        CPY     r1, r0     
	POP	{r2, r3, pc}

	.endasmfunc

	.end
