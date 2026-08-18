#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CEnumNewItemSubCommands {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumNewItemSubCommands@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumNewItemSubCommands@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumNewItemSubCommands@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumNewItemSubCommands@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumNewItemSubCommands@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumNewItemSubCommands@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumNewItemSubCommands@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CEnumNewItemSubCommands@@SAJPEBU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(_ITEMIDLIST_ABSOLUTE const *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumNewItemSubCommands@@UEAA@XZ
    virtual ~CEnumNewItemSubCommands();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndInitializeNewMenu@CEnumNewItemSubCommands@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _CreateAndInitializeNewMenu(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSubCommands@CEnumNewItemSubCommands@@AEAAJPEAUIObjectCollection@@@Z
    long _CreateSubCommands(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSubCommandsFromHMENU@CEnumNewItemSubCommands@@AEAAJPEAUIObjectCollection@@PEAUIContextMenu3@@PEAUHMENU__@@@Z
    long _CreateSubCommandsFromHMENU(IObjectCollection *, IContextMenu3*, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSubCommandCollection@CEnumNewItemSubCommands@@AEAAJXZ
    long _EnsureSubCommandCollection();
};
