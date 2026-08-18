#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CFillIDLTreeWalkCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFillIDLTreeWalkCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFillIDLTreeWalkCB@@QEAA@PEAVCIDLTree@@@Z
    CFillIDLTreeWalkCB(CIDLTree *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CFillIDLTreeWalkCB@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CFillIDLTreeWalkCB@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CFillIDLTreeWalkCB@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CFillIDLTreeWalkCB@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFillIDLTreeWalkCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFillIDLTreeWalkCB@@UEAAKXZ
    virtual unsigned long Release();
};
