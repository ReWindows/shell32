#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 36 member(s).
class CUICommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUICommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CUICommand@@UEAAJPEAPEAUIEnumUICommand@@@Z
    virtual long EnumSubCommands(IEnumUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CUICommand@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonicalName@CUICommand@@UEAAJPEAU_GUID@@@Z
    virtual long GetCanonicalName(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CUICommand@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CUICommand@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetIcon(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CUICommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@CUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetToolTip(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CUICommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUICommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUICommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanonicalName@CUICommand@@UEAAJPEAU_GUID@@@Z
    virtual long get_CanonicalName(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icon@CUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Icon(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Name(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CUICommand@@UEAAJPEAUIShellItemArray@@HPEAH@Z
    virtual long get_State(IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tooltip@CUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Tooltip(IShellItemArray *, unsigned short * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUICommand@@IEAA@PEAUIUnknown@@PEBUtagWVTASKITEM@@PEAUIEnumUICommand@@@Z
    CUICommand(IUnknown *, tagWVTASKITEM const *, IEnumUICommand *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUICommand@@MEAA@XZ
    virtual ~CUICommand();
};
