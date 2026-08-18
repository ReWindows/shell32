#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CIncludeInLibraryContextMenuHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIncludeInLibraryContextMenuHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIncludeInLibraryContextMenuHelper@@QEAA@IPEAUHMENU__@@@Z
    CIncludeInLibraryContextMenuHelper(unsigned int, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetChanged@CIncludeInLibraryContextMenuHelper@@UEAAJPEAUIUpdatableItemSet@@W4tagUISCB_FLAGS@@_J@Z
    virtual long OnSetChanged(IUpdatableItemSet *, int, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIncludeInLibraryContextMenuHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIncludeInLibraryContextMenuHelper@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateSubMenu@CIncludeInLibraryContextMenuHelper@@AEAAJPEAPEAUIShellItem@@I@Z
    long _PopulateSubMenu(IShellItem * *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIncludeInLibraryContextMenuHelper@@AEAA@XZ
    ~CIncludeInLibraryContextMenuHelper();
};
