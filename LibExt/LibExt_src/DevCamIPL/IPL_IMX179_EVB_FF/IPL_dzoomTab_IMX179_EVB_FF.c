/**
    IPL dzoom table IMX179_EVB_FF.

    @file       IPL_dzoomTableIMX179_EVB_FF.c
    @ingroup    mISYSAlg
    @note       Nothing (or anything need to be mentioned).

    Copyright   Novatek Microelectronics Corp. 2011.  All rights reserved.
*/

#include "IPL_IMX179_EVB_FF_Int.h"

const UINT32 VDOZOOM_INFOR_MODE_1_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie         sie
    //crop out    ch0 out      pre in
{   3200,   2400,   2112,   1188,   2112,   1188},
{   2112,   1188,   2112,   1188,   2112,   1188},
{   852 ,   640 ,   852 ,   640 ,   852 ,   640 },
{   784 ,   588 ,   784 ,   588 ,   784 ,   588 },
{   728 ,   548 ,   728 ,   548 ,   728 ,   548 },
{   680 ,   512 ,   680 ,   512 ,   680 ,   512 },
{   640 ,   480 ,   640 ,   480 ,   640 ,   480 },
{   600 ,   448 ,   600 ,   448 ,   600 ,   448 },
{   568 ,   424 ,   568 ,   424 ,   568 ,   424 },
{   536 ,   404 ,   536 ,   404 ,   536 ,   404 },
{   512 ,   384 ,   512 ,   384 ,   512 ,   384 },
{   484 ,   364 ,   484 ,   364 ,   484 ,   364 },
{   464 ,   348 ,   464 ,   348 ,   464 ,   348 },
{   444 ,   332 ,   444 ,   332 ,   444 ,   332 },
{   424 ,   320 ,   424 ,   320 ,   424 ,   320 },
{   408 ,   304 ,   408 ,   304 ,   408 ,   304 },
{   392 ,   292 ,   392 ,   292 ,   392 ,   292 },
{   376 ,   284 ,   376 ,   284 ,   376 ,   284 },
{   364 ,   272 ,   364 ,   272 ,   364 ,   272 },
{   352 ,   264 ,   352 ,   264 ,   352 ,   264 },
{   340 ,   256 ,   340 ,   256 ,   340 ,   256 },
{   328 ,   244 ,   328 ,   244 ,   328 ,   244 },
{   320 ,   240 ,   320 ,   240 ,   320 ,   240 },
{   308 ,   232 ,   308 ,   232 ,   308 ,   232 },
{   300 ,   224 ,   300 ,   224 ,   300 ,   224 },
{   292 ,   216 ,   292 ,   216 ,   292 ,   216 },
{   284 ,   212 ,   284 ,   212 ,   284 ,   212 },
{   276 ,   204 ,   276 ,   204 ,   276 ,   204 },
{   268 ,   200 ,   268 ,   200 ,   268 ,   200 },
{   260 ,   196 ,   260 ,   196 ,   260 ,   196 },
{   256 ,   192 ,   256 ,   192 ,   256 ,   192 },
};

