/*
 *  Copyright (c) Texas Instruments Incorporated 2013-2016
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * \file   hs_mmcsdlib.c
 *
 * \brief  MMCSD library API's.
 *
 */
#include <stdint.h>
#include <string.h>
#include <ti/csl/csl_mmcsd.h>
#include <ti/drv/stw_lld/fatlib/mmcsd_proto.h>
#include <ti/drv/stw_lld/fatlib/hs_mmcsdlib.h>
#include <ti/drv/stw_lld/fatlib/hsmmcsd_edma.h>

/**
 * \brief    Check if the card is inserted and detected
 *
 * \param    mmcsdCtrlInfo It holds the mmcsd control information.
 *
 * \return   0  if the card is not inserted and detected
 *           1  if the card is inserted and detected
 *
 * \note: that this functional may not be available for all instances of the
 * controler. This function, is only useful of the controller has a dedicated
 * card detect pin. If not, the card detection mechanism is application
 * implementation specific
 **/
uint32_t HSMMCSDCardPresent(mmcsdCtrlInfo *ctrl)
{
    return HSMMCSDIsCardInserted(ctrl->memBase);
}

/**
 * \brief   Enables the controller events to generate a h/w interrupt request
 *
 * \param    mmcsdCtrlInfo It holds the mmcsd control information.
 *
 * \return   none
 *
 **/
void HSMMCSDIntEnable(mmcsdCtrlInfo *ctrl)
{
    HSMMCSDIntrEnable(ctrl->memBase, ctrl->intrMask);
}

/**
 * \brief   This function intializes the mmcsdcontroller.
 *
 * \param    mmcsdCtrlInfo It holds the mmcsd control information.
 *
 * \returns  1 - Intialization is successfull.
 *           0 - Intialization is failed.
 **/
uint32_t HSMMCSDControllerInit(mmcsdCtrlInfo *ctrl)
{
    int status = 0;

    /*Refer to the MMC Host and Bus configuration steps in TRM */
    /* controller Reset */
    status = HSMMCSDSoftReset(ctrl->memBase);
    if (status != 0)
    {
        HSMMCSDUartPuts("HS MMC/SD Reset failed\n\r");
    }

    /* Lines Reset */
    HSMMCSDLinesReset(ctrl->memBase, HS_MMCSD_ALL_RESET);
    /* Set supported voltage list */
    HSMMCSDSupportedVoltSet(ctrl->memBase, HS_MMCSD_SUPPORT_VOLT_1P8 |
                            HS_MMCSD_SUPPORT_VOLT_3P0);
    HSMMCSDSystemConfig(ctrl->memBase, HS_MMCSD_AUTOIDLE_ENABLE);
    /* Set the bus width */
    HSMMCSDBusWidthSet(ctrl->memBase, HS_MMCSD_BUS_WIDTH_1BIT);

    /* Set the bus voltage */
#if defined (SOC_TDA3XX)
    HSMMCSDBusVoltSet(ctrl->memBase, HS_MMCSD_BUS_VOLT_1P8);
#else
    HSMMCSDBusVoltSet(ctrl->memBase, HS_MMCSD_BUS_VOLT_3P0);
#endif
    /* Bus power on */
    status = HSMMCSDBusPower(ctrl->memBase, HS_MMCSD_BUS_POWER_ON);
    if (status != 0)
    {
        HSMMCSDUartPuts("HS MMC/SD Power on failed\n\r");
    }

    /* Set the initialization frequency */
    status = HSMMCSDBusFreqSet(ctrl->memBase, ctrl->ipClk, ctrl->opClk, 0);
    if (status != 0)
    {
        HSMMCSDUartPuts("HS MMC/SD Bus Frequency set failed\n\r");
    }

    HSMMCSDInitStreamSend(ctrl->memBase);

    status = (status == 0) ? 1 : 0;

    return status;
}

/**
 * \brief   This function sends the command to MMCSD.
 *
 * \param    mmcsdCtrlInfo It holds the mmcsd control information.
 *
 * \param    mmcsdCmd It determines the mmcsd cmd
 *
 * \return   status of the command.
 *
 **/
