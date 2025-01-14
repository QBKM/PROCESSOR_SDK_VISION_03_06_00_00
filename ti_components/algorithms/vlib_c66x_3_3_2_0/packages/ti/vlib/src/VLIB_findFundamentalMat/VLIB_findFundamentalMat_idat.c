/*******************************************************************************
 **+--------------------------------------------------------------------------+**
 **|                            ****                                          |**
 **|                            ****                                          |**
 **|                            ******o***                                    |**
 **|                      ********_///_****                                   |**
 **|                      ***** /_//_/ ****                                   |**
 **|                       ** ** (__/ ****                                    |**
 **|                           *********                                      |**
 **|                            ****                                          |**
 **|                            ***                                           |**
 **|                                                                          |**
 **|         Copyright (c) 2007-2013 Texas Instruments Incorporated           |**
 **|                        ALL RIGHTS RESERVED                               |**
 **|                                                                          |**
 **| Permission to use, copy, modify, or distribute this software,            |**
 **| whether in part or in whole, for any purpose is forbidden without        |**
 **| a signed licensing agreement and NDA from Texas Instruments              |**
 **| Incorporated (TI).                                                       |**
 **|                                                                          |**
 **| TI makes no representation or warranties with respect to the             |**
 **| performance of this computer program, and specifically disclaims         |**
 **| any responsibility for any damages, special or consequential,            |**
 **| connected with the use of this program.                                  |**
 **|                                                                          |**
 **+--------------------------------------------------------------------------+**
 *******************************************************************************/
#include "../common/VLIB_memory.h"
#include "VLIB_findFundamentalMat_idat.h"

