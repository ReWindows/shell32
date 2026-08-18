#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CScopeTreeRootFilter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScopeTreeRootFilter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScopeTreeRootFilter@@QEAA@KW4SCOPE_DIALOG_OPTIONS@@@Z
    CScopeTreeRootFilter(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumFlagsForItem@CScopeTreeRootFilter@@UEAAJPEAUIShellItem@@PEAK@Z
    virtual long GetEnumFlagsForItem(IShellItem *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItem@CScopeTreeRootFilter@@UEAAJPEAUIShellItem@@@Z
    virtual long IncludeItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CScopeTreeRootFilter@@QEAAJXZ
    long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScopeTreeRootFilter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScopeTreeRootFilter@@UEAAKXZ
    virtual unsigned long Release();
};