const UINT32 VDOZOOM_INFOR_MODE_1_CAP_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie         sie
    //crop out    ch0 out      pre in
{   3200,   2400,   3200,   2400,   3200,   2400},
{   2112,   1188,   2112,   1188,   2112,   1188},
{   852 ,   640 ,   852 ,   640 ,   852 ,   640 },
{   784 ,   588 ,   784 ,   588 ,   784 ,   588 },
{   728 ,   548 ,   728 ,   548 ,   728 ,   548 },
{   680 ,   512 ,   680 ,   512 ,   680 ,   512 },
{   640 ,   480 ,   640 ,   480 ,   640 ,   480 },
{   600 ,   448 ,   600 ,   448 ,   600 ,   448 },
{   568 ,   424 ,   568 ,   424 ,   568 ,   424 },
{   536 ,   404 ,   536 ,   404 ,   536 ,   404 },
{   512 ,   384 ,   512 ,   384 ,   512 ,   384 },
{   484 ,   364 ,   484 ,   364 ,   484 ,   364 },
{   464 ,   348 ,   464 ,   348 ,   464 ,   348 },
{   444 ,   332 ,   444 ,   332 ,   444 ,   332 },
{   424 ,   320 ,   424 ,   320 ,   424 ,   320 },
{   408 ,   304 ,   408 ,   304 ,   408 ,   304 },
{   392 ,   292 ,   392 ,   292 ,   392 ,   292 },
{   376 ,   284 ,   376 ,   284 ,   376 ,   284 },
{   364 ,   272 ,   364 ,   272 ,   364 ,   272 },
{   352 ,   264 ,   352 ,   264 ,   352 ,   264 },
{   340 ,   256 ,   340 ,   256 ,   340 ,   256 },
{   328 ,   244 ,   328 ,   244 ,   328 ,   244 },
{   320 ,   240 ,   320 ,   240 ,   320 ,   240 },
{   308 ,   232 ,   308 ,   232 ,   308 ,   232 },
{   300 ,   224 ,   300 ,   224 ,   300 ,   224 },
{   292 ,   216 ,   292 ,   216 ,   292 ,   216 },
{   284 ,   212 ,   284 ,   212 ,   284 ,   212 },
{   276 ,   204 ,   276 ,   204 ,   276 ,   204 },
{   268 ,   200 ,   268 ,   200 ,   268 ,   200 },
{   260 ,   196 ,   260 ,   196 ,   260 ,   196 },
{   256 ,   192 ,   256 ,   192 ,   256 ,   192 },
};
/*
const UINT32 VDOZOOM_INFOR_MODE_2_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie         sie
    //crop out    ch0 out      pre in
{   3200,   2400,   3200,   2400,   3200,   2400},
{   2112,   1188,   2112,   1188,   2112,   1188},
{   852 ,   640 ,   852 ,   640 ,   852 ,   640 },
{   784 ,   588 ,   784 ,   588 ,   784 ,   588 },
{   728 ,   548 ,   728 ,   548 ,   728 ,   548 },
{   680 ,   512 ,   680 ,   512 ,   680 ,   512 },
{   640 ,   480 ,   640 ,   480 ,   640 ,   480 },
{   600 ,   448 ,   600 ,   448 ,   600 ,   448 },
{   568 ,   424 ,   568 ,   424 ,   568 ,   424 },
{   536 ,   404 ,   536 ,   404 ,   536 ,   404 },
{   512 ,   384 ,   512 ,   384 ,   512 ,   384 },
{   484 ,   364 ,   484 ,   364 ,   484 ,   364 },
{   464 ,   348 ,   464 ,   348 ,   464 ,   348 },
{   444 ,   332 ,   444 ,   332 ,   444 ,   332 },
{   424 ,   320 ,   424 ,   320 ,   424 ,   320 },
{   408 ,   304 ,   408 ,   304 ,   408 ,   304 },
{   392 ,   292 ,   392 ,   292 ,   392 ,   292 },
{   376 ,   284 ,   376 ,   284 ,   376 ,   284 },
{   364 ,   272 ,   364 ,   272 ,   364 ,   272 },
{   352 ,   264 ,   352 ,   264 ,   352 ,   264 },
{   340 ,   256 ,   340 ,   256 ,   340 ,   256 },
{   328 ,   244 ,   328 ,   244 ,   328 ,   244 },
{   320 ,   240 ,   320 ,   240 ,   320 ,   240 },
{   308 ,   232 ,   308 ,   232 ,   308 ,   232 },
{   300 ,   224 ,   300 ,   224 ,   300 ,   224 },
{   292 ,   216 ,   292 ,   216 ,   292 ,   216 },
{   284 ,   212 ,   284 ,   212 ,   284 ,   212 },
{   276 ,   204 ,   276 ,   204 ,   276 ,   204 },
{   268 ,   200 ,   268 ,   200 ,   268 ,   200 },
{   260 ,   196 ,   260 ,   196 ,   260 ,   196 },
{   256 ,   192 ,   256 ,   192 ,   256 ,   192 },
};
*/
const UINT32 VDOZOOM_INFOR_MODE_3_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie         sie
    //crop out    ch0 out      pre in
{   1640,   1188,   1640,   1188,   1640,   1188},
{   1640,   1188,   1640,   1188,   1640,   1188},
{   852 ,   640 ,   852 ,   640 ,   852 ,   640 },
{   784 ,   588 ,   784 ,   588 ,   784 ,   588 },
{   728 ,   548 ,   728 ,   548 ,   728 ,   548 },
{   680 ,   512 ,   680 ,   512 ,   680 ,   512 },
{   640 ,   480 ,   640 ,   480 ,   640 ,   480 },
{   600 ,   448 ,   600 ,   448 ,   600 ,   448 },
{   568 ,   424 ,   568 ,   424 ,   568 ,   424 },
{   536 ,   404 ,   536 ,   404 ,   536 ,   404 },
{   512 ,   384 ,   512 ,   384 ,   512 ,   384 },
{   484 ,   364 ,   484 ,   364 ,   484 ,   364 },
{   464 ,   348 ,   464 ,   348 ,   464 ,   348 },
{   444 ,   332 ,   444 ,   332 ,   444 ,   332 },
{   424 ,   320 ,   424 ,   320 ,   424 ,   320 },
{   408 ,   304 ,   408 ,   304 ,   408 ,   304 },
{   392 ,   292 ,   392 ,   292 ,   392 ,   292 },
{   376 ,   284 ,   376 ,   284 ,   376 ,   284 },
{   364 ,   272 ,   364 ,   272 ,   364 ,   272 },
{   352 ,   264 ,   352 ,   264 ,   352 ,   264 },
{   340 ,   256 ,   340 ,   256 ,   340 ,   256 },
{   328 ,   244 ,   328 ,   244 ,   328 ,   244 },
{   320 ,   240 ,   320 ,   240 ,   320 ,   240 },
{   308 ,   232 ,   308 ,   232 ,   308 ,   232 },
{   300 ,   224 ,   300 ,   224 ,   300 ,   224 },
{   292 ,   216 ,   292 ,   216 ,   292 ,   216 },
{   284 ,   212 ,   284 ,   212 ,   284 ,   212 },
{   276 ,   204 ,   276 ,   204 ,   276 ,   204 },
{   268 ,   200 ,   268 ,   200 ,   268 ,   200 },
{   260 ,   196 ,   260 ,   196 ,   260 ,   196 },
{   256 ,   192 ,   256 ,   192 ,   256 ,   192 },
};