/* Previous frame key points, x,y*/
static VLIB_F32    points1[256 * 2] = { 208.00, 334.00, 1000.00, 540.00, 537.00, 334.00, 849.00, 541.00, 23.00, 542.00, 816.00, 542.00, 1175.00, 542.00, 140.00, 543.00, 764.00, 543.00, 17.00, 335.00,
                                        123.00, 335.00, 179.00, 335.00, 190.00, 335.00, 239.00, 335.00, 244.00, 335.00, 251.00, 335.00, 257.00, 335.00, 305.00, 335.00, 326.00, 335.00, 651.00, 335.00,
                                        653.00, 335.00, 744.00, 335.00, 748.00, 335.00, 758.00, 335.00, 798.00, 335.00, 856.00, 335.00, 864.00, 335.00, 1019.00, 335.00, 1052.00, 335.00, 803.00, 543.00,
                                        1070.00, 335.00, 1185.00, 543.00, 139.00, 336.00, 155.00, 336.00, 196.00, 336.00, 282.00, 336.00, 363.00, 336.00, 366.00, 336.00, 395.00, 336.00, 402.00, 336.00,
                                        445.00, 336.00, 478.00, 336.00, 494.00, 336.00, 522.00, 336.00, 526.00, 336.00, 658.00, 336.00, 970.00, 544.00, 173.00, 545.00, 1141.00, 545.00, 1119.00, 336.00,
                                        1172.00, 545.00, 1017.00, 546.00, 79.00, 337.00, 123.00, 337.00, 170.00, 337.00, 179.00, 337.00, 391.00, 337.00, 492.00, 337.00, 512.00, 337.00, 661.00, 337.00,
                                        1238.00, 546.00, 1069.00, 337.00, 43.00, 338.00, 91.00, 338.00, 148.00, 338.00, 161.00, 338.00, 189.00, 338.00, 254.00, 338.00, 273.00, 338.00, 280.00, 338.00,
                                        398.00, 338.00, 490.00, 338.00, 521.00, 338.00, 669.00, 338.00, 744.00, 338.00, 783.00, 338.00, 852.00, 338.00, 1036.00, 338.00, 1117.00, 338.00, 102.00, 339.00,
                                        135.00, 339.00, 166.00, 339.00, 177.00, 339.00, 283.00, 339.00, 293.00, 339.00, 402.00, 339.00, 479.00, 339.00, 488.00, 339.00, 530.00, 339.00, 595.00, 339.00,
                                        600.00, 339.00, 638.00, 339.00, 847.00, 339.00, 861.00, 339.00, 1005.00, 339.00, 1011.00, 339.00, 1031.00, 339.00, 1052.00, 339.00, 1159.00, 339.00, 1226.00, 339.00,
                                        1236.00, 339.00, 1239.00, 339.00, 112.00, 340.00, 324.00, 340.00, 676.00, 340.00, 772.00, 340.00, 777.00, 340.00, 787.00, 340.00, 971.00, 340.00, 1025.00, 340.00,
                                        1117.00, 340.00, 1220.00, 340.00, 1231.00, 340.00, 133.00, 341.00, 148.00, 341.00, 181.00, 341.00, 395.00, 341.00, 440.00, 341.00, 446.00, 341.00, 479.00, 341.00,
                                        508.00, 341.00, 678.00, 341.00, 867.00, 341.00, 895.00, 341.00, 933.00, 341.00, 1021.00, 341.00, 1225.00, 341.00, 65.00, 342.00, 207.00, 342.00, 249.00, 342.00,
                                        392.00, 342.00, 401.00, 342.00, 444.00, 342.00, 609.00, 342.00, 855.00, 342.00, 1009.00, 342.00, 77.00, 343.00, 115.00, 343.00, 123.00, 343.00, 134.00, 343.00,
                                        143.00, 343.00, 253.00, 343.00, 274.00, 343.00, 312.00, 343.00, 345.00, 343.00, 480.00, 343.00, 685.00, 343.00, 705.00, 343.00, 744.00, 343.00, 851.00, 343.00,
                                        889.00, 343.00, 58.00, 344.00, 153.00, 344.00, 209.00, 344.00, 276.00, 344.00, 295.00, 344.00, 355.00, 344.00, 406.00, 344.00, 490.00, 344.00, 492.00, 344.00,
                                        588.00, 344.00, 687.00, 344.00, 695.00, 344.00, 747.00, 344.00, 855.00, 344.00, 863.00, 344.00, 892.00, 344.00, 908.00, 344.00, 993.00, 344.00, 995.00, 344.00,
                                        79.00, 345.00, 97.00, 345.00, 135.00, 345.00, 323.00, 345.00, 441.00, 345.00, 509.00, 345.00, 841.00, 345.00, 901.00, 345.00, 913.00, 345.00, 915.00, 345.00,
                                        921.00, 345.00, 989.00, 345.00, 1128.00, 345.00, 75.00, 346.00, 183.00, 346.00, 280.00, 346.00, 304.00, 346.00, 319.00, 346.00, 329.00, 346.00, 447.00, 346.00,
                                        493.00, 346.00, 712.00, 346.00, 724.00, 346.00, 894.00, 346.00, 984.00, 346.00, 1159.00, 346.00, 93.00, 347.00, 112.00, 347.00, 176.00, 347.00, 850.00, 347.00,
                                        864.00, 347.00, 1049.00, 347.00, 1221.00, 347.00, 69.00, 348.00, 73.00, 348.00, 102.00, 348.00, 128.00, 348.00, 142.00, 348.00, 146.00, 348.00, 268.00, 348.00,
                                        276.00, 348.00, 404.00, 348.00, 491.00, 348.00, 611.00, 348.00, 715.00, 348.00, 734.00, 348.00, 870.00, 348.00, 956.00, 348.00, 960.00, 348.00, 974.00, 348.00,
                                        976.00, 348.00, 1042.00, 348.00, 1062.00, 348.00, 41.00, 349.00, 112.00, 349.00, 117.00, 349.00, 248.00, 349.00, 272.00, 349.00, 283.00, 349.00, 397.00, 349.00,
                                        489.00, 349.00, 705.00, 349.00, 968.00, 349.00, 67.00, 350.00, 69.00, 350.00, 102.00, 350.00, 148.00, 350.00, 242.00, 350.00, 612.00, 350.00, 743.00, 350.00,
                                        847.00, 350.00, 1026.00, 350.00, 1054.00, 350.00, 1129.00, 350.00, 1159.00, 350.00, 22.00, 351.00, 35.00, 351.00, 153.00, 351.00, 247.00, 351.00, 288.00, 351.00,
                                        293.00, 351.00, 303.00, 351.00, 584.00, 351.00, 721.00, 351.00, 844.00, 351.00, 890.00, 351.00 };
