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
 *  ======== types.h ========
 */

#ifndef ti_sysbios_posix_types__include
#define ti_sysbios_posix_types__include

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include <time.h>

#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>

/*
 *  Signal defines (would be in sys/signal.h).
 */
#ifndef SIGEV_SIGNAL
#define SIGEV_SIGNAL 2
#endif

#ifndef SIGEV_THREAD
#define SIGEV_THREAD 3
#endif

#if defined(__GNUC__) && !defined(__ti__)
#else
/*
 *  TI and IAR tools do not have sys/types.h where timespec and itimerspec
 *  would be defined.
 */
struct timespec {
    time_t  tv_sec;   /* Seconds */
    long    tv_nsec;  /* Nanoseconds */
};

struct itimerspec {
    struct timespec it_interval;  /* Timer interval */
    struct timespec it_value;     /* Timer expiration */
};

#ifndef __timer_t_defined
/* IAR does not have timer_t */
typedef unsigned long timer_t;
#endif

typedef uint32_t clockid_t;

#endif    /* #if defined(__GNUC__) && !defined(__ti__) */

typedef unsigned long useconds_t;

/*
 *************************************************************************
 *                      pthread_ types
 *************************************************************************
 */
/*
 *  ======== pthread_attr_t ========
 */
typedef struct pthread_attr_t {
    int priority;
    void *stack;
    size_t stacksize;
    size_t guardsize;
    int  detachstate;
} pthread_attr_t;

typedef uint32_t pthread_barrierattr_t;
typedef uint32_t pthread_condattr_t;

typedef void *pthread_key_t;

typedef struct pthread_mutexattr_t {
    int type;
    int protocol;
    int prioceiling;
} pthread_mutexattr_t;

typedef uint32_t pthread_rwlockattr_t;

typedef void *pthread_t;
/*
 *  ======== pthread_barrier_t ========
 */
typedef struct pthread_barrier_t {
    ti_sysbios_knl_Semaphore_Struct  sem;
    int               count;
    int               pendCount;
} pthread_barrier_t;

/*
 *  ======== pthread_cond_t ========
 */
typedef struct pthread_cond_t {
    ti_sysbios_knl_Queue_Struct     waitList;
} pthread_cond_t;

typedef void *pthread_mutex_t;
typedef uint32_t pthread_once_t;

/*
 *  ======== pthread_rwlock_t ========
 */
typedef struct pthread_rwlock_t {
    /*
     *  This semaphore must be acquired to obtain a write lock.
     *  A readlock can be obtained if there is already a read lock
     *  acquired, or by acquiring this semaphore.
     */
    ti_sysbios_knl_Semaphore_Struct  sem;

    /*
     *  This semaphore is used to block readers when sem is in use
     *  by a write lock.
     */
    ti_sysbios_knl_Semaphore_Struct  readSem;

    int       activeReaderCnt;   /* Number of read locks acquired */
    int       blockedReaderCnt;  /* Number of readers blocked on readSem */

    /*
     *  The 'owner' is the writer holding the lock, or the first reader
     *  that acquired the lock.
     */
    pthread_t owner;
} pthread_rwlock_t;

struct _pthread_cleanup_context {
    void    (*fxn)(void *);
    void    *arg;
    int     cancelType;
    struct _pthread_cleanup_context *next;
};

/*
 *************************************************************************
 *                      signal types
 *************************************************************************
 */
/*
 *  ======== sigval ========
 */
typedef union sigval {
    int sival_int;
    void *sival_ptr;
} sigval;

/*
 *  ======== sigevent ========
 */
typedef struct sigevent {
    int sigev_notify;     /* e.g., SIGEV_SIGNAL, SIGEV_THREAD */
    int sigev_signo;
    sigval sigev_value;

    void (*sigev_notify_function)(sigval val);
    pthread_attr_t *sigev_notify_attributes;
} sigevent;


#ifdef __cplusplus
}
#endif

#endif
