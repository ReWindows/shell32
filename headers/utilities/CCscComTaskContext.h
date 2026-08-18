#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CCscComTaskContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoInitFlags@CCscComTaskContext@@UEAAKXZ
    virtual unsigned long CoInitFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCscCacheObject@CCscComTaskContext@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetCscCacheObject(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitContext@CCscComTaskContext@@UEAAJXZ
    virtual long InitContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitContext@CCscComTaskContext@@UEAAXXZ
    virtual void UninitContext();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCscComTaskContext@@UEAA@XZ
    virtual ~CCscComTaskContext();
};
