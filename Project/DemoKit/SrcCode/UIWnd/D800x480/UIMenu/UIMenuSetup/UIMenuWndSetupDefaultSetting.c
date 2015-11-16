//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndSetupDefaultSettingRes.c"
#include "UIMenuWndSetupDefaultSetting.h"
#include "MenuCommonItem.h"
//#include "UISystemStatusSettings.h"
//#include "UIFlow.h"
#include "../../../D800x480/UIFlow.h"

#include "debug.h"

//---------------------UIMenuWndSetupDefaultSettingCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndSetupDefaultSetting)
CTRL_LIST_ITEM(UIMenuWndSetupDefaultSetting_List_Text)
CTRL_LIST_ITEM(UIMenuWndSetupDefaultSetting_Static_Text)
CTRL_LIST_END

//----------------------UIMenuWndSetupDefaultSettingCtrl Event---------------------------
INT32 UIMenuWndSetupDefaultSetting_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_OnKeyMode(VControl *, UINT32, UINT32 *);
//INT32 UIMenuWndSetupDefaultSetting_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupDefaultSetting)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndSetupDefaultSetting_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndSetupDefaultSetting_OnClose)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndSetupDefaultSetting_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_MENU,UIMenuWndSetupDefaultSetting_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,UIMenuWndSetupDefaultSetting_OnKeyMode)
//EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndSetupDefaultSetting_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndSetupDefaultSetting_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(&UIMenuWndSetupDefaultSettingCtrl, 0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(&MenuCommonItemCtrl,0); // close whole tab menu
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_EXE_CHANGEDSCMODE,1,DSCMODE_CHGTO_NEXT);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_FORCETO_LIVEVIEW_MODE,0);
    return NVTEVT_CONSUME;
}
//----------------------UIMenuWndSetupDefaultSetting_List_TextCtrl Event---------------------------
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupDefaultSetting_List_Text)
EVENT_ITEM(NVTEVT_KEY_UP,UIMenuWndSetupDefaultSetting_List_Text_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIMenuWndSetupDefaultSetting_List_Text_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndSetupDefaultSetting_List_Text_OnKeyEnter)
#if((_MODEL_DSC_ == _MODEL_CARDV_B50_)||(_MODEL_DSC_== _MODEL_DUAL_NAZHIDA_))
EVENT_ITEM(NVTEVT_KEY_CUSTOM1,UIMenuWndSetupDefaultSetting_List_Text_OnKeyShutter2)
#else
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndSetupDefaultSetting_List_Text_OnKeyShutter2)
#endif
EVENT_END

INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    INT32 ui32CurrListItem;

    ui32CurrListItem = UxList_GetData(pCtrl, LST_CURITM);
    switch (ui32CurrListItem)
    {
    case 0:  //cancel
        break;
    case 1:  //OK
        debug_err(("Reset default setting\n\r"));
        Ux_SendEvent(&UISetupObjCtrl,NVTEVT_EXE_SYSRESET, 0);
        break;
    default:
        debug_err(("No any is selected for default setting\n\r"));
        break;
    }
    Ux_CloseWindow(&UIMenuWndSetupDefaultSettingCtrl, 0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDefaultSetting_List_Text_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    // the same behavior as ENTER key!
    return UIMenuWndSetupDefaultSetting_List_Text_OnKeyEnter(pCtrl, paramNum, paramArray);
}
//----------------------UIMenuWndSetupDefaultSetting_Static_TextCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDefaultSetting_Static_Text)
EVENT_END