uint32_t HSMMCSDCmdSend(mmcsdCtrlInfo *ctrl, mmcsdCmd *c)
{
    uint32_t cmdType = HS_MMCSD_CMD_TYPE_NORMAL;
    uint32_t dataPresent;
    uint32_t status = 0;
    uint32_t rspType;
    uint32_t cmdDir;
    uint32_t nblks;
    uint32_t cmd;

    if (c->flags & SD_CMDRSP_STOP)
    {
        cmdType = HS_MMCSD_CMD_TYPE_SUSPEND;
    }
    else if (c->flags & SD_CMDRSP_FS)
    {
        cmdType = HS_MMCSD_CMD_TYPE_FUNCSEL;
    }
    else if (c->flags & SD_CMDRSP_ABORT)
    {
        cmdType = HS_MMCSD_CMD_TYPE_ABORT;
    }
    else
    {
        /* MISRA C compliant */
    }

    cmdDir = (c->flags & SD_CMDRSP_READ) ? \
             HS_MMCSD_CMD_DIR_READ : HS_MMCSD_CMD_DIR_WRITE;

    dataPresent = (c->flags & SD_CMDRSP_DATA) ? 1 : 0;
    nblks       = (dataPresent == 1) ? c->nblks : 0;

    if (c->flags & SD_CMDRSP_NONE)
    {
        rspType = HS_MMCSD_NO_RESPONSE;
    }
    else if (c->flags & SD_CMDRSP_136BITS)
    {
        rspType = HS_MMCSD_136BITS_RESPONSE;
    }
    else if (c->flags & SD_CMDRSP_BUSY)
    {
        rspType = HS_MMCSD_48BITS_BUSY_RESPONSE;
    }
    else
    {
        rspType = HS_MMCSD_48BITS_RESPONSE;
    }

    cmd = HS_MMCSD_CMD(c->idx, cmdType, rspType, cmdDir);

    if (dataPresent)
    {
        HSMMCSDIntrStatusClear(ctrl->memBase, HS_MMCSD_STAT_TRNFCOMP);

        HSMMCSDDataTimeoutSet(ctrl->memBase, HS_MMCSD_DATA_TIMEOUT(27));
    }

    HSMMCSDCommandSend(ctrl->memBase, cmd, c->arg, (void *) dataPresent,
                       nblks, ctrl->dmaEnable);

    if (ctrl->cmdStatusGet)
    {
        status = ctrl->cmdStatusGet(ctrl);
    }

    if (status == 1)
    {
        HSMMCSDResponseGet(ctrl->memBase, (uint32_t *) c->rsp);
    }

    return status;
}

/**
 * \brief   Configure the MMC/SD bus width
 *
 * \param    mmcsdCtrlInfo It holds the mmcsd control information.
 *
 * \param   buswidth   SD/MMC bus width.\n
 *
 *  buswidth can take the values.\n
 *     HS_MMCSD_BUS_WIDTH_4BIT.\n
 *     HS_MMCSD_BUS_WIDTH_1BIT.\n
 *
 * \return  None.
 *
 **/
void HSMMCSDBusWidthConfig(mmcsdCtrlInfo *ctrl, uint32_t busWidth)
{
    if (busWidth == SD_BUS_WIDTH_1BIT)
    {
        HSMMCSDBusWidthSet(ctrl->memBase, HS_MMCSD_BUS_WIDTH_1BIT);
    }
    else
    {
        HSMMCSDBusWidthSet(ctrl->memBase, HS_MMCSD_BUS_WIDTH_4BIT);
    }
}

/**
 * \brief   Set output bus frequency
 *
 * \param   mmcsdCtrlInfo It holds the mmcsd control information.
 * \param   busFreq       The required output frequency on the bus
 *
 * \return   0  on clock enable success
 *          -1  on clock enable fail
 **/
int HSMMCSDBusFreqConfig(mmcsdCtrlInfo *ctrl, uint32_t busFreq)
{
    return HSMMCSDBusFreqSet(ctrl->memBase, ctrl->ipClk, busFreq, 0);
}

