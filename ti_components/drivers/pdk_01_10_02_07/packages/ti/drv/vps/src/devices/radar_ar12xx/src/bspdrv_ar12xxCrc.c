/*
 *   Copyright (c) Texas Instruments Incorporated 2018
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
 *  \file bspdrv_ar12xxCrc.c
 *
 *  \brief This file defines the functions related to CRC16-CCITT algorithms.
 *
 */

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */
#include <stdlib.h>
#include <string.h>
#include <bspdrv_ar12xxPriv.h>

/* ========================================================================== */
/*                           Macros & Typedefs                                */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                         Structure Declarations                             */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */

/** \brief
 * The most common way to improve the efficiency of the CRC calculation is by
 * using the recompute LUT. For a given input remainder (data) and generator
 * polynomial (divisor), the output remainder will always be the same.
 * The recomputed output remainder for each of the possible byte-wide
 * input remainders is stored in a lookup table to speed up the CRC
 * calculations for a given message. The speed up is realized because the
 * message can now be processed byte by byte, rather than bit by bit.
 * The pseudo-code to recompute the output remainders for each possible
 * input  byte is as below
 *
 *** Compute the remainder of each possible dividend ****
 *   1. Loop dividend for 256 possible bytes.
 *** Start with the dividend followed by zeros ***
 *   2. remainder is update with dividend and right shifted by eight;
 *** Perform modulo-2 division, a bit at a time ***
 *   3. keep Loop bit eight to zero
 *** Try to divide the current data bit ***
 *   4. if top bit of remainder is set then
 *   5. XOR lower 15 bits of the remainder with polynomial
 *   6. else just take 15 bits of the remainder
 *** Store the result into the table ***
 *   7. update Crc 16 Table with remainder;
 */
