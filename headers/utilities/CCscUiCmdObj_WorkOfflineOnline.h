#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 29 member(s).
class CCscUiCmdObj_WorkOfflineOnline {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCscUiCmdObj_WorkOfflineOnline@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyAndName@CCscUiCmdObj_WorkOfflineOnline@@UEAAJPEAPEAUHKEY__@@PEAPEAG@Z
    virtual long GetKeyAndName(HKEY__* *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPosition@CCscUiCmdObj_WorkOfflineOnline@@UEAAJPEAW4CMDPOS@@PEAU_GUID@@@Z
    virtual long GetPosition(int *, _GUID *);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeFromContextMenu@CCscUiCmdObj_WorkOfflineOnline@@UEAAJPEBU_CMINVOKECOMMANDINFOEX@@PEAUIShellItemArray@@@Z
    virtual long InvokeFromContextMenu(_CMINVOKECOMMANDINFOEX const *, IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCscUiCmdObj_WorkOfflineOnline@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCscUiCmdObj_WorkOfflineOnline@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInternalExtensionClasses@CCscUiCmdObj_WorkOfflineOnline@@UEAAJPEBU_GUID@@K@Z
    virtual long SetInternalExtensionClasses(_GUID const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyAndName@CCscUiCmdObj_WorkOfflineOnline@@UEAAJPEAUHKEY__@@PEBG@Z
    virtual long SetKeyAndName(HKEY__*, unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCanonicalName@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAU_GUID@@@Z
    virtual long v_GetCanonicalName(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCmdFlags@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAH@Z
    virtual long v_GetCmdFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetIconResID@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAUIShellItemArray@@PEAIPEAW4SHSTOCKICONID@@@Z
    virtual long v_GetIconResID(IShellItemArray *, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetState@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    virtual long v_GetState(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTitleResIDs@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAUIShellItemArray@@PEAI111@Z
    virtual long v_GetTitleResIDs(IShellItemArray *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetTooltipResID@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAUIShellItemArray@@PEAI@Z
    virtual long v_GetTooltipResID(IShellItemArray *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InvokeCmd@CCscUiCmdObj_WorkOfflineOnline@@MEAAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long v_InvokeCmd(IUnknown *, IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStateInfo@CCscUiCmdObj_WorkOfflineOnline@@AEAAJPEAUIShellItemArray@@@Z
    long _EnsureStateInfo(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOnlineOfflineState@CCscUiCmdObj_WorkOfflineOnline@@AEAAJPEAUIUnknown@@@Z
    long _GetOnlineOfflineState(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOnlineOfflineStateOfMultiLocations@CCscUiCmdObj_WorkOfflineOnline@@AEAAJPEAUIShellItemArray@@K@Z
    long _GetOnlineOfflineStateOfMultiLocations(IShellItemArray *, unsigned long);
};
