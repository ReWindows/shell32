#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CFreeThreadedConflictDialogProxyWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFreeThreadedConflictDialogProxyWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CFreeThreadedConflictDialogProxyWrapper@@SAJPEAVCSafeElementProxy@@W4CONFLICT_FILTER@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(CSafeElementProxy *, int, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFreeThreadedConflictDialogProxyWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFreeThreadedConflictDialogProxyWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictDataAndState@CFreeThreadedConflictDialogProxyWrapper@@UEAAJKW4CONFLICT_CHECKBOX_STATE@@0PEAUIShellItem@@1PEAUINDIVIDUAL_CONFLICT_FAST_DATA@@@Z
    virtual long SetConflictDataAndState(unsigned long, int, int, IShellItem *, IShellItem *, INDIVIDUAL_CONFLICT_FAST_DATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItemThumbnail@CFreeThreadedConflictDialogProxyWrapper@@UEAAJKW4CONFLICT_ITEM_DATA_FLAGS@@PEAUHBITMAP__@@@Z
    virtual long SetConflictItemThumbnail(unsigned long, int, HBITMAP__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalItemState@CFreeThreadedConflictDialogProxyWrapper@@UEAAJW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long SetGlobalItemState(int, int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFreeThreadedConflictDialogProxyWrapper@@IEAA@XZ
    ~CFreeThreadedConflictDialogProxyWrapper();
};
