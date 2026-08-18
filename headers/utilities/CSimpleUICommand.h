#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CSimpleUICommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleUICommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CSimpleUICommand@@UEAAJPEAPEAUIEnumUICommand@@@Z
    virtual long EnumSubCommands(IEnumUICommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CSimpleUICommand@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSimpleUICommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleUICommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleUICommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanonicalName@CSimpleUICommand@@UEAAJPEAU_GUID@@@Z
    virtual long get_CanonicalName(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icon@CSimpleUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Icon(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CSimpleUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Name(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CSimpleUICommand@@UEAAJPEAUIShellItemArray@@HPEAH@Z
    virtual long get_State(IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tooltip@CSimpleUICommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Tooltip(IShellItemArray *, unsigned short * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpleUICommand@@IEAA@PEAUIUnknown@@PEAVCSimpleTaskItem@@HPEAUIEnumUICommand@@@Z
    CSimpleUICommand(IUnknown *, CSimpleTaskItem *, int, IEnumUICommand *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleUICommand@@MEAA@XZ
    virtual ~CSimpleUICommand();
};
