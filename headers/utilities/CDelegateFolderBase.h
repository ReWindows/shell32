#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CDelegateFolderBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelegateFolderBase@@QEAA@XZ
    CDelegateFolderBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CDelegateFolderBase@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
};
