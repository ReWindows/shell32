#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CNamespaceWalkFilter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNamespaceWalkFilter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNamespaceWalkFilter@@QEAA@PEAV?$CRefCountedDPA@V?$CDPAItemIdList@U_ITEMIDLIST_ABSOLUTE@@@@@@@Z
    CNamespaceWalkFilter(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CNamespaceWalkFilter@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CNamespaceWalkFilter@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CNamespaceWalkFilter@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CNamespaceWalkFilter@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNamespaceWalkFilter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNamespaceWalkFilter@@UEAAKXZ
    virtual unsigned long Release();
};
