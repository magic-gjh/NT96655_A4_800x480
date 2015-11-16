//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDSETUPDATETIMERES_H
#define UIMENUWNDSETUPDATETIMERES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,799,479)

SHOW_ITEM_RECT(CMD_Rectangle,Rect4,0,4,509,403,272,0,255,255,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin2Rect,0,0,509,403,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin2)
SHOW_MAP_BODY(Skin2Rect)
SHOW_MAP_BODY(Rect4)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin2,0,0,509,403)

SHOW_MAP_BEGIN(Skin6)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin6,0,0,67,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text8,0,22,67,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal5)
SHOW_MAP_BODY(Skin6)
SHOW_MAP_BODY(Text8)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal5,501,51,568,142)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar11, 6, 32, 61,79, ICON_SEL_BAR_YEAR,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up12, 24, 10, 57,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down13, 24, 70, 57,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin10)
SHOW_MAP_BODY(Image_Sel_Bar11)
SHOW_MAP_BODY(Image_Up12)
SHOW_MAP_BODY(Image_Down13)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin10,0,0,67,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text15,0,22,67,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused9)
SHOW_MAP_BODY(Skin10)
SHOW_MAP_BODY(Text15)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused9,501,51,568,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin17Rect,0,0,67,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin17)
SHOW_MAP_BODY(Skin17Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin17,0,0,67,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text19,0,22,67,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable16)
SHOW_MAP_BODY(Skin17)
SHOW_MAP_BODY(Text19)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable16,501,51,568,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin21Rect,0,0,67,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin21)
SHOW_MAP_BODY(Skin21Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin21,0,0,67,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text23,0,22,67,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable20)
SHOW_MAP_BODY(Skin21)
SHOW_MAP_BODY(Text23)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable20,501,51,568,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin25Rect,0,0,67,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin25)
SHOW_MAP_BODY(Skin25Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin25,0,0,67,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text27,2,14,65,43,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed24)
SHOW_MAP_BODY(Skin25)
SHOW_MAP_BODY(Text27)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed24,501,51,568,142)

CREATE_BUTTON_ITEM_DATA(STRID_A028,STRID_A0,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
SHOW_MAP_BODY(Normal5)
SHOW_MAP_BODY(Focused9)
SHOW_MAP_BODY(Normal_Disable16)
SHOW_MAP_BODY(Focused_Disable20)
SHOW_MAP_BODY(Pressed24)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Y)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
BUTTON_LIST_ITEM(STRID_A028)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Y,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Y,UIMenuWndSetupDateTime_YMD_Y,0,236,9,303,100)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin30)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin30,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text32,0,22,39,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal29)
SHOW_MAP_BODY(Skin30)
SHOW_MAP_BODY(Text32)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal29,590,51,629,142)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar35, 4, 32, 35,79, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up36, 11, 10, 44,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down37, 11, 70, 44,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin34Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin34)
SHOW_MAP_BODY(Skin34Rect)
SHOW_MAP_BODY(Image_Sel_Bar35)
SHOW_MAP_BODY(Image_Up36)
SHOW_MAP_BODY(Image_Down37)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin34,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text39,0,22,39,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused33)
SHOW_MAP_BODY(Skin34)
SHOW_MAP_BODY(Text39)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused33,590,51,629,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin41Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin41)
SHOW_MAP_BODY(Skin41Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin41,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text43,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable40)
SHOW_MAP_BODY(Skin41)
SHOW_MAP_BODY(Text43)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable40,590,51,629,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin45Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin45)
SHOW_MAP_BODY(Skin45Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin45,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text47,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable44)
SHOW_MAP_BODY(Skin45)
SHOW_MAP_BODY(Text47)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable44,590,51,629,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin49Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin49)
SHOW_MAP_BODY(Skin49Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin49,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text51,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed48)
SHOW_MAP_BODY(Skin49)
SHOW_MAP_BODY(Text51)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed48,590,51,629,142)

