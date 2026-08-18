#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CRefCountedCriticalSection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRefCountedCriticalSection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterCriticalSection@CRefCountedCriticalSection@@UEAAJXZ
    virtual long EnterCriticalSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveCriticalSection@CRefCountedCriticalSection@@UEAAJXZ
    virtual long LeaveCriticalSection();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRefCountedCriticalSection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRefCountedCriticalSection@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRefCountedCriticalSection@@AEAA@XZ
    ~CRefCountedCriticalSection();
};
