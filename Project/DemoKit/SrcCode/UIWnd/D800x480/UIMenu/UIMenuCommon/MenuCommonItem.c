//This source code is generated by UI Designer Studio.

#include <stdio.h>
#include <string.h>
#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "MenuCommonItemRes.c"
//#include "UIFlow.h"
#include "../../../D800x480/UIFlow.h"
#include "MenuId.h"

//---------------------MenuCommonItemCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem)
CTRL_LIST_ITEM(MenuCommonItem_BG)
CTRL_LIST_ITEM(MenuCommonItem_TitleBar)
CTRL_LIST_ITEM(MenuCommonItem_TipsBar)
CTRL_LIST_ITEM(MenuCommonItem_Menu)
CTRL_LIST_END

//----------------------MenuCommonItemCtrl Event---------------------------
INT32 MenuCommonItem_OnOpen(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnClose(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnChildClose(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnKeyRight(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnKeyMode(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(MenuCommonItem)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,MenuCommonItem_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,MenuCommonItem_OnClose)
EVENT_ITEM(NVTEVT_CHILD_CLOSE,MenuCommonItem_OnChildClose)
EVENT_ITEM(NVTEVT_KEY_DOWN,MenuCommonItem_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_LEFT,MenuCommonItem_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_RIGHT,MenuCommonItem_OnKeyRight)
EVENT_ITEM(NVTEVT_KEY_MENU,MenuCommonItem_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,MenuCommonItem_OnKeyMode)
//EVENT_ITEM(NVTEVT_KEY_SHUTTER2,MenuCommonItem_OnKeyShutter2)
EVENT_END

static UINT8 g_PageNumBuf[8];

void MenuCommon_CalcPageInfo(VControl *pCtrl)
{
    UINT32  i, uiItem, uiCurrItem, uiTotalItem, uiTotalItemOri;
    UINT32  uiItemPerPage, uiCurrPage, uiTotalPage;

    uiItem = UxMenu_GetData(pCtrl, MNU_CURITM);          // current item number in menu (include disabled items)
    uiItemPerPage = UxMenu_GetData(pCtrl, MNU_PAGEITEM); // items per page
    uiTotalItemOri = UxMenu_GetData(pCtrl, MNU_TOTITM);  // total item number

    // check total item number and current item number (skip disabled items)
    uiCurrItem = 0;
    uiTotalItem = 0;
    for (i = 0; i < uiTotalItemOri; i++)
    {
        if (UxMenu_GetItemData(pCtrl, i, MNUITM_STATUS) == STATUS_ENABLE)
        {
            uiTotalItem++;
            if (i < uiItem)
                uiCurrItem++;
        }
    }

    uiCurrPage = (uiCurrItem / uiItemPerPage) + 1;
    uiTotalPage = ((uiTotalItem % uiItemPerPage) == 0) ? (uiTotalItem / uiItemPerPage) : (uiTotalItem / uiItemPerPage + 1);

    sprintf((char *)g_PageNumBuf, "%ld/%ld", uiCurrPage, uiTotalPage);
    UxStatic_SetData(&MenuCommonItem_PageNumCtrl, STATIC_VALUE, Txt_Pointer(g_PageNumBuf));
    UxCtrl_SetShow(&MenuCommonItem_PageNumCtrl, TRUE);
    UxCtrl_SetDirty(&MenuCommonItem_PageNumCtrl, TRUE);
}

void MenuCommonItem_UpdateContent(TM_MENU* pMenu)
{
    TM_PAGE*    pPage;
    TM_ITEM*    pItem;
    UINT32      i;
    UINT32      uiIcon[2]; // 2 pages per menu

    pPage = &pMenu->pPages[pMenu->SelPage];

    UxMenu_SetData(&MenuCommonItem_MenuCtrl, MNU_TOTITM, pPage->Count);

    if (pMenu->Status == TMS_ON_TAB)
    {
        UxMenu_SetData(&MenuCommonItem_MenuCtrl, MNU_CURITM, 0); // reset current item to 0
    }

    for (i = 0; i < pPage->Count; i++)
    {
        pItem = &pPage->pItems[i];
        UxMenu_SetItemData(&MenuCommonItem_MenuCtrl, i, MNUITM_STRID,  pItem->TextId);
        UxMenu_SetItemData(&MenuCommonItem_MenuCtrl, i, MNUITM_ICONID, pItem->IconId);
    }

    for (i = 0; i < pMenu->Count; i++)
    {
        if ((UINT32)pMenu->SelPage == i)
            uiIcon[i] = (&pMenu->pPages[i])->IconId;
        else
            uiIcon[i] = (&pMenu->pPages[i])->IconIdX;
    }

    if (pMenu->Status == TMS_ON_TAB)
    {
        for (i = 0; i < pPage->Count; i++)
            UxMenu_SetItemData(&MenuCommonItem_MenuCtrl, i, MNUITM_STATUS, STATUS_ENABLE); // enable all items (for page info calculating)
    }

    MenuCommon_CalcPageInfo(&MenuCommonItem_MenuCtrl); // calculate page information for display

    if (pMenu->Status == TMS_ON_TAB)
    {
        for (i = 0; i < pPage->Count; i++)
            UxMenu_SetItemData(&MenuCommonItem_MenuCtrl, i, MNUITM_STATUS, STATUS_DISABLE); // disable all items
    }

    UxStatic_SetData(&MenuCommonItem_TitleIconTab1Ctrl, STATIC_VALUE, uiIcon[0]);
    UxStatic_SetData(&MenuCommonItem_TitleIconTab2Ctrl, STATIC_VALUE, uiIcon[1]);
    UxStatic_SetData(&MenuCommonItem_TitleTextCtrl, STATIC_VALUE, pPage->TextId);
    UxCtrl_SetDirty(&MenuCommonItemCtrl, TRUE);
}

INT32 MenuCommonItem_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    //UINT32      i;
    TM_MENU*    pMenu = TM_GetMenu();

	pMenu->Status = TMS_ON_TAB; // current menu status is TAB
    pMenu->SelPage = 0;         // reset page to 0

    TM_MENU_CALLBACK(pMenu, TMM_ENTER_ITEM, 0);

    MenuCommonItem_UpdateContent(pMenu);

    UxCtrl_SetShow(&MenuCommonItem_TipsIconLDRCtrl, TRUE);
    UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDRCtrl, FALSE);
    UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDOKCtrl, FALSE);

    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_OnChildClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    TM_MENU*    pMenu = TM_GetMenu();
    UINT32      uiItem,uiOption;

    pMenu->Status = TMS_ON_ITEM;
    MenuCommonItem_UpdateContent(pMenu);

    UxCtrl_SetShow(&MenuCommonItem_TipsIconLDRCtrl, FALSE);
    UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDRCtrl, TRUE);
    UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDOKCtrl, FALSE);

    Ux_DefaultEvent(pCtrl,NVTEVT_CHILD_CLOSE,paramNum,paramArray);
    if (paramNum>=2)
    {
        uiItem = paramArray[0];
        uiOption = paramArray[1];
        if (uiItem == IDM_TV_MODE)
        {
            Ux_CloseWindow(&MenuCommonItemCtrl, 0);
        }
    }
    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32      i;
    TM_MENU*    pMenu = TM_GetMenu();
    TM_PAGE*    pPage;

    if (pMenu->Status == TMS_ON_TAB)
    {
        pMenu->Status = TMS_ON_ITEM;
        pPage = &pMenu->pPages[pMenu->SelPage];

        for (i = 0; i < pPage->Count; i++)
            UxMenu_SetItemData(&MenuCommonItem_MenuCtrl, i, MNUITM_STATUS, STATUS_ENABLE); // enable all items (for page info calculating)

        MenuCommon_CalcPageInfo(&MenuCommonItem_MenuCtrl); // calculate page information for display

        UxCtrl_SetShow(&MenuCommonItem_TipsIconLDRCtrl, FALSE);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDRCtrl, TRUE);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDOKCtrl, FALSE);

        return NVTEVT_CONSUME;
    }

    return NVTEVT_PASS;
}
INT32 MenuCommonItem_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    TM_MENU*    pMenu = TM_GetMenu();

    if (pMenu->Status == TMS_ON_TAB)
    {
        TM_ShiftTab(pMenu, -1);
        MenuCommonItem_UpdateContent(pMenu);
        return NVTEVT_CONSUME;
    }

    return NVTEVT_PASS;
}
INT32 MenuCommonItem_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    TM_MENU*    pMenu = TM_GetMenu();

    if (pMenu->Status == TMS_ON_TAB)
    {
        TM_ShiftTab(pMenu, +1);
        MenuCommonItem_UpdateContent(pMenu);
        return NVTEVT_CONSUME;
    }

    return NVTEVT_PASS;
}
INT32 MenuCommonItem_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
 TM_PAGE*    pPage;
 TM_MENU*    pMenu = TM_GetMenu();

    pPage = &pMenu->pPages[pMenu->SelPage];

    if (pPage->TextId == STRID_SETUP)
    {
        Ux_CloseWindow(pCtrl,0);
    }
    else 
	{
        /*if (pMenu->Status == TMS_ON_TAB)
        {
            TM_ShiftTab(pMenu, +1);
            MenuCommonItem_UpdateContent(pMenu);
        } 
		else 
		{
            Ux_CloseWindow(pCtrl,0);
        }*/

		TM_ShiftTab(pMenu, +1);
        MenuCommonItem_UpdateContent(pMenu);
    }
	
    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_EXE_CHANGEDSCMODE,1,DSCMODE_CHGTO_NEXT);
    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_FORCETO_LIVEVIEW_MODE,0);
    return NVTEVT_CONSUME;
}
//---------------------MenuCommonItem_BGCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem_BG)
CTRL_LIST_END