CREATE_BUTTON_ITEM_DATA(STRID_A152,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_M)
SHOW_MAP_BODY(Normal29)
SHOW_MAP_BODY(Focused33)
SHOW_MAP_BODY(Normal_Disable40)
SHOW_MAP_BODY(Focused_Disable44)
SHOW_MAP_BODY(Pressed48)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_M)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_M)
BUTTON_LIST_ITEM(STRID_A152)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_M,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_M,UIMenuWndSetupDateTime_YMD_M,0,325,9,364,100)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin54)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin54,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text56,0,22,39,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal53)
SHOW_MAP_BODY(Skin54)
SHOW_MAP_BODY(Text56)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal53,651,51,690,142)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar59, 4, 32, 35,79, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up60, 10, 10, 43,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down61, 10, 70, 43,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin58Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin58)
SHOW_MAP_BODY(Skin58Rect)
SHOW_MAP_BODY(Image_Sel_Bar59)
SHOW_MAP_BODY(Image_Up60)
SHOW_MAP_BODY(Image_Down61)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin58,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text63,0,22,39,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused57)
SHOW_MAP_BODY(Skin58)
SHOW_MAP_BODY(Text63)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused57,651,51,690,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin65Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin65)
SHOW_MAP_BODY(Skin65Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin65,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text67,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable64)
SHOW_MAP_BODY(Skin65)
SHOW_MAP_BODY(Text67)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable64,651,51,690,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin69Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin69)
SHOW_MAP_BODY(Skin69Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin69,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text71,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable68)
SHOW_MAP_BODY(Skin69)
SHOW_MAP_BODY(Text71)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable68,651,51,690,142)

SHOW_ITEM_RECT(CMD_Rectangle,Skin73Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin73)
SHOW_MAP_BODY(Skin73Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin73,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text75,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed72)
SHOW_MAP_BODY(Skin73)
SHOW_MAP_BODY(Text75)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed72,651,51,690,142)

CREATE_BUTTON_ITEM_DATA(STRID_A176,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_D)
SHOW_MAP_BODY(Normal53)
SHOW_MAP_BODY(Focused57)
SHOW_MAP_BODY(Normal_Disable64)
SHOW_MAP_BODY(Focused_Disable68)
SHOW_MAP_BODY(Pressed72)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_D)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_D)
BUTTON_LIST_ITEM(STRID_A176)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_D,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_D,UIMenuWndSetupDateTime_YMD_D,0,386,9,425,100)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin78)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin78,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text80,0,22,39,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal77)
SHOW_MAP_BODY(Skin78)
SHOW_MAP_BODY(Text80)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal77,529,151,568,242)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar83, 4, 32, 35,79, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up84, 10, 10, 43,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down85, 10, 70, 43,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin82Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin82)
SHOW_MAP_BODY(Skin82Rect)
SHOW_MAP_BODY(Image_Sel_Bar83)
SHOW_MAP_BODY(Image_Up84)
SHOW_MAP_BODY(Image_Down85)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin82,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text87,0,22,39,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused81)
SHOW_MAP_BODY(Skin82)
SHOW_MAP_BODY(Text87)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused81,529,151,568,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin89Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin89)
SHOW_MAP_BODY(Skin89Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin89,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text91,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable88)
SHOW_MAP_BODY(Skin89)
SHOW_MAP_BODY(Text91)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable88,529,151,568,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin93Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin93)
SHOW_MAP_BODY(Skin93Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin93,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text95,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable92)
SHOW_MAP_BODY(Skin93)
SHOW_MAP_BODY(Text95)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable92,529,151,568,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin97Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin97)
SHOW_MAP_BODY(Skin97Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin97,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text99,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed96)
SHOW_MAP_BODY(Skin97)
SHOW_MAP_BODY(Text99)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed96,529,151,568,242)

