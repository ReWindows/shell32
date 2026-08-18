#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CThumbnailControlCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CThumbnailControlCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThumbnailControlCallback@@QEAA@XZ
    CThumbnailControlCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewImageAvailable@CThumbnailControlCallback@@UEAAJXZ
    virtual long OnNewImageAvailable();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CThumbnailControlCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThumbnailControlCallback@@UEAAKXZ
    virtual unsigned long Release();
};
