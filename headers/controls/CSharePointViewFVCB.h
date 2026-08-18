#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CSharePointViewFVCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharePointViewFVCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharePointViewFVCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CSharePointViewFVCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharePointViewFVCB@@UEAAKXZ
    virtual unsigned long Release();
};