//----------------------MenuCommonItem_BGCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_BG)
EVENT_END

//---------------------MenuCommonItem_TitleBarCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem_TitleBar)
CTRL_LIST_ITEM(MenuCommonItem_TitleIconTab1)
CTRL_LIST_ITEM(MenuCommonItem_TitleIconTab2)
CTRL_LIST_ITEM(MenuCommonItem_TitleText)
CTRL_LIST_END

//----------------------MenuCommonItem_TitleBarCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TitleBar)
EVENT_END

//----------------------MenuCommonItem_TitleIconTab1Ctrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TitleIconTab1)
EVENT_END

//----------------------MenuCommonItem_TitleIconTab2Ctrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TitleIconTab2)
EVENT_END

//----------------------MenuCommonItem_TitleTextCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TitleText)
EVENT_END

//---------------------MenuCommonItem_TipsBarCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem_TipsBar)
CTRL_LIST_ITEM(MenuCommonItem_TipsIconReturn)
CTRL_LIST_ITEM(MenuCommonItem_TipsIconLDR)
CTRL_LIST_ITEM(MenuCommonItem_TipsIconLUDR)
CTRL_LIST_ITEM(MenuCommonItem_TipsIconLUDOK)
CTRL_LIST_ITEM(MenuCommonItem_PageNum)
CTRL_LIST_END

//----------------------MenuCommonItem_TipsBarCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TipsBar)
EVENT_END

//----------------------MenuCommonItem_TipsIconReturnCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TipsIconReturn)
EVENT_END

//---------------------MenuCommonItem_TipsIconLDRCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem_TipsIconLDR)
CTRL_LIST_END

//----------------------MenuCommonItem_TipsIconLDRCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TipsIconLDR)
EVENT_END

//---------------------MenuCommonItem_TipsIconLUDRCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem_TipsIconLUDR)
CTRL_LIST_END

//----------------------MenuCommonItem_TipsIconLUDRCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TipsIconLUDR)
EVENT_END

//---------------------MenuCommonItem_TipsIconLUDOKCtrl Control List---------------------------
CTRL_LIST_BEGIN(MenuCommonItem_TipsIconLUDOK)
CTRL_LIST_END

//----------------------MenuCommonItem_TipsIconLUDOKCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_TipsIconLUDOK)
EVENT_END

//----------------------MenuCommonItem_PageNumCtrl Event---------------------------
EVENT_BEGIN(MenuCommonItem_PageNum)
EVENT_END

//----------------------MenuCommonItem_MenuCtrl Event---------------------------
INT32 MenuCommonItem_Menu_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_Menu_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_Menu_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_Menu_OnKeyRight(VControl *, UINT32, UINT32 *);
INT32 MenuCommonItem_Menu_OnKeyEnter(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(MenuCommonItem_Menu)
EVENT_ITEM(NVTEVT_KEY_UP,MenuCommonItem_Menu_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,MenuCommonItem_Menu_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_LEFT,MenuCommonItem_Menu_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_RIGHT,MenuCommonItem_Menu_OnKeyRight)
//EVENT_ITEM(NVTEVT_KEY_ENTER,MenuCommonItem_Menu_OnKeyEnter)
#if((_MODEL_DSC_ == _MODEL_CARDV_B50_)||(_MODEL_DSC_== _MODEL_DUAL_NAZHIDA_))
EVENT_ITEM(NVTEVT_KEY_CUSTOM1,MenuCommonItem_Menu_OnKeyEnter)
#else
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,MenuCommonItem_Menu_OnKeyEnter)
#endif
EVENT_END

INT32 MenuCommonItem_Menu_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    TM_MENU*    pMenu = TM_GetMenu();

    if (pMenu->Status == TMS_ON_ITEM)
    {
        Ux_SendEvent(pCtrl, NVTEVT_PREVIOUS_ITEM, 0);       // go to previous item firstly
        MenuCommon_CalcPageInfo(&MenuCommonItem_MenuCtrl);  // calculate page information for display
    }

    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_Menu_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    TM_MENU*    pMenu = TM_GetMenu();

    if (pMenu->Status == TMS_ON_ITEM)
    {
        Ux_SendEvent(pCtrl, NVTEVT_NEXT_ITEM, 0);           // go to next item firstly
        MenuCommon_CalcPageInfo(&MenuCommonItem_MenuCtrl);  // calculate page information for display
    }

    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_Menu_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32      i;
    TM_MENU*    pMenu = TM_GetMenu();
    TM_PAGE*    pPage;

    if (pMenu->Status == TMS_ON_ITEM)
    {
        pMenu->Status = TMS_ON_TAB;
        pPage = &pMenu->pPages[pMenu->SelPage];

        UxMenu_SetData(pCtrl, MNU_CURITM, 0);               // return to 1st item
        MenuCommon_CalcPageInfo(&MenuCommonItem_MenuCtrl);  // calculate page information for display

        for (i = 0; i < pPage->Count; i++)
        {
            UxMenu_SetItemData(pCtrl, i, MNUITM_STATUS, (STATUS_DISABLE | STATUS_NORMAL_BIT)); // disable all items
        }

        UxCtrl_SetShow(&MenuCommonItem_TipsIconLDRCtrl, TRUE);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDRCtrl, FALSE);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDOKCtrl, FALSE);
    }

    return NVTEVT_CONSUME;
}
INT32 MenuCommonItem_Menu_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    TM_MENU*    pMenu = TM_GetMenu();
    TM_PAGE*    pPage;
    TM_ITEM*    pItem;

    if (pMenu->Status == TMS_ON_ITEM)
    {
        pPage = &pMenu->pPages[pMenu->SelPage];
        pPage->SelItem = UxMenu_GetData(&MenuCommonItem_MenuCtrl, MNU_CURITM); // update selected item of tab menu
        pItem = &pPage->pItems[pPage->SelItem];

        if (pItem->Count != 0 && pItem->SysFlag != 0)   // standard process
        {
            if (TM_MENU_CALLBACK(pMenu, TMM_ENTER_OPTION, MAKE_LONG(pItem->ItemId, 0)) == TMF_PASS_MESSAGE)
            {
                return NVTEVT_CONSUME;
            }
        }

        UxStatic_SetData(&MenuCommonItem_TitleTextCtrl, STATIC_VALUE, pItem->TextId);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLDRCtrl, FALSE);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDRCtrl, FALSE);
        UxCtrl_SetShow(&MenuCommonItem_TipsIconLUDOKCtrl, TRUE);
        UxCtrl_SetShow(&MenuCommonItem_PageNumCtrl, FALSE);
        Ux_Redraw();

        if (pItem->Count != 0 && pItem->SysFlag != 0)   // standard process
        {
            pMenu->Status = TMS_ON_OPTION;
            Ux_OpenWindow(&MenuCommonOptionCtrl, 0);
        }
        else if (pItem->pOptions != 0)                  // custom process
        {
            pMenu->Status = TMS_ON_CUSTOM;
            TM_ITEM_CALLBACK(pItem, 0, 0);              // execute custom menu flow
        }
    }

    return NVTEVT_CONSUME;
}

INT32 MenuCommonItem_Menu_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    return MenuCommonItem_Menu_OnKeyRight(pCtrl, paramNum, paramArray);
}

