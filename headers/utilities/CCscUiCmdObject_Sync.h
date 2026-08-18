#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CCscUiCmdObject_Sync {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCanonicalName@CCscUiCmdObject_Sync@@MEAAJPEAU_GUID@@@Z
    virtual long v_GetCanonicalName(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCmdFlags@CCscUiCmdObject_Sync@@MEAAJPEAH@Z
    virtual long v_GetCmdFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetIconResID@CCscUiCmdObject_Sync@@MEAAJPEAUIShellItemArray@@PEAIPEAW4SHSTOCKICONID@@@Z
    virtual long v_GetIconResID(IShellItemArray *, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetState@CCscUiCmdObject_Sync@@MEAAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    virtual long v_GetState(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTitleResIDs@CCscUiCmdObject_Sync@@MEAAJPEAUIShellItemArray@@PEAI111@Z
    virtual long v_GetTitleResIDs(IShellItemArray *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTooltipResID@CCscUiCmdObject_Sync@@MEAAJPEAUIShellItemArray@@PEAI@Z
    virtual long v_GetTooltipResID(IShellItemArray *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InvokeCmd@CCscUiCmdObject_Sync@@MEAAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long v_InvokeCmd(IUnknown *, IShellItemArray *, IBindCtx *);
};
