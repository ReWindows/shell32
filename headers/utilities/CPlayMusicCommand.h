#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 40 member(s).
class CPlayMusicCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPlayMusicCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?EnumSubCommands@CPlayMusicCommand@@UEAAJPEAPEAUIEnumUICommand@@@Z
    virtual long EnumSubCommands(IEnumUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CPlayMusicCommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CPlayMusicCommand@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CPlayMusicCommand@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CPlayMusicCommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIcon@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyAndName@CPlayMusicCommand@@UEAAJPEAPEAUHKEY__@@PEAPEAG@Z
    virtual long GetKeyAndName(HKEY__* *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CPlayMusicCommand@@UEAAJPEAW4CMDPOS@@PEAU_GUID@@@Z
    virtual long GetPosition(int *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPlayMusicCommand@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeFromContextMenu@CPlayMusicCommand@@UEAAJPEBU_CMINVOKECOMMANDINFOEX@@PEAUIShellItemArray@@@Z
    virtual long InvokeFromContextMenu(_CMINVOKECOMMANDINFOEX const *, IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPlayMusicCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPlayMusicCommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInternalExtensionClasses@CPlayMusicCommand@@UEAAJPEBU_GUID@@K@Z
    virtual long SetInternalExtensionClasses(_GUID const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyAndName@CPlayMusicCommand@@UEAAJPEAUHKEY__@@PEBG@Z
    virtual long SetKeyAndName(HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanonicalName@CPlayMusicCommand@@UEAAJPEAU_GUID@@@Z
    virtual long get_CanonicalName(_GUID *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_Icon@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Icon(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Name(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@HPEAH@Z
    virtual long get_State(IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tooltip@CPlayMusicCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Tooltip(IShellItemArray *, unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePlayMusicMode@CPlayMusicCommand@@AEAAXPEAUIShellItemArray@@@Z
    void _EnsurePlayMusicMode(IShellItemArray *);
};