CREATE_BUTTON_ITEM_DATA(STRID_A1100,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
SHOW_MAP_BODY(Normal77)
SHOW_MAP_BODY(Focused81)
SHOW_MAP_BODY(Normal_Disable88)
SHOW_MAP_BODY(Focused_Disable92)
SHOW_MAP_BODY(Pressed96)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_HR)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
BUTTON_LIST_ITEM(STRID_A1100)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_HR,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_HR,UIMenuWndSetupDateTime_YMD_HR,0,264,109,303,200)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin102)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin102,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text104,0,22,39,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal101)
SHOW_MAP_BODY(Skin102)
SHOW_MAP_BODY(Text104)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal101,590,151,629,242)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar107, 4, 32, 35,79, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up108, 11, 10, 44,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down109, 11, 70, 44,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin106Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin106)
SHOW_MAP_BODY(Skin106Rect)
SHOW_MAP_BODY(Image_Sel_Bar107)
SHOW_MAP_BODY(Image_Up108)
SHOW_MAP_BODY(Image_Down109)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin106,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text111,0,22,39,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused105)
SHOW_MAP_BODY(Skin106)
SHOW_MAP_BODY(Text111)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused105,590,151,629,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin113Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin113)
SHOW_MAP_BODY(Skin113Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin113,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text115,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable112)
SHOW_MAP_BODY(Skin113)
SHOW_MAP_BODY(Text115)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable112,590,151,629,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin117Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin117)
SHOW_MAP_BODY(Skin117Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin117,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text119,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable116)
SHOW_MAP_BODY(Skin117)
SHOW_MAP_BODY(Text119)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable116,590,151,629,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin121Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin121)
SHOW_MAP_BODY(Skin121Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin121,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text123,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed120)
SHOW_MAP_BODY(Skin121)
SHOW_MAP_BODY(Text123)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed120,590,151,629,242)

CREATE_BUTTON_ITEM_DATA(STRID_A1124,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
SHOW_MAP_BODY(Normal101)
SHOW_MAP_BODY(Focused105)
SHOW_MAP_BODY(Normal_Disable112)
SHOW_MAP_BODY(Focused_Disable116)
SHOW_MAP_BODY(Pressed120)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_MIN)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
BUTTON_LIST_ITEM(STRID_A1124)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_MIN,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_MIN,UIMenuWndSetupDateTime_YMD_MIN,0,325,109,364,200)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin126)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin126,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text128,0,22,39,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal125)
SHOW_MAP_BODY(Skin126)
SHOW_MAP_BODY(Text128)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal125,651,151,690,242)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar131, 4, 32, 35,79, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up132, 10, 10, 43,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down133, 10, 70, 43,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin130Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin130)
SHOW_MAP_BODY(Skin130Rect)
SHOW_MAP_BODY(Image_Sel_Bar131)
SHOW_MAP_BODY(Image_Up132)
SHOW_MAP_BODY(Image_Down133)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin130,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text135,0,22,39,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused129)
SHOW_MAP_BODY(Skin130)
SHOW_MAP_BODY(Text135)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused129,651,151,690,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin137Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin137)
SHOW_MAP_BODY(Skin137Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin137,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text139,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable136)
SHOW_MAP_BODY(Skin137)
SHOW_MAP_BODY(Text139)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable136,651,151,690,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin141Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin141)
SHOW_MAP_BODY(Skin141Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin141,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text143,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable140)
SHOW_MAP_BODY(Skin141)
SHOW_MAP_BODY(Text143)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable140,651,151,690,242)

SHOW_ITEM_RECT(CMD_Rectangle,Skin145Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin145)
SHOW_MAP_BODY(Skin145Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin145,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text147,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed144)
SHOW_MAP_BODY(Skin145)
SHOW_MAP_BODY(Text147)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed144,651,151,690,242)

