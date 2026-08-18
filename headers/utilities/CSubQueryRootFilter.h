#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CSubQueryRootFilter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSubQueryRootFilter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSubQueryRootFilter@@QEAA@K@Z
    CSubQueryRootFilter(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumFlagsForItem@CSubQueryRootFilter@@UEAAJPEAUIShellItem@@PEAK@Z
    virtual long GetEnumFlagsForItem(IShellItem *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItem@CSubQueryRootFilter@@UEAAJPEAUIShellItem@@@Z
    virtual long IncludeItem(IShellItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSubQueryRootFilter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSubQueryRootFilter@@UEAAKXZ
    virtual unsigned long Release();
};