const uint16_t  hCrc16Table[BSPDRV_AR12XX_CRC_M_CRC_TABLE_SIZE] = { \
    0x0000U,     \
    0x1021U,     \
    0x2042U,     \
    0x3063U,     \
    0x4084U,     \
    0x50A5U,     \
    0x60C6U,     \
    0x70E7U,     \
    0x8108U,     \
    0x9129U,     \
    0xA14AU,     \
    0xB16BU,     \
    0xC18CU,     \
    0xD1ADU,     \
    0xE1CEU,     \
    0xF1EFU,     \
    0x1231U,     \
    0x0210U,     \
    0x3273U,     \
    0x2252U,     \
    0x52B5U,     \
    0x4294U,     \
    0x72F7U,     \
    0x62D6U,     \
    0x9339U,     \
    0x8318U,     \
    0xB37BU,     \
    0xA35AU,     \
    0xD3BDU,     \
    0xC39CU,     \
    0xF3FFU,     \
    0xE3DEU,     \
    0x2462U,     \
    0x3443U,     \
    0x0420U,     \
    0x1401U,     \
    0x64E6U,     \
    0x74C7U,     \
    0x44A4U,     \
    0x5485U,     \
    0xA56AU,     \
    0xB54BU,     \
    0x8528U,     \
    0x9509U,     \
    0xE5EEU,     \
    0xF5CFU,     \
    0xC5ACU,     \
    0xD58DU,     \
    0x3653U,     \
    0x2672U,     \
    0x1611U,     \
    0x0630U,     \
    0x76D7U,     \
    0x66F6U,     \
    0x5695U,     \
    0x46B4U,     \
    0xB75BU,     \
    0xA77AU,     \
    0x9719U,     \
    0x8738U,     \
    0xF7DFU,     \
    0xE7FEU,     \
    0xD79DU,     \
    0xC7BCU,     \
    0x48C4U,     \
    0x58E5U,     \
    0x6886U,     \
    0x78A7U,     \
    0x0840U,     \
    0x1861U,     \
    0x2802U,     \
    0x3823U,     \
    0xC9CCU,     \
    0xD9EDU,     \
    0xE98EU,     \
    0xF9AFU,     \
    0x8948U,     \
    0x9969U,     \
    0xA90AU,     \
    0xB92BU,     \
    0x5AF5U,     \
    0x4AD4U,     \
    0x7AB7U,     \
    0x6A96U,     \
    0x1A71U,     \
    0x0A50U,     \
    0x3A33U,     \
    0x2A12U,     \
    0xDBFDU,     \
    0xCBDCU,     \
    0xFBBFU,     \
    0xEB9EU,     \
    0x9B79U,     \
    0x8B58U,     \
    0xBB3BU,     \
    0xAB1AU,     \
    0x6CA6U,     \
    0x7C87U,     \
    0x4CE4U,     \
    0x5CC5U,     \
    0x2C22U,     \
    0x3C03U,     \
    0x0C60U,     \
    0x1C41U,     \
    0xEDAEU,     \
    0xFD8FU,     \
    0xCDECU,     \
    0xDDCDU,     \
    0xAD2AU,     \
    0xBD0BU,     \
    0x8D68U,     \
    0x9D49U,     \
    0x7E97U,     \
    0x6EB6U,     \
    0x5ED5U,     \
    0x4EF4U,     \
    0x3E13U,     \
    0x2E32U,     \
    0x1E51U,     \
    0x0E70U,     \
    0xFF9FU,     \
    0xEFBEU,     \
    0xDFDDU,     \
    0xCFFCU,     \
    0xBF1BU,     \
    0xAF3AU,     \
    0x9F59U,     \
    0x8F78U,     \
    0x9188U,     \
    0x81A9U,     \
    0xB1CAU,     \
    0xA1EBU,     \
    0xD10CU,     \
    0xC12DU,     \
    0xF14EU,     \
    0xE16FU,     \
    0x1080U,     \
    0x00A1U,     \
    0x30C2U,     \
    0x20E3U,     \
    0x5004U,     \
    0x4025U,     \
    0x7046U,     \
    0x6067U,     \
    0x83B9U,     \
    0x9398U,     \
    0xA3FBU,     \
    0xB3DAU,     \
    0xC33DU,     \
    0xD31CU,     \
    0xE37FU,     \
    0xF35EU,     \
    0x02B1U,     \
    0x1290U,     \
    0x22F3U,     \
    0x32D2U,     \
    0x4235U,     \
    0x5214U,     \
    0x6277U,     \
    0x7256U,     \
    0xB5EAU,     \
    0xA5CBU,     \
    0x95A8U,     \
    0x8589U,     \
    0xF56EU,     \
    0xE54FU,     \
    0xD52CU,     \
    0xC50DU,     \
    0x34E2U,     \
    0x24C3U,     \
    0x14A0U,     \
    0x0481U,     \
    0x7466U,     \
    0x6447U,     \
    0x5424U,     \
    0x4405U,     \
    0xA7DBU,     \
    0xB7FAU,     \
    0x8799U,     \
    0x97B8U,     \
    0xE75FU,     \
    0xF77EU,     \
    0xC71DU,     \
    0xD73CU,     \
    0x26D3U,     \
    0x36F2U,     \
    0x0691U,     \
    0x16B0U,     \
    0x6657U,     \
    0x7676U,     \
    0x4615U,     \
    0x5634U,     \
    0xD94CU,     \
    0xC96DU,     \
    0xF90EU,     \
    0xE92FU,     \
    0x99C8U,     \
    0x89E9U,     \
    0xB98AU,     \
    0xA9ABU,     \
    0x5844U,     \
    0x4865U,     \
    0x7806U,     \
    0x6827U,     \
    0x18C0U,     \
    0x08E1U,     \
    0x3882U,     \
    0x28A3U,     \
    0xCB7DU,     \
    0xDB5CU,     \
    0xEB3FU,     \
    0xFB1EU,     \
    0x8BF9U,     \
    0x9BD8U,     \
    0xABBBU,     \
    0xBB9AU,     \
    0x4A75U,     \
    0x5A54U,     \
    0x6A37U,     \
    0x7A16U,     \
    0x0AF1U,     \
    0x1AD0U,     \
    0x2AB3U,     \
    0x3A92U,     \
    0xFD2EU,     \
    0xED0FU,     \
    0xDD6CU,     \
    0xCD4DU,     \
    0xBDAAU,     \
    0xAD8BU,     \
    0x9DE8U,     \
    0x8DC9U,     \
    0x7C26U,     \
    0x6C07U,     \
    0x5C64U,     \
    0x4C45U,     \
    0x3CA2U,     \
    0x2C83U,     \
    0x1CE0U,     \
    0x0CC1U,     \
    0xEF1FU,     \
    0xFF3EU,     \
    0xCF5DU,     \
    0xDF7CU,     \
    0xAF9BU,     \
    0xBFBAU,     \
    0x8FD9U,     \
    0x9FF8U,     \
    0x6E17U,     \
    0x7E36U,     \
    0x4E55U,     \
    0x5E74U,     \
    0x2E93U,     \
    0x3EB2U,     \
    0x0ED1U,     \
    0x1EF0U      \
    };

