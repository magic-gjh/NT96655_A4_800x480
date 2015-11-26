//This source code is generated by UI Designer Studio.

#ifndef UIFLOWWNDMOVIE_H
#define UIFLOWWNDMOVIE_H

#include "UIFramework.h"

#define UIFlowWndMovie_Restart_Rec      0x5a5a
extern VControl UIFlowWndMovieCtrl;//Panel type

extern VControl UIFlowWndMovie_Static_cameraCtrl;//Static type

extern VControl UIFlowWndMovie_Status_CyclicRecCtrl;//Status type

typedef enum
{
UIFlowWndMovie_Status_CyclicRec_ICONID_NULL,
UIFlowWndMovie_Status_CyclicRec_ICON_CYCLIC_REC_1MIN,
UIFlowWndMovie_Status_CyclicRec_ICON_CYCLIC_REC_3MIN,
UIFlowWndMovie_Status_CyclicRec_ICON_CYCLIC_REC_5MIN,
UIFlowWndMovie_Status_CyclicRec_MAX
}UIFlowWndMovie_Status_CyclicRec_Setting;

extern VControl UIFlowWndMovie_Status_MotionDetCtrl;//Status type

typedef enum
{
UIFlowWndMovie_Status_MotionDet_ICONID_NULL,
UIFlowWndMovie_Status_MotionDet_ICON_MOTION_ON,
UIFlowWndMovie_Status_MotionDet_MAX
}UIFlowWndMovie_Status_MotionDet_Setting;

extern VControl UIFlowWndMovie_Status_batteryCtrl;//Status type

typedef enum
{
UIFlowWndMovie_Status_battery_ICON_BATTERY_FULL,
UIFlowWndMovie_Status_battery_ICON_BATTERY_MED,
UIFlowWndMovie_Status_battery_ICON_BATTERY_LOW,
UIFlowWndMovie_Status_battery_ICON_BATTERY_EMPTY,
UIFlowWndMovie_Status_battery_ICON_BATTERY_ZERO,
UIFlowWndMovie_Status_battery_ICON_BATTERY_CHARGE,
UIFlowWndMovie_Status_battery_ICON_TRANSPAENT,
UIFlowWndMovie_Status_battery_MAX
}UIFlowWndMovie_Status_battery_Setting;

extern VControl UIFlowWndMovie_YMD_StaticCtrl;//Static type

extern VControl UIFlowWndMovie_HMS_StaticCtrl;//Static type

extern VControl UIFlowWndMovie_Status_StorageCtrl;//Status type

typedef enum
{
UIFlowWndMovie_Status_Storage_ICON_INTERNAL_FLASH,
UIFlowWndMovie_Status_Storage_ICON_SD_CARD,
UIFlowWndMovie_Status_Storage_ICON_SD_LOCK,
UIFlowWndMovie_Status_Storage_MAX
}UIFlowWndMovie_Status_Storage_Setting;

extern VControl UIFlowWndMovie_Static_timeCtrl;//Static type

extern VControl UIFlowWndMovie_Static_maxtimeCtrl;//Static type

extern VControl UIFlowWndMovie_Static_resolutionCtrl;//Static type

extern VControl UIFlowWndMovie_Zoom_StaticCtrl;//Static type

extern VControl UIFlowWndMovie_StatusICN_EVCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_StatusICN_EV_ICON_EV_P2P0,
UIFlowWndMovie_StatusICN_EV_ICON_EV_P1P6,
UIFlowWndMovie_StatusICN_EV_ICON_EV_P1P3,
UIFlowWndMovie_StatusICN_EV_ICON_EV_P1P0,
UIFlowWndMovie_StatusICN_EV_ICON_EV_P0P6,
UIFlowWndMovie_StatusICN_EV_ICON_EV_P0P3,
UIFlowWndMovie_StatusICN_EV_ICON_EV_P0P0,
UIFlowWndMovie_StatusICN_EV_ICON_EV_M0P3,
UIFlowWndMovie_StatusICN_EV_ICON_EV_M0P6,
UIFlowWndMovie_StatusICN_EV_ICON_EV_M1P0,
UIFlowWndMovie_StatusICN_EV_ICON_EV_M1P3,
UIFlowWndMovie_StatusICN_EV_ICON_EV_M1P6,
UIFlowWndMovie_StatusICN_EV_ICON_EV_M2P0,
UIFlowWndMovie_StatusICN_EV_MAX
}UIFlowWndMovie_StatusICN_EV_Setting;

extern VControl UIFlowWndMovie_Status_HDRCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_HDR_ICONID_NULL,
UIFlowWndMovie_Status_HDR_ICON_WDR,
UIFlowWndMovie_Status_HDR_MAX
}UIFlowWndMovie_Status_HDR_Setting;

extern VControl UIFlowWndMovie_StaticIcon_PIMCCtrl;//Static type 

extern VControl UIFlowWndMovie_Status_GPSCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_GPS_ICON_GPS_NS,
UIFlowWndMovie_Status_GPS_ICON_GPS_OK,
UIFlowWndMovie_Status_GPS_ICON_GPS_LEVEL0,
UIFlowWndMovie_Status_GPS_ICON_GPS_LEVEL1,
UIFlowWndMovie_Status_GPS_ICON_GPS_LEVEL2,
UIFlowWndMovie_Status_GPS_ICON_GPS_LEVEL3,
UIFlowWndMovie_Status_GPS_MAX
}UIFlowWndMovie_Status_GPS_Setting;