CREATE_BUTTON_ITEM_DATA(STRID_A1148,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_SEC)
SHOW_MAP_BODY(Normal125)
SHOW_MAP_BODY(Focused129)
SHOW_MAP_BODY(Normal_Disable136)
SHOW_MAP_BODY(Focused_Disable140)
SHOW_MAP_BODY(Pressed144)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_SEC)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_SEC)
BUTTON_LIST_ITEM(STRID_A1148)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_SEC,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_SEC,UIMenuWndSetupDateTime_YMD_SEC,0,386,109,425,200)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin150)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin150,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text152,0,22,39,69,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal149)
SHOW_MAP_BODY(Skin150)
SHOW_MAP_BODY(Text152)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal149,529,251,568,342)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar155, 4, 32, 35,79, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up156, 12, 10, 45,31, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down157, 12, 70, 45,91, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin154Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin154)
SHOW_MAP_BODY(Skin154Rect)
SHOW_MAP_BODY(Image_Sel_Bar155)
SHOW_MAP_BODY(Image_Up156)
SHOW_MAP_BODY(Image_Down157)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin154,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text159,0,22,39,69,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused153)
SHOW_MAP_BODY(Skin154)
SHOW_MAP_BODY(Text159)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused153,529,251,568,342)

SHOW_ITEM_RECT(CMD_Rectangle,Skin161Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin161)
SHOW_MAP_BODY(Skin161Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin161,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text163,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable160)
SHOW_MAP_BODY(Skin161)
SHOW_MAP_BODY(Text163)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable160,529,251,568,342)

SHOW_ITEM_RECT(CMD_Rectangle,Skin165Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin165)
SHOW_MAP_BODY(Skin165Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin165,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text167,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable164)
SHOW_MAP_BODY(Skin165)
SHOW_MAP_BODY(Text167)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable164,529,251,568,342)

SHOW_ITEM_RECT(CMD_Rectangle,Skin169Rect,0,0,39,91,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin169)
SHOW_MAP_BODY(Skin169Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin169,0,0,39,91)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text171,2,13,36,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed168)
SHOW_MAP_BODY(Skin169)
SHOW_MAP_BODY(Text171)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed168,529,251,568,342)

CREATE_BUTTON_ITEM_DATA(STRID_A1172,STRID_A1,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Switch)
SHOW_MAP_BODY(Normal149)
SHOW_MAP_BODY(Focused153)
SHOW_MAP_BODY(Normal_Disable160)
SHOW_MAP_BODY(Focused_Disable164)
SHOW_MAP_BODY(Pressed168)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Switch)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Switch)
BUTTON_LIST_ITEM(STRID_A1172)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Switch,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Switch,UIMenuWndSetupDateTime_YMD_Switch,0,264,209,303,300)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin173)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin173,0,0,665,311)

SHOW_MAP_BEGIN(Skin175)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin175,0,0,20,35)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text177,0,0,20,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal174)
SHOW_MAP_BODY(Skin175)
SHOW_MAP_BODY(Text177)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal174,569,79,589,114)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
SHOW_MAP_BODY(Normal174)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other0,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other0,0,304,37,324,72)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin180)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin180,0,0,20,35)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text182,0,0,20,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal179)
SHOW_MAP_BODY(Skin180)
SHOW_MAP_BODY(Text182)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal179,630,79,650,114)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
SHOW_MAP_BODY(Normal179)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other1,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other1,0,365,37,385,72)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin185)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin185,0,0,20,35)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text187,0,0,20,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal184)
SHOW_MAP_BODY(Skin185)
SHOW_MAP_BODY(Text187)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal184,569,179,589,214)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
SHOW_MAP_BODY(Normal184)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other2,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other2,0,304,137,324,172)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin190)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin190,0,0,20,35)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text192,0,0,20,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal189)
SHOW_MAP_BODY(Skin190)
SHOW_MAP_BODY(Text192)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal189,630,179,650,214)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other3)
SHOW_MAP_BODY(Normal189)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other3)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other3,STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other3,0,365,137,385,172)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin195)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin195,0,0,119,35)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text197,0,0,119,35,STRID_NULL,0,0,0,0,2,1,1,256,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal194)
SHOW_MAP_BODY(Skin195)
SHOW_MAP_BODY(Text197)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal194,569,279,688,314)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other4)
SHOW_MAP_BODY(Normal194)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other4)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other4,STRID_MODE)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other4,0,304,237,423,272)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
SHOW_MAP_BODY(Skin173)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other3)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other4)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndSetupDateTime_Tab_YMD_VALUE,0)

