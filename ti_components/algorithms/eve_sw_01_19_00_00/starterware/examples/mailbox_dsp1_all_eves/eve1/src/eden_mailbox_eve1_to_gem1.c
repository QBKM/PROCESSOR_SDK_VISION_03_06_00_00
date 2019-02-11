/*
*
* Copyright (c) 2007-2017 Texas Instruments Incorporated
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
 *  Filename       eve1/ref_tc_eve1.c
 *
 *  Description    Default code for testcase
 *                 Just returns RET_OK
 *
 * ========================================================================== */
#include "GlobalTypes.h"
#include "baseaddress.h"
#include "mbox.h"
#include "eden_mbids.h"
#include "INTH.h"

#include  <stdio.h>
#include  <stdlib.h>
#include  <arp32.h>

#define MAILBOX    (MLB0)
#define MBOX_INT0  (MLB0_INT)

void Mailbox_Intr_Handler();

volatile unsigned int mailbox_intr_occurred = 0;

ReturnCode_t checkReturn = RET_OK;

void Check_status (int return_value)
{
    if (return_value == RET_OK)
    {
        #ifdef PRINT_STATUS
        printf("PASS \n");
        #endif
    }
    else
    {
        #ifdef PRINT_STATUS
        printf("Fail \n");
        #endif
    }
}


UWORD32 send_msg;
UWORD32 rcv_msg;

ReturnCode_t test_main( void )
{
  UWORD32 ix;
  UWORD32 cpu_num;

  cpu_num = _get_cpunum();

  #ifdef PRINT_STATUS
  printf ("I am EVE core:%d \n", cpu_num);
  #endif

  switch (cpu_num)
  {
	  case 0:
		  send_msg  = 0xbadebabe;
		  rcv_msg   = 0x12345678;
		  break;

	  case 1:
		  send_msg  = 0xbadebabf;
		  rcv_msg   = 0x12345679;
		  break;

	  case 2:
		  send_msg  = 0xbadebac0;
		  rcv_msg   = 0x1234567A;
		  break;

	  case 3:
		  send_msg  = 0xbadebac1;
		  rcv_msg   = 0x1234567B;
		  break;
  }


  /* Enable interrupt in EVE interrupt controller */
  EVE_INTH_InterruptSetup(MBOX_INT0,
                      (UWORD32)Mailbox_Intr_Handler,
                      INTH_DEFAULT_INTERRUPT_KIND,
                      INTH_INT4);

  /* Actually set Enable bit in the interrupt controller */
  EVE_INTH_InterruptEnable(MBOX_INT0);

  /* Enable interrupt in the mailbox */
  EVE_MBOX_IrqEnable( MAILBOX,
		  EVE_MBID, /* mailBoxId */
              MBOX_USER_0 , /* userId */
                  MBOX_INT_NEW_MSG_ONLY ); /* enableIrq */

  /* Send message to gem1 */
  EVE_MBOX_Write( MAILBOX,
              GEM1_MBID, /* mailBoxId */
              send_msg); /* writeValue */

  /* Wait for message from gem1 */
  while (mailbox_intr_occurred != 1);

  if (mailbox_intr_occurred == 0) checkReturn = RET_FAIL;

  Check_status (checkReturn);

  return checkReturn;
}

void Mailbox_Intr_Handler( void )
{
  UWORD32 irqStatusReg = 0;
  MBOX_UserId_t userId = MBOX_USER_0;

  mailbox_intr_occurred++;

   if ( EVE_MBOX_GetNumMsg( MAILBOX, /* component */
    	               EVE_MBID /* mailBoxId */
		       ) != 0 )
    {
          if ( EVE_MBOX_Read( MAILBOX, /* component */
                  EVE_MBID /* mailBoxId */
                  ) != rcv_msg )
          {
            checkReturn = RET_FAIL;
          }

          irqStatusReg = EVE_MBOX_IrqGetStatus( MAILBOX, /* component */
                        EVE_MBID, /* mailBoxId */
                        userId ) ;

          EVE_MBOX_IrqClearStatus( MAILBOX, userId, irqStatusReg);

          #ifdef PRINT_STATUS
          printf ("Saw message from DSP \n");
          #endif
    }
    else
    {
      checkReturn = RET_FAIL;
    }
}