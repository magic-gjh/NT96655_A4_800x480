/**
    Copyright   Novatek Microelectronics Corp. 2010. All rights reserved.

    @file       IrRxParser.c
    @ingroup    mIPRJAPKeyIO

    @brief      Parse the IrRx received data contents into sensible keys/commands
                The parsing mechanism may differ from each IR remote control protocol

    @note       Nothing.

    @version    V1.00.000
    @author     JustinLee
    @date       2010/03/31
*/

/** \addtogroup mIPRJAPKeyIO */
//@{

#include "Debug.h"
#include "IrRxParser.h"
#include "KeyDef.h"
#include <math.h>


// ----------------------------------------------------------------------------
// Global Variables
// ----------------------------------------------------------------------------
// NEC01 IR code table
IR_CODE_TABLE IrCodeTb_NEC01 =
{
    IR_CODE_CUSTOM_NEC01,
    {
        { NEC01_CMD_UP,               FLGKEY_UP,                "UP"            },
        { NEC01_CMD_DOWN,             FLGKEY_DOWN,              "DOWN"          },
        { NEC01_CMD_LEFT,             FLGKEY_LEFT,              "LEFT"          },
        { NEC01_CMD_RIGHT,            FLGKEY_RIGHT,             "RIGHT"         },
        { NEC01_CMD_ENTER,            FLGKEY_ENTER,             "ENTER"         },
        { NEC01_CMD_ZOOMIN,           FLGKEY_ZOOMIN,            "ZOOMIN"        },
        { NEC01_CMD_ZOOMOUT,          FLGKEY_ZOOMOUT,           "ZOOMOUT"       },
        { NEC01_CMD_MENU,             FLGKEY_MENU,              "MENU"          },
        { NEC01_CMD_MODE,             FLGKEY_MODE,              "MODE"          },
        { NEC01_CMD_PLAYBACK,         FLGKEY_PLAYBACK,          "PLAYBACK"      },
        { 0, 0, 0 }
    }
};

// NEC02 IR code table
IR_CODE_TABLE IrCodeTb_NEC02 =
{
    IR_CODE_CUSTOM_NEC02,
    {
        { NEC02_CMD_UP,               FLGKEY_UP,                "UP"            },
        { NEC02_CMD_DOWN,             FLGKEY_DOWN,              "DOWN"          },
        { NEC02_CMD_LEFT,             FLGKEY_LEFT,              "LEFT"          },
        { NEC02_CMD_RIGHT,            FLGKEY_RIGHT,             "RIGHT"         },
        { NEC02_CMD_ENTER,            FLGKEY_ENTER,             "ENTER"         },
        { NEC02_CMD_ZOOMIN,           FLGKEY_ZOOMIN,            "ZOOMIN"        },
        { NEC02_CMD_ZOOMOUT,          FLGKEY_ZOOMOUT,           "ZOOMOUT"       },
        { NEC02_CMD_MENU,             FLGKEY_MENU,              "MENU"          },
        { NEC02_CMD_MODE,             FLGKEY_MODE,              "MODE"          },
        { NEC02_CMD_PLAYBACK,         FLGKEY_PLAYBACK,          "PLAYBACK"      },
        { 0, 0, 0 }
    }
};


// IR code table initialization
PIR_CODE_TABLE g_pIrCodeTb = (PIR_CODE_TABLE)&IrCodeTb_NEC01;

static UINT32 IrRx_ValidatePatterns(UINT32 uiCustom, UINT32 uiDataContent);



/**
  Parse the IrRx received data contents to map it to a sensible key.

  Also verify the data content validity.

  @param pIrCodeTable : Pointer of the parsing reference table
         uiDataContent: Data contents in one frame (Address/Custom Code and Command/Data Code)
  @return mapped key value
*/
UINT32 IrRx_ParseKey(PIR_CODE_TABLE pIrCodeTable, UINT32 uiDataContent)
{
    UINT32 uiGotCmd;
    UINT8 i = 0;

    if(!pIrCodeTable)
    {
        debug_err(("IrRx: No reference table for parsing activity\r\n"));
        return IR_PARSE_KEY_ERR;
    }

    // Check data contents validity and get the 8bits Command/Data Code
    uiGotCmd = IrRx_ValidatePatterns(pIrCodeTable->uiCustomCode, uiDataContent);
    if(uiGotCmd == IR_KEY_CODE_INVALID)
    {
        return IR_PARSE_KEY_ERR;
    }
    else
    {
        return uiGotCmd;
    }

#if 0
    // Mapping the Command/Data Code to a sensible key
    while( (pIrCodeTable->CmdCodeSet[i].uiMappedKey != 0) && (i < MAX_CMD_ENTRY_NUM) )
    {
        if(uiGotCmd == pIrCodeTable->CmdCodeSet[i].uiCmdCode)
        {
            debug_ind(("IrRx: Parse key: %s\r\n", pIrCodeTable->CmdCodeSet[i].CmdString));
            return pIrCodeTable->CmdCodeSet[i].uiMappedKey;
        }
        i++;
    }

    return IR_PARSE_KEY_ERR;
#endif
}

/**
  Validate data contents for reliability.

  Symbols:
           IC: Invert of Command/Data Code
           CC: Command/Data Code
           IA: Invert of Address/Custom Code
           AC: Address/Custom Code

  @param uiCustom: Desired custom code used to do the validatation
         uiDataContent: Data contents in one frame (Address/Custom Code and Command/Data Code)
  @return 0: Unreliable; Others: Reliable Command/Data Code in one data frame
*/
static UINT32 IrRx_ValidatePatterns(UINT32 uiCustom, UINT32 uiDataContent)
{
    UINT8 IC, CC, IA, AC, temp1, temp2;
    UINT32 uiDataTansform = 0;
    UINT32 uiX=0, uiY=0, i, uiPower;
    double x=0.0, y=2.0, z = 7.0;

    //debug_msg("^MuiCustom = 0x%x, uiDataContent = 0x%x\r\n", uiCustom, uiDataContent);
    IC = (UINT8)(uiDataContent & 0xFF);
    CC = (UINT8)((uiDataContent >> 8) & 0xFF);
    IA = (UINT8)((uiDataContent >> 16) & 0xFF);
    AC = (UINT8)((uiDataContent >> 24) & 0xFF);
    temp1 = (~IC);
    temp2 = (~IA);

    //if(temp1 != CC || temp2 != AC)
    /*if(temp1 != CC)// || IA+AC!=0x9F)
    {
        debug_err(("IrRx: Invalid patterns, CODE: 0x%08X\r\n", uiDataContent));
        return IR_KEY_CODE_INVALID;
    }*/

#if 0 //Don't need this, because IA is x-coordinate and AC is y-coordinate.
    if(AC != (UINT8)uiCustom)
    {
        debug_ind(("IrRx: Unknown custom, CODE: 0x%08X\r\n", uiDataContent));
        //debug_err(("IrRx: AC: 0x%02X, uiCustom: 0x%02X\r\n", AC, (UINT8)uiCustom));
        return IR_KEY_CODE_INVALID;
    }
#endif

#if 0
    temp1 = IA; //x-coordinate
    temp2 = AC; //y-coordinate
    for (i=0, uiPower=7; i<8; i++, uiPower--)
    {
        if ((temp1>>i) & 0x1)
        {
            uiX += (UINT32)pow(2, uiPower);
        }

        if ((temp2>>i) & 0x1)
        {
            uiY += (UINT32)pow(2, uiPower);
        }
    }

    uiDataTansform = ((uiDataContent << 16) & 0xFFFF0000) | (uiX<<8) | uiY;

    debug_msg("^G uiDataTansform = 0x%x\r\n", uiDataTansform);
#endif

    return uiDataContent;
}


//@}
