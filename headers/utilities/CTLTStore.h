#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CTLTStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTLTStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecorator@CTLTStore@@QEAAJHAEBU_GUID@@PEAPEAX@Z
    long GetDecorator(int, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTLTStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTLTStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CTLTStore@@SAJPEAUICriticalSection@@PEAPEAV1@@Z
    static long s_CreateInstance(ICriticalSection *, CTLTStore * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTLTStore@@AEAA@XZ
    ~CTLTStore();
};
