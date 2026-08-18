#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CEnumExplorerCommandOverIContextMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumExplorerCommandOverIContextMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumExplorerCommandOverIContextMenu@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEnumExplorerCommandOverIContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumExplorerCommandOverIContextMenu@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumExplorerCommandOverIContextMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumExplorerCommandOverIContextMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumExplorerCommandOverIContextMenu@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextMenuCLSID@CEnumExplorerCommandOverIContextMenu@@QEAAJU_GUID@@@Z
    long SetContextMenuCLSID(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumExplorerCommandOverIContextMenu@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumExplorerCommandOverIContextMenu@@UEAA@XZ
    virtual ~CEnumExplorerCommandOverIContextMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSubCommands@CEnumExplorerCommandOverIContextMenu@@AEAAJPEAUIObjectCollection@@@Z
    long _CreateSubCommands(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSubCommandsFromHMENU@CEnumExplorerCommandOverIContextMenu@@AEAAJPEAUIObjectCollection@@PEAUIContextMenu3@@PEAUHMENU__@@@Z
    long _CreateSubCommandsFromHMENU(IObjectCollection *, IContextMenu3*, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSubCommandCollection@CEnumExplorerCommandOverIContextMenu@@AEAAJXZ
    long _EnsureSubCommandCollection();
};
