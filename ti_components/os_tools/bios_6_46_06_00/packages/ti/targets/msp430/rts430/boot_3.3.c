/*
 *  Copyright 2016 by Texas Instruments Incorporated.
 *
 */

/*****************************************************************************/
/* BOOT.C   v3.3.0B1 - Initialize the MSP430 C runtime environment             */
/* Copyright (c) 2003-2010  Texas Instruments Incorporated                   */
/*****************************************************************************/
#include <stdlib.h>
#include <_lock.h>

#include <xdc/runtime/Startup.h>
extern int xdc_runtime_Startup__RESETFXN__C;

extern int _args_main();
extern int main(int argc);
extern void xdc_runtime_System_exit__E(int status);
extern void _auto_init();
extern void __interrupt _c_int00();
extern void __interrupt _c_int00_noargs();
extern void __interrupt _c_int00_noinit();
extern void __interrupt _c_int00_noexit();
extern void __interrupt _c_int00_noinit_noexit();
extern void __interrupt _c_int00_mpu_init();
extern void __interrupt _c_int00_noargs_mpu_init();
extern void __interrupt _c_int00_noinit_mpu_init();
extern void __interrupt _c_int00_noexit_mpu_init();
extern void __interrupt _c_int00_noinit_noexit_mpu_init();
extern int  _system_pre_init(void);

void              (*_cleanup_ptr)(void);
void _DATA_ACCESS (*_dtors_ptr)(int);

/*---------------------------------------------------------------------------*/
/* Allocate the memory for the system stack.  This section will be sized     */
/* by the linker.                                                            */
/*---------------------------------------------------------------------------*/
__asm("\t.global __STACK_END");
#pragma DATA_SECTION (_stack, ".stack");
#if defined(__LARGE_DATA_MODEL__)
long _stack;
#else
int _stack;
#endif

/*---------------------------------------------------------------------------*/
/*  Initialize reset vector to point at _c_int00                             */
/*  _c_int00 must always be located in low-memory on MSP430X devices.        */
/*---------------------------------------------------------------------------*/
#if defined(__LARGE_CODE_MODEL__)
_Pragma("CODE_SECTION(_c_int00, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noargs, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noinit, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noexit, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noinit_noexit, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_mpu_init, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noargs_mpu_init, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noinit_mpu_init, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noexit_mpu_init, \".text:_isr\")")
_Pragma("CODE_SECTION(_c_int00_noinit_noexit_mpu_init, \".text:_isr\")")
#endif

__asm("\t.global _reset_vector");
__asm("\t.sect   \".reset\"");
__asm("\t.align  2");
__asm("_reset_vector:\n\t.field _c_int00, 16");

#define CLINK_DIRECTIVE() \
_Pragma("diag_suppress 1119")\
__asm("\t.clink");;       \
_Pragma("diag_default 1119")

/*---------------------------------------------------------------------------*/
/* Macro to initialize stack pointer.  Stack grows towards lower memory.     */
/*---------------------------------------------------------------------------*/
#if defined(__LARGE_DATA_MODEL__)
#define STACK_INIT() __asm("\t   MOVX.A\t   #__STACK_END,SP")
#else
#define STACK_INIT() __asm("\t   MOV.W\t    #__STACK_END,SP")
#endif

/*---------------------------------------------------------------------------*/
/* Macros to initialize required global variables.                           */
/*---------------------------------------------------------------------------*/
#define INIT_EXIT_PTRS() _cleanup_ptr = NULL; _dtors_ptr = NULL
#define INIT_LOCKS()     _lock = _nop; _unlock = _nop

/*****************************************************************************/
/* C_INT00() - C ENVIRONMENT ENTRY POINT                                     */
/*****************************************************************************/
extern void __interrupt _c_int00()
{
   int preInitStatus;

   CLINK_DIRECTIVE();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   /*------------------------------------------------------------------------*/
   /* Allow for any application-specific low level initialization prior to   */
   /* initializing the C/C++ environment (global variable initialization,    */
   /* constructers).  If _system_pre_init() returns 0, then bypass C/C++     */
   /* initialization.  NOTE: BYPASSING THE CALL TO THE C/C++ INITIALIZATION  */
   /* ROUTINE MAY RESULT IN PROGRAM FAILURE.                                 */
   /*------------------------------------------------------------------------*/
   preInitStatus = _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_EXIT_PTRS();
   INIT_LOCKS();

   if (preInitStatus != 0) _auto_init();

   /*------------------------------------------------------------------------*/
   /* Handle any argc/argv arguments if supported by an MSP430 loader.       */
   /*------------------------------------------------------------------------*/
   xdc_runtime_System_exit__E(_args_main());
}


/*****************************************************************************/
/* C_INT00_NOARGS() - Specialized version of _c_int00 that does not handle   */
/*                    arguments passed to main.                              */
/*****************************************************************************/
extern void __interrupt _c_int00_noargs()
{
   int preInitStatus;

   CLINK_DIRECTIVE();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   preInitStatus = _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_EXIT_PTRS();
   INIT_LOCKS();

   if(preInitStatus != 0) _auto_init();

   xdc_runtime_System_exit__E(main(0));
}

