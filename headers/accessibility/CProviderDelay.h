#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CProviderDelay {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProviderDelay@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Process@CProviderDelay@@UEAAJXZ
    virtual long Process();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProviderDelay@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProviderDelay@@UEAAKXZ
    virtual unsigned long Release();
};