extern VControl UIFlowWndMovie_Status_LEDCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_LED_ICON_IRLED_OFF,
UIFlowWndMovie_Status_LED_ICON_IRLED_ON,
UIFlowWndMovie_Status_LED_MAX
}UIFlowWndMovie_Status_LED_Setting;

extern VControl UIFlowWndMovie_Status_GSENSORCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_GSENSOR_ICONID_NULL,
UIFlowWndMovie_Status_GSENSOR_ICON_GSENSOR_L,
UIFlowWndMovie_Status_GSENSOR_ICON_GSENSOR_M,
UIFlowWndMovie_Status_GSENSOR_ICON_GSENSOR_H,
UIFlowWndMovie_Status_GSENSOR_MAX
}UIFlowWndMovie_Status_GSENSOR_Setting;

extern VControl UIFlowWndMovie_Static_LockCtrl;//Static type 

extern VControl UIFlowWndMovie_Status_AudioCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_Audio_ICON_VOICE_OFF,
UIFlowWndMovie_Status_Audio_ICON_VOICE_ON,
UIFlowWndMovie_Status_Audio_MAX
}UIFlowWndMovie_Status_Audio_Setting;

extern VControl UIFlowWndMovie_Status_RECCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_REC_ICON_TRANSPAENT,
UIFlowWndMovie_Status_REC_ICON_REC_ELIPPSE,
UIFlowWndMovie_Status_REC_MAX
}UIFlowWndMovie_Status_REC_Setting;

extern VControl UIFlowWndMovie_Status_TimeLapesCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_TimeLapes_ICON_TRANSPAENT,
UIFlowWndMovie_Status_TimeLapes_ICON_TIMELAPSE_REC_STATUS,
UIFlowWndMovie_Status_TimeLapes_MAX
}UIFlowWndMovie_Status_TimeLapes_Setting;

extern VControl UIFlowWndMovie_Status_ParkingMonitorCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_ParkingMonitor_ICONID_NULL,
UIFlowWndMovie_Status_ParkingMonitor_ICON_PARKING_MONITOR,
UIFlowWndMovie_Status_ParkingMonitor_MAX
}UIFlowWndMovie_Status_ParkingMonitor_Setting;

extern VControl UIFlowWndMovie_CarNo_StaticCtrl;//Static type 

extern VControl UIFlowWndMovie_Status_ZHCarNoCtrl;//Status type 

typedef enum
{
UIFlowWndMovie_Status_ZHCarNo_STRID_NULL_,
UIFlowWndMovie_Status_ZHCarNo_STRID_4E91,
UIFlowWndMovie_Status_ZHCarNo_STRID_4EAC,
UIFlowWndMovie_Status_ZHCarNo_STRID_5B81,
UIFlowWndMovie_Status_ZHCarNo_STRID_5DDD,
UIFlowWndMovie_Status_ZHCarNo_STRID_6CAA,
UIFlowWndMovie_Status_ZHCarNo_STRID_6D25,
UIFlowWndMovie_Status_ZHCarNo_STRID_6D59,
UIFlowWndMovie_Status_ZHCarNo_STRID_6E1D,
UIFlowWndMovie_Status_ZHCarNo_STRID_6E58,
UIFlowWndMovie_Status_ZHCarNo_STRID_7CA4,
UIFlowWndMovie_Status_ZHCarNo_STRID_8C6B,
UIFlowWndMovie_Status_ZHCarNo_STRID_8D35,
UIFlowWndMovie_Status_ZHCarNo_STRID_8D63,
UIFlowWndMovie_Status_ZHCarNo_STRID_8FBD,
UIFlowWndMovie_Status_ZHCarNo_STRID_9C81,
UIFlowWndMovie_Status_ZHCarNo_STRID_9ED1,
UIFlowWndMovie_Status_ZHCarNo_STRID_65B0,
UIFlowWndMovie_Status_ZHCarNo_STRID_82CF,
UIFlowWndMovie_Status_ZHCarNo_STRID_85CF,
UIFlowWndMovie_Status_ZHCarNo_STRID_95FD,
UIFlowWndMovie_Status_ZHCarNo_STRID_664B,
UIFlowWndMovie_Status_ZHCarNo_STRID_743C,
UIFlowWndMovie_Status_ZHCarNo_STRID_5180,
UIFlowWndMovie_Status_ZHCarNo_STRID_5409,
UIFlowWndMovie_Status_ZHCarNo_STRID_6842,
UIFlowWndMovie_Status_ZHCarNo_STRID_7518,
UIFlowWndMovie_Status_ZHCarNo_STRID_7696,
UIFlowWndMovie_Status_ZHCarNo_STRID_8499,
UIFlowWndMovie_Status_ZHCarNo_STRID_9102,
UIFlowWndMovie_Status_ZHCarNo_STRID_9655,
UIFlowWndMovie_Status_ZHCarNo_STRID_9752,
UIFlowWndMovie_Status_ZHCarNo_MAX
}UIFlowWndMovie_Status_ZHCarNo_Setting;

extern VControl UIFlowWndMovie_Static_GuideCtrl;//Static type 

//---------------------UIFlowWndMovieCtrl User Export---------------------------
#endif
