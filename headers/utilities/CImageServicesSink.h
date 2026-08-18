#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CImageServicesSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageServicesSink@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageListChanged@CImageServicesSink@@UEAAJXZ
    virtual long OnImageListChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageServicesSink@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageServicesSink@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CImageServicesSink@@SAJPEAPEAV1@@Z
    static long s_CreateInstance(CImageServicesSink * *);
};