/* ========================================================================== */
/*                          Function Declarations                             */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                          Function Definitions                              */
/* ========================================================================== */

int32_t Bsp_ar12xxComputeCrc(uint8_t* wMbDataBaseAdd,
                             uint32_t hNBytes,
                             uint8_t  crcLen,
                             uint8_t* outCrc)
{
    uint16_t      hRemainder = (uint16_t)BSPDRV_AR12XX_CRC_INITIAL_REMAINDER;
    uint64_t      lDData             ;
    uint32_t      lDData_temp        ;

    uint16_t      hIndex             ;
    uint16_t      hNDoubleWords      ;
    uint8_t       cNRemainderBytes   ;
    uint8_t       cData              ;
    uint8_t       cByte              ;
    int32_t       retVal = BSP_SOK;

    /* The length can not be zero */
    if (BSPDRV_AR12XX_CRC_M_ZERO == hNBytes)
    {
        retVal = BSP_EBADARGS;
    }
    if (retVal == BSP_SOK)
    {
        /* To reduce MB access time perform 32 bit bus access at a time */
        /* Num of double words -  8 bytes */
        hNDoubleWords      = (uint16_t)(hNBytes >> BSPDRV_AR12XX_CRC_M_TWO);
        /* Num of bytes less than 4 bytes */
        cNRemainderBytes   = (uint8_t)(hNBytes & BSPDRV_AR12XX_CRC_M_THREE);

        /* Read 8 bytes at a time and perform CRC calculation */
        for (hIndex = BSPDRV_AR12XX_CRC_M_ZERO; hIndex < hNDoubleWords; hIndex++)
        {
            /*
             * Read 64 bit data from MB in little-endian mode
             * - the first byte of the message is in LSB
             */
            lDData_temp = BSPDRV_AR12XX_CRC_M_REG_READ32(wMbDataBaseAdd);
            lDData = (uint64_t) lDData_temp;
            wMbDataBaseAdd += (uint32_t)BSPDRV_AR12XX_CRC_M_FOUR;

            /*
             * Divide the message by the polynomial, a byte at a time.
             */
            for (cByte = BSPDRV_AR12XX_CRC_M_ZERO;
                 cByte < BSPDRV_AR12XX_CRC_M_FOUR; cByte++)
            {
                /* Reminder upper byte xor with incoming data before dividing
                 * with polynomial */
                cData = (uint8_t)((uint64_t)lDData & (uint64_t) 0x000000FF) ^ \
                    (uint8_t)(hRemainder >> (BSPDRV_AR12XX_CRC_M_EIGHT));
                /*
                 * Perform poly divide on incoming data - the result from the
                 * LUT, xor upper byte of result with lower byte of previous
                 * reminder - this is to xor previous reminder
                 * lower byte with next incoming data
                 */
                hRemainder = hCrc16Table[cData] ^
                    ((uint16_t)(hRemainder << BSPDRV_AR12XX_CRC_M_EIGHT));
                /* Get next byte in LSB - that is the next byte of message */
                lDData = lDData >> BSPDRV_AR12XX_CRC_M_EIGHT;
            }
        }

        /*
         * Read each bytes one at a time and perform CRC calculation if number
         * of bytes less than 4 bytes
         */
        for (hIndex = BSPDRV_AR12XX_CRC_M_ZERO;
             hIndex < cNRemainderBytes; hIndex++)
        {
            /* Read 1 byte data from MB */
            cData = BSPDRV_AR12XX_CRC_M_REG_READ8(wMbDataBaseAdd);
            wMbDataBaseAdd += (uint32_t)BSPDRV_AR12XX_CRC_M_ONE;

            /*
             * Divide the message by the polynomial, a byte at a time.
             */

            /* Reminder upper byte xor with incoming data before
             * dividing with polynomial */
            cData = cData ^ (uint8_t)(hRemainder >> BSPDRV_AR12XX_CRC_M_EIGHT);
            /*
             * Perform poly divide on incoming data - the result from the LUT,
             * xor upper byte of result with lower byte of previous reminder -
             * this is to xor previous reminder lower byte with next incoming
             * data
             */
            hRemainder = hCrc16Table[cData] ^
                ((uint16_t)(hRemainder << BSPDRV_AR12XX_CRC_M_EIGHT));
        }

        /*
         * The final remainder is the CRC.
         */
         if(outCrc != NULL)
         {
             *((uint16_t*)outCrc) = hRemainder;
         }
    }
    return retVal;
}