/* Current frame key points, x,y*/
static VLIB_F32    points2[256 * 2] = { 205.69, 334.38, 1000.31, 539.81, 536.81, 334.31, 848.13, 545.38, 22.25, 543.25, 815.50, 541.69, 1174.19, 542.88, 140.06, 543.06, 764.00, 542.88, 15.25, 335.50,
                                        121.31, 335.38, 177.25, 335.31, 188.50, 335.31, 239.06, 335.50, 243.94, 335.38, 249.31, 335.31, 255.44, 335.25, 303.63, 334.69, 325.06, 335.31, 650.88, 335.31,
                                        652.69, 335.25, 744.38, 335.50, 748.63, 335.13, 757.88, 335.56, 799.56, 334.75, 857.44, 334.94, 865.50, 334.81, 1024.19, 334.56, 1052.00, 335.31, 803.75, 543.13,
                                        1076.81, 334.31, 1185.00, 543.00, 136.69, 336.19, 152.13, 336.38, 194.25, 336.44, 280.19, 336.19, 360.19, 336.44, 364.69, 336.19, 393.44, 336.19, 400.56, 336.13,
                                        443.88, 336.19, 477.31, 336.19, 493.56, 336.25, 521.81, 336.06, 525.69, 335.88, 658.00, 336.31, 971.63, 544.88, 175.06, 545.06, 1142.19, 545.38, 1126.31, 335.06,
                                        1170.56, 544.38, 1017.63, 546.19, 74.06, 337.25, 121.13, 337.38, 167.81, 337.25, 177.44, 337.50, 389.63, 337.19, 491.38, 337.25, 511.69, 337.13, 661.00, 337.31,
                                        1241.00, 545.75, 1075.88, 336.13, 38.81, 338.25, 85.38, 338.06, 144.81, 338.31, 158.56, 338.31, 187.44, 338.31, 252.38, 338.38, 271.25, 338.31, 278.19, 338.31,
                                        396.31, 338.19, 489.38, 338.13, 520.69, 338.13, 668.81, 338.31, 744.38, 338.31, 783.88, 337.94, 853.38, 337.88, 1038.69, 337.94, 1123.69, 337.19, 97.13, 339.19,
                                        132.44, 339.25, 163.44, 339.19, 175.38, 339.44, 281.25, 339.31, 291.13, 339.19, 400.56, 339.13, 478.25, 339.13, 487.31, 339.25, 530.00, 339.06, 594.88, 339.44,
                                        600.00, 339.50, 638.00, 339.25, 848.38, 338.88, 862.56, 338.88, 1010.44, 338.44, 1017.25, 338.31, 1031.31, 339.25, 1059.13, 338.56, 1167.69, 361.19, 1237.44, 338.13,
                                        1247.63, 338.06, 1250.63, 338.13, 107.50, 340.25, 323.06, 340.31, 675.94, 340.38, 772.13, 340.06, 777.38, 340.06, 787.88, 340.06, 975.19, 339.63, 1031.69, 339.25,
                                        1125.63, 339.19, 1231.19, 339.13, 1242.44, 339.13, 130.38, 341.38, 145.13, 341.44, 179.44, 341.44, 393.13, 341.13, 439.06, 341.25, 444.69, 341.19, 478.25, 341.19,
                                        507.56, 341.06, 677.94, 341.31, 868.63, 340.94, 898.19, 340.63, 933.69, 342.88, 1027.19, 340.38, 1236.56, 340.13, 59.69, 342.13, 204.63, 342.13, 247.31, 342.44,
                                        390.56, 342.19, 399.50, 342.19, 442.44, 342.19, 609.13, 342.56, 856.44, 341.94, 1014.19, 341.44, 71.44, 343.13, 110.25, 343.31, 118.44, 343.25, 131.50, 343.31,
                                        140.38, 343.31, 251.31, 343.38, 272.50, 343.25, 311.00, 343.25, 341.88, 343.13, 479.25, 343.19, 685.00, 343.31, 706.00, 343.75, 744.50, 343.25, 852.50, 342.94,
                                        892.31, 342.75, 51.81, 344.25, 150.63, 344.25, 206.63, 344.06, 274.38, 344.38, 293.19, 344.19, 351.81, 344.75, 404.81, 344.19, 489.31, 344.25, 491.38, 344.06,
                                        587.88, 344.38, 687.00, 344.25, 695.50, 344.38, 747.56, 344.13, 856.44, 344.00, 864.63, 344.00, 895.13, 343.63, 910.50, 343.75, 997.56, 343.56, 999.63, 343.63,
                                        73.38, 345.13, 91.63, 345.25, 132.63, 345.38, 322.00, 345.31, 439.88, 345.19, 508.63, 345.19, 842.44, 344.88, 903.50, 344.81, 915.56, 344.81, 917.63, 344.81,
                                        924.00, 344.81, 994.50, 344.44, 1136.56, 343.94, 69.44, 346.13, 181.44, 346.38, 278.25, 346.31, 302.69, 346.31, 317.94, 346.31, 327.88, 346.31, 445.69, 346.19,
                                        492.50, 346.13, 713.19, 346.81, 724.50, 346.19, 897.19, 345.81, 989.38, 345.31, 1168.88, 344.81, 87.75, 347.25, 107.19, 347.25, 174.56, 347.63, 851.44, 346.94,
                                        865.56, 347.00, 1056.06, 346.38, 1232.25, 346.50, 63.50, 348.13, 67.13, 348.19, 97.13, 348.38, 123.38, 348.13, 139.56, 348.31, 143.56, 348.00, 266.63, 348.44,
                                        274.38, 348.38, 402.63, 347.94, 490.44, 348.31, 610.94, 348.31, 715.69, 348.50, 734.63, 348.06, 871.56, 348.06, 960.44, 347.50, 964.06, 347.69, 978.81, 347.63,
                                        980.63, 347.69, 1045.38, 347.81, 1069.31, 347.50, 35.19, 349.00, 107.13, 349.25, 112.13, 349.19, 246.44, 349.31, 270.38, 349.38, 281.06, 349.31, 394.81, 349.25,
                                        488.31, 349.38, 705.88, 350.88, 972.50, 348.56, 61.25, 350.19, 63.50, 350.13, 97.06, 350.38, 145.25, 350.19, 240.69, 350.25, 612.06, 350.38, 743.50, 350.19,
                                        848.44, 349.88, 1029.69, 349.81, 1061.50, 349.75, 1137.63, 349.19, 1168.88, 349.13, 15.19, 351.31, 28.38, 351.13, 150.38, 351.50, 245.38, 351.31, 286.19, 351.25,
                                        291.13, 351.31, 301.63, 351.38, 584.00, 351.38, 721.06, 351.31, 845.38, 350.94, 893.13, 350.69 };