const UINT32 VDOZOOM_INFOR_MODE_4_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie         sie
    //crop out    ch0 out      pre in
{   1640,   1188,   1640,   1188,   1640,   1188},
{   1640,   1188,   1640,   1188,   1640,   1188},
{   852 ,   640 ,   852 ,   640 ,   852 ,   640 },
{   784 ,   588 ,   784 ,   588 ,   784 ,   588 },
{   728 ,   548 ,   728 ,   548 ,   728 ,   548 },
{   680 ,   512 ,   680 ,   512 ,   680 ,   512 },
{   640 ,   480 ,   640 ,   480 ,   640 ,   480 },
{   600 ,   448 ,   600 ,   448 ,   600 ,   448 },
{   568 ,   424 ,   568 ,   424 ,   568 ,   424 },
{   536 ,   404 ,   536 ,   404 ,   536 ,   404 },
{   512 ,   384 ,   512 ,   384 ,   512 ,   384 },
{   484 ,   364 ,   484 ,   364 ,   484 ,   364 },
{   464 ,   348 ,   464 ,   348 ,   464 ,   348 },
{   444 ,   332 ,   444 ,   332 ,   444 ,   332 },
{   424 ,   320 ,   424 ,   320 ,   424 ,   320 },
{   408 ,   304 ,   408 ,   304 ,   408 ,   304 },
{   392 ,   292 ,   392 ,   292 ,   392 ,   292 },
{   376 ,   284 ,   376 ,   284 ,   376 ,   284 },
{   364 ,   272 ,   364 ,   272 ,   364 ,   272 },
{   352 ,   264 ,   352 ,   264 ,   352 ,   264 },
{   340 ,   256 ,   340 ,   256 ,   340 ,   256 },
{   328 ,   244 ,   328 ,   244 ,   328 ,   244 },
{   320 ,   240 ,   320 ,   240 ,   320 ,   240 },
{   308 ,   232 ,   308 ,   232 ,   308 ,   232 },
{   300 ,   224 ,   300 ,   224 ,   300 ,   224 },
{   292 ,   216 ,   292 ,   216 ,   292 ,   216 },
{   284 ,   212 ,   284 ,   212 ,   284 ,   212 },
{   276 ,   204 ,   276 ,   204 ,   276 ,   204 },
{   268 ,   200 ,   268 ,   200 ,   268 ,   200 },
{   260 ,   196 ,   260 ,   196 ,   260 ,   196 },
{   256 ,   192 ,   256 ,   192 ,   256 ,   192 },
};

UINT32* SenMode2Tbl(UINT32 SenMode, UINT32 *DzMaxidx)
{
    UINT32 *Ptr;
    switch(SenMode)
    {
        case SENSOR_MODE_1:
            Ptr = (UINT32*)&VDOZOOM_INFOR_MODE_1_TABLE[0][0];
            *DzMaxidx = (sizeof(VDOZOOM_INFOR_MODE_1_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
            break;

        case SENSOR_MODE_2:
            Ptr = (UINT32*)&VDOZOOM_INFOR_MODE_1_CAP_TABLE[0][0];
            *DzMaxidx = (sizeof(VDOZOOM_INFOR_MODE_1_CAP_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
            break;

        case SENSOR_MODE_3:
            Ptr = (UINT32*)&VDOZOOM_INFOR_MODE_3_TABLE[0][0];
            *DzMaxidx = (sizeof(VDOZOOM_INFOR_MODE_3_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
            break;

        case SENSOR_MODE_4:
            Ptr = (UINT32*)&VDOZOOM_INFOR_MODE_4_TABLE[0][0];
            *DzMaxidx = (sizeof(VDOZOOM_INFOR_MODE_4_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
            break;

        default:
            DBG_ERR("Wrong Dzoom Mode\r\n");
            Ptr = NULL;
            *DzMaxidx = 0;
            break;
    }
    return Ptr;
}
