#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CUICommandObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUICommandObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUICommandObject@@QEAA@XZ
    CUICommandObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CUICommandObject@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CUICommandObject@@UEAAJPEAPEAUIEnumUICommand@@@Z
    virtual long EnumSubCommands(IEnumUICommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CUICommandObject@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CUICommandObject@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CUICommandObject@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CUICommandObject@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUICommandObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUICommandObject@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanonicalName@CUICommandObject@@UEAAJPEAU_GUID@@@Z
    virtual long get_CanonicalName(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icon@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Icon(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Name(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CUICommandObject@@UEAAJPEAUIShellItemArray@@HPEAH@Z
    virtual long get_State(IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tooltip@CUICommandObject@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Tooltip(IShellItemArray *, unsigned short * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetState@CUICommandObject@@MEAAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    virtual long v_GetState(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSubCommands@CUICommandObject@@MEAAJPEAPEAUIEnumUICommand@@@Z
    virtual long v_GetSubCommands(IEnumUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ResourceDllName@CUICommandObject@@MEAAPEBGW4UICORDNTYPE@1@@Z
    virtual unsigned short const * v_ResourceDllName(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectionState@CUICommandObject@@AEAA?AW4SELECTED_STATE@@PEAUIShellItemArray@@@Z
    int _GetSelectionState(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetString@CUICommandObject@@AEAAJPEBGKPEAPEAGKHW4SHSTOCKICONID@@@Z
    long _GetString(unsigned short const *, unsigned long, unsigned short * *, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTitleResIDs@CUICommandObject@@AEAAJPEAUIShellItemArray@@@Z
    long _GetTitleResIDs(IShellItemArray *);
};
