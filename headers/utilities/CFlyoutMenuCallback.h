#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CFlyoutMenuCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFlyoutMenuCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackSM@CFlyoutMenuCallback@@UEAAJPEAUtagSMDATA@@I_K_J@Z
    virtual long CallbackSM(tagSMDATA *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFlyoutMenuCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFlyoutMenuCallback@@UEAAKXZ
    virtual unsigned long Release();
};
