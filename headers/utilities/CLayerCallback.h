#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CLayerCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLayerCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceImagePresent@CLayerCallback@@UEAAJPEAUILayerImageList@@H@Z
    virtual long ForceImagePresent(ILayerImageList *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLayerCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLayerCallback@@UEAAKXZ
    virtual unsigned long Release();
};
