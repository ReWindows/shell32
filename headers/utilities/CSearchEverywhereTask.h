#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CSearchEverywhereTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCanonicalName@CSearchEverywhereTask@@UEAAJPEAU_GUID@@@Z
    virtual long v_GetCanonicalName(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCmdFlags@CSearchEverywhereTask@@UEAAJPEAH@Z
    virtual long v_GetCmdFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetIconResID@CSearchEverywhereTask@@UEAAJPEAUIShellItemArray@@PEAIPEAW4SHSTOCKICONID@@@Z
    virtual long v_GetIconResID(IShellItemArray *, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetState@CSearchEverywhereTask@@UEAAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    virtual long v_GetState(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTitleResIDs@CSearchEverywhereTask@@UEAAJPEAUIShellItemArray@@PEAI111@Z
    virtual long v_GetTitleResIDs(IShellItemArray *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTooltipResID@CSearchEverywhereTask@@UEAAJPEAUIShellItemArray@@PEAI@Z
    virtual long v_GetTooltipResID(IShellItemArray *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InvokeCmd@CSearchEverywhereTask@@UEAAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long v_InvokeCmd(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ResourceDllName@CSearchEverywhereTask@@UEAAPEBGW4UICORDNTYPE@CUICommandObject@@@Z
    virtual unsigned short const * v_ResourceDllName(int);
};
