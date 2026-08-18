#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CChildId {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CChildId@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CChildId@@QEAA@XZ
    CChildId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPtr@CChildId@@UEAAPEFBU_ITEMID_CHILD@@XZ
    virtual _ITEMID_CHILD & volatile * GetPtr();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CChildId@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CChildId@@UEAAKXZ
    virtual unsigned long Release();
};
