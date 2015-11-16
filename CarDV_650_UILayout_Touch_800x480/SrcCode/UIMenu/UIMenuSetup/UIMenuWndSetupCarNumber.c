//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndSetupCarNumberRes.c"
#include "UIMenuWndSetupCarNumber.h"
#include "PrjCfg.h"

//---------------------UIMenuWndSetupCarNumberCtrl Debug Definition -----------------------------
#define _UIMENUWNDSETUPCARNUMBER_ERROR_MSG        1
#define _UIMENUWNDSETUPCARNUMBER_TRACE_MSG        0

#if (_UIMENUWNDSETUPCARNUMBER_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndSetupCarNumberErrMsg(...)            debug_msg ("^R UIMenuWndSetupCarNumber: "__VA_ARGS__)
#else
#define UIMenuWndSetupCarNumberErrMsg(...)
#endif

#if (_UIMENUWNDSETUPCARNUMBER_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndSetupCarNumberTraceMsg(...)          debug_msg ("^B UIMenuWndSetupCarNumber: "__VA_ARGS__)
#else
#define UIMenuWndSetupCarNumberTraceMsg(...)
#endif

//---------------------UIMenuWndSetupCarNumberCtrl Global Variables -----------------------------

//---------------------UIMenuWndSetupCarNumberCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndSetupCarNumberCtrl Public API  ----------------------------------

//---------------------UIMenuWndSetupCarNumberCtrl Private API  ---------------------------------
//---------------------UIMenuWndSetupCarNumberCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndSetupCarNumber)
CTRL_LIST_ITEM(UIMenuWndSetupCarNumber_Tab)
CTRL_LIST_END

//----------------------UIMenuWndSetupCarNumberCtrl Event---------------------------
INT32 UIMenuWndSetupCarNumber_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupCarNumber_OnClose(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupCarNumber)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndSetupCarNumber_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndSetupCarNumber_OnClose)
EVENT_END

INT32 UIMenuWndSetupCarNumber_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupCarNumber_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
//----------------------UIMenuWndSetupCarNumber_TabCtrl Event---------------------------
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyRight(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupCarNumber_Tab)
EVENT_ITEM(NVTEVT_KEY_UP,UIMenuWndSetupCarNumber_Tab_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIMenuWndSetupCarNumber_Tab_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndSetupCarNumber_Tab_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_RIGHT,UIMenuWndSetupCarNumber_Tab_OnKeyRight)
EVENT_END

INT32 UIMenuWndSetupCarNumber_Tab_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_ITEM,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupCarNumber_Tab_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    return NVTEVT_CONSUME;
}
//----------------------UIMenuWndSetupCarNumber_Button1Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button1)
EVENT_END

//----------------------UIMenuWndSetupCarNumber_Button2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button2)
EVENT_END

//----------------------UIMenuWndSetupCarNumber_Button3Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button3)
EVENT_END

//----------------------UIMenuWndSetupCarNumber_Button4Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button4)
EVENT_END

//----------------------UIMenuWndSetupCarNumber_Button5Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button5)
EVENT_END

//----------------------UIMenuWndSetupCarNumber_Button6Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button6)
EVENT_END

//----------------------UIMenuWndSetupCarNumber_Button7Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupCarNumber_Button7)
EVENT_END

