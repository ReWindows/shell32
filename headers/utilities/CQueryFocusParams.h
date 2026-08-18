#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CQueryFocusParams {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CQueryFocusParams@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CQueryFocusParams@@SAJPEAPEAV1@@Z
    static long CreateInstance(CQueryFocusParams * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CQueryFocusParams@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CQueryFocusParams@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQueryFocusParams@@AEAA@XZ
    ~CQueryFocusParams();
};
