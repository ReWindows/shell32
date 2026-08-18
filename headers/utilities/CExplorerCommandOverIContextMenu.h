#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CExplorerCommandOverIContextMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerCommandOverIContextMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerCommandOverIContextMenu@@QEAA@XZ
    CExplorerCommandOverIContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSubCommands@CExplorerCommandOverIContextMenu@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long EnumSubCommands(IEnumExplorerCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CExplorerCommandOverIContextMenu@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CExplorerCommandOverIContextMenu@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExplorerCommandOverIContextMenu@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerCommandOverIContextMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerCommandOverIContextMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerCommandOverIContextMenu@@UEAA@XZ
    virtual ~CExplorerCommandOverIContextMenu();
};
