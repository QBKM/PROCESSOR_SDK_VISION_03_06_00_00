/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 *  ======== semaphore.h ========
 */

#ifndef ti_sysbios_posix_semaphore_include
#define ti_sysbios_posix_semaphore_include

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*
 *  Include definitions of timespec and clockid_t that would
 *  be in sys/types.h.  TI and IAR tool chains do not have a
 *  sys/types.h header file, while GNU toolchain does.  For
 *  GNU, sys/types.h is included in time.h.
 */
#include <ti/sysbios/posix/_time.h>

#include <ti/sysbios/knl/Semaphore.h>

typedef struct sem_t {
    ti_sysbios_knl_Semaphore_Struct  sem;
} sem_t;


int    sem_destroy(sem_t *sem);
int    sem_getvalue(sem_t *sem, int *value);
int    sem_init(sem_t *sem, int pshared, unsigned value);
int    sem_post(sem_t *sem);
int    sem_timedwait(sem_t *sem, const struct timespec *abstime);
int    sem_trywait(sem_t *sem);
int    sem_wait(sem_t *sem);

#ifdef __cplusplus
}
#endif

#endif