VLIB_F32    fMat1[9] = { -0.000001162, 0.002652532, -0.9600835,
                         -0.002659054,  0.0000127475, 3.477808,
                         0.9625306, -3.487942, 1.0};

VLIB_F32    fMat2[9] = { 0.0000000654, -0.0009209322, 0.3483765,
                         0.0009214894,  0.000003958, -0.9181836,
                         -0.349153,     0.9150888,    1.0};
static findFundamentalMat_testParams_t    testParams[]=
{
    /********************************************
      {
        uint8_t      testPattern;
        VLIB_F32*    points1;
        VLIB_F32*    points2;
        int32_t      numPoints;
        int32_t      numItr4RANSAC;
        int32_t      method;
        VLIB_F32     param1;
        int32_t      leastSqrSolEn;
        VLIB_F32*    outFMat;
        char         *desc;
      }
    *********************************************/
    {
        STATIC,
        points1, points2,
        256,
        10,
        3,               /* method, 8 point algorithm with RANSAC, maximum 10 iteration*/
        4.0,
        0,
        NULL,
        "8 POINT Fundamental Estimation"
    },
    {
        STATIC,
        points1, points2,
        256,
        20,
        3,               /* method, 8 point algorithm with RANSAC, maximum 20 iteration*/
        4.0,
        0,
        NULL,
        "8 POINT Fundamental Estimation With RANSAC"
    },
    {
        STATIC,
        points1, points2,
        256,
        40,
        3,               /* method, 8 point algorithm with RANSAC, maximum 40 iteration*/
        4.0,
        0,
        NULL,
        "8 POINT Fundamental Estimation With RANSAC"
    },
    {
        STATIC,
        points1, points2,
        256,
        80,
        3,               /* method, 8 point algorithm with RANSAC, maximum 80 iteration*/
        4.0,
        0,
        NULL,
        "8 POINT Fundamental Estimation With RANSAC"
    },
    {
        STATIC,
        points1, points2,
        256,
        10,
        7,               /* method, 8 point algorithm with RANSAC, maximum 10 iteration. With least square solution in last*/
        4.0,
        1,
        fMat2,
        "8 POINT Fundamental Estimation With RANSAC"
    },
    {
        STATIC,
        points1, points2,
        256,
        20,
        7,               /* method, 8 point algorithm with RANSAC, maximum 20 iteration. With least square solution in last*/
        4.0,
        0,
        fMat2,
        "8 POINT Fundamental Estimation With RANSAC"
    },
    {
        STATIC,
        points1, points2,
        256,
        40,
        7,               /* method, 8 point algorithm with RANSAC, maximum 40 iteration. With least square solution in last*/
        4.0,
        0,
        fMat2,
        "8 POINT Fundamental Estimation With RANSAC"
    },
    {
        STATIC,
        points1, points2,
        256,
        80,
        7,               /* method, 8 point algorithm with RANSAC, maximum 200 iteration. With least square solution in last*/
        4.0,
        0,
        fMat2,
        "8 POINT Fundamental Estimation With RANSAC"
    }

};
/*
 *  Sends the test parameter structure and number of tests
 */
void findFundamentalMat_getTestParams(findFundamentalMat_testParams_t * *params, int32_t *numTests)
{
    *params = testParams;
    *numTests = sizeof(testParams) / sizeof(findFundamentalMat_testParams_t);
}

/* ======================================================================== */
/*                       End of file                                        */
/* ------------------------------------------------------------------------ */
/*            Copyright (c) 2014 Texas Instruments, Incorporated.           */
/*                           All Rights Reserved.                           */
/* ======================================================================== */

