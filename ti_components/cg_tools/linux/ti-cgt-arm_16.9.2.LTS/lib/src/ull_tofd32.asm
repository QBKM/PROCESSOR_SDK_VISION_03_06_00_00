;******************************************************************************
;* ULL_TOFD32.ASM  - 32 BIT STATE -  v16.9.2                                  *
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
;* ULL_TOFD - CONVERT AN UNSIGNED 64 BIT INTEGER INTO AN IEEE 754 FORMAT
;*            DOUBLE PRECISION FLOATING POINT                 
;****************************************************************************
;*
;*   o INPUT OP IS IN r0:r1 (r1:r0 IF LITTLE ENDIAN)
;*   o RESULT IS RETURNED IN r0:r1
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

	.arm

        .if __TI_EABI_ASSEMBLER           ; ASSIGN EXTERNAL NAMES BASED ON
        .asg __aeabi_ul2d, __TI_ULL_TOFD  ; RTS BEING BUILT
        .else
	.clink
        .asg ULL_TOFD, __TI_ULL_TOFD 
        .endif

	.if __TI_ARM9ABI_ASSEMBLER  | __TI_EABI_ASSEMBLER
	.armfunc __TI_ULL_TOFD
	.endif

	.if .TMS470_BIG_DOUBLE
rp1_hi	.set	r0	; High word of regpair 1
rp1_lo	.set	r1	; Low word of regpair 1
	.else
rp1_hi	.set	r1	; High word of regpair 1
rp1_lo	.set	r0	; Low word of regpair 1
	.endif

	.if .TMS470_LITTLE
i_hi	.set	r1	; High word of input
i_lo	.set	r0	; Low word of input
	.else
i_hi	.set	r0	; High word of input
i_lo	.set	r1	; Low word of input
	.endif

	.global __TI_ULL_TOFD
__TI_ULL_TOFD: .asmfunc stack_usage(4)
        CMP	r0, #0				; IF ZERO, RETURN ZERO
        CMPEQ   r1, #0                  

	BXEQ	lr			

        STMFD   sp!, {lr}               

	; IF THE ENDIANNESS OF THE DOUBLE IS DIFFERENT FROM THE TARGET
	; ENDIAN (MIXED ENDIAN) SWAP THE INPUT VALUE BEFORE OPERATING ON. 
	.if .TMS470_LITTLE != .TMS470_LITTLE_DOUBLE
	MOV	lr, i_hi	
	MOV	i_hi, i_lo	
	MOV	i_lo, lr			
	.endif

	MOV	lr, #0x3F			; SETUP THE EXPONENT
	ADD	lr, lr, #0x00000400	

loop:	MOVS	rp1_hi, rp1_hi, LSL #1		; NORMALIZE THE MANTISSA
        ORR     rp1_hi, rp1_hi, rp1_lo, LSR #31     
        MOV     rp1_lo, rp1_lo, LSL #1          
	SUB	lr, lr, #0x1			; ADJUSTING THE EXPONENT, 
						; ACCORDINGLY
	BCC	loop			

        MOV     rp1_lo, rp1_lo, LSR #12 	; SETUP LOW HALF OF MANTISSA
        ORR     rp1_lo, rp1_lo, rp1_hi, LSL #20     
        MOV     rp1_hi, rp1_hi, LSR #12         ; SETUP HIGH HALF OF MANTISSA
        ORR     rp1_hi, rp1_hi, lr, LSL #20     ; SETUP THE EXPONENT AND SIGN 

	.if __TI_ARM7ABI_ASSEMBLER | __TI_ARM9ABI_ASSEMBLER | !__TI_TMS470_V4__
	LDMFD	sp!, {pc}
	.else
	LDMFD	sp!, {lr}
	BX	lr
	.endif

	.endasmfunc

	.end