CREATE_TAB_CTRL(UIMenuWndSetupDateTime_Tab_YMD_VALUE,UIMenuWndSetupDateTime_Tab_YMD_VALUE,0,0,0,665,311)
SHOW_MAP_BEGIN(Skin200)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin200,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text202,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal199)
SHOW_MAP_BODY(Skin200)
SHOW_MAP_BODY(Text202)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal199,861,208,900,264)

SHOW_ITEM_IMAGE(CMD_Image,Image_Sel_Bar205, 3, 15, 37,44, ICON_SEL_BAR_DATE,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Up206, 11, 2, 28,15, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image_Down207, 12, 45, 25,56, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin204Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin204)
SHOW_MAP_BODY(Skin204Rect)
SHOW_MAP_BODY(Image_Sel_Bar205)
SHOW_MAP_BODY(Image_Up206)
SHOW_MAP_BODY(Image_Down207)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin204,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text209,2,13,35,42,STRID_NULL,0,0,0,0,14,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused203)
SHOW_MAP_BODY(Skin204)
SHOW_MAP_BODY(Text209)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused203,861,208,900,264)

SHOW_ITEM_RECT(CMD_Rectangle,Skin211Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin211)
SHOW_MAP_BODY(Skin211Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin211,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text213,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable210)
SHOW_MAP_BODY(Skin211)
SHOW_MAP_BODY(Text213)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable210,861,208,900,264)

SHOW_ITEM_RECT(CMD_Rectangle,Skin215Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin215)
SHOW_MAP_BODY(Skin215Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin215,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text217,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable214)
SHOW_MAP_BODY(Skin215)
SHOW_MAP_BODY(Text217)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable214,861,208,900,264)

SHOW_ITEM_RECT(CMD_Rectangle,Skin219Rect,0,0,39,56,0,0,255,255,0,0,0)
SHOW_MAP_BEGIN(Skin219)
SHOW_MAP_BODY(Skin219Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin219,0,0,39,56)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text221,2,13,35,42,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed218)
SHOW_MAP_BODY(Skin219)
SHOW_MAP_BODY(Text221)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed218,861,208,900,264)

CREATE_BUTTON_ITEM_DATA(STRID_5MWXH222,STRID_5MWXH,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_AMPM)
SHOW_MAP_BODY(Normal199)
SHOW_MAP_BODY(Focused203)
SHOW_MAP_BODY(Normal_Disable210)
SHOW_MAP_BODY(Focused_Disable214)
SHOW_MAP_BODY(Pressed218)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_AMPM)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_AMPM)
BUTTON_LIST_ITEM(STRID_5MWXH222)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_AMPM,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_AMPM,UIMenuWndSetupDateTime_YMD_AMPM,0,596,166,635,222)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_Tab)
SHOW_MAP_BODY(Skin2)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Y)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_M)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_D)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_HR)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_MIN)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_SEC)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Switch)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_AMPM)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndSetupDateTime_Tab,0)

CREATE_TAB_CTRL(UIMenuWndSetupDateTime_Tab,UIMenuWndSetupDateTime_Tab,0,265,42,774,445)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime)
DECLARE_CTRL_LIST(UIMenuWndSetupDateTime)
CREATE_CTRL(UIMenuWndSetupDateTime,UIMenuWndSetupDateTime,CTRL_WND,NULL,0 ,0,0,799,479)
#endif