/*****************************************************************************/
/* C_INT00_NOINIT() - Specialized version of _c_int00 that does not perform  */
/*                    auto initialization.                                   */
/*****************************************************************************/
extern void __interrupt _c_int00_noinit()
{
   CLINK_DIRECTIVE();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_EXIT_PTRS();
   INIT_LOCKS();

   xdc_runtime_System_exit__E(_args_main());
}

/*****************************************************************************/
/* C_INT00_NOEXIT() - Specialized version of _c_int00 that directly calls    */
/*                    abort and skips cleanup in exit.                       */
/*****************************************************************************/
extern void __interrupt _c_int00_noexit()
{
   int preInitStatus;

   CLINK_DIRECTIVE();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   preInitStatus = _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_LOCKS();
   if (preInitStatus != 0) _auto_init();
   main(0);
   abort();
}

/*****************************************************************************/
/* C_INT00_NOINIT_NOEXIT() - Specialized version of _c_int00 that does not   */
/*                           perform auto initialization and calls abort     */
/*                           directly.                                       */
/*****************************************************************************/
extern void __interrupt _c_int00_noinit_noexit()
{
   CLINK_DIRECTIVE();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_LOCKS();
   main(0);
   abort();
}

extern volatile unsigned int MPUCTL0;
extern volatile unsigned int MPUSEG;
extern volatile unsigned int MPUSAM;

extern unsigned int __mpuseg;
extern unsigned int __mpusam;

/*---------------------------------------------------------------------------*/
/* Macro to initialize the FRAM MPU.                                         */
/*---------------------------------------------------------------------------*/
#define MPU_INIT()                                                \
MPUCTL0   = 0xA500;                  /* Unlock MPU             */ \
_Pragma("diag_suppress 770")                                      \
_Pragma("diag_suppress  70")                                      \
MPUSEG    = (unsigned int)&__mpuseg; /* Set segment boundaries */ \
MPUSAM    = (unsigned int)&__mpusam; /* Set RWX permissions    */ \
_Pragma("diag_default  70")                                       \
_Pragma("diag_default 770")                                       \
MPUCTL0   = 0xA501;                  /* Enable MPU             */ \


/*****************************************************************************/
/* C_INT00_MPU_INIT() - Specialized version of _c_int00 that initializes the */
/*                      FRAM memory protection unit.                         */
/*****************************************************************************/
extern void __interrupt _c_int00_mpu_init()
{
   int preInitStatus;

   CLINK_DIRECTIVE();
   MPU_INIT();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   preInitStatus = _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_EXIT_PTRS();
   INIT_LOCKS();

   if (preInitStatus != 0)  _auto_init();

   xdc_runtime_System_exit__E(_args_main());
}

/*****************************************************************************/
/* C_INT00_NOARGS_MPU_INIT() - Specialized version of _c_int00 that          */
/*                             initializes the FRAM memory protection unit   */
/*                             and does not handle arguments passed to main. */
/*****************************************************************************/
extern void __interrupt _c_int00_noargs_mpu_init()
{
   int preInitStatus;

   CLINK_DIRECTIVE();
   MPU_INIT();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   preInitStatus = _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_EXIT_PTRS();
   INIT_LOCKS();

   if (preInitStatus != 0)  _auto_init();

   xdc_runtime_System_exit__E(main(0));
}

/*****************************************************************************/
/* C_INT00_NOINIT_MPU_INIT() - Specialized version of _c_int00 that          */
/*                             initializes the FRAM memory protection unit   */
/*                             and does not perform auto initialization.     */
/*****************************************************************************/
extern void __interrupt _c_int00_noinit_mpu_init()
{
   CLINK_DIRECTIVE();
   MPU_INIT();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_EXIT_PTRS();
   INIT_LOCKS();

   xdc_runtime_System_exit__E(_args_main());
}

/*****************************************************************************/
/* C_INT00_NOEXIT_MPU_INIT() - Specialized version of _c_int00 that          */
/*                             initializes the FRAM memory protection unit   */
/*                             and directly calls abort and skips cleanup in */
/*                             exit.                                         */
/*****************************************************************************/
extern void __interrupt _c_int00_noexit_mpu_init()
{
   int preInitStatus;

   CLINK_DIRECTIVE();
   MPU_INIT();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   preInitStatus = _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_LOCKS();
   if (preInitStatus != 0)  _auto_init();
   main(0);
   abort();
}

/*****************************************************************************/
/* C_INT00_NOINIT_NOEXIT_MPU_INIT() - Specialized version of _c_int00 that   */
/*                                    initializes the FRAM memory protection */
/*                                    unit and does not perform auto         */
/*                                    initialization and calls abort         */
/*                                    directly.                              */
/*****************************************************************************/
extern void __interrupt _c_int00_noinit_noexit_mpu_init()
{
   CLINK_DIRECTIVE();
   MPU_INIT();
   STACK_INIT();

   /*------------------------------------------------------------------------*/
   /* Call hook configured into Startup_resetFxn                             */
   /*------------------------------------------------------------------------*/
   if (&xdc_runtime_Startup__RESETFXN__C == (int*)1) {
      xdc_runtime_Startup_reset__I();
   }

   _system_pre_init(); /* moved here to allow clear of .bss */

   INIT_LOCKS();

   main(0);
   abort();
}

/*
 *  @(#) ti.targets.msp430.rts430; 1, 0, 0,0; 10-21-2016 18:37:02; /db/ztree/library/trees/xdctargets/xdctargets-l07/src/ xlibrary

 */

