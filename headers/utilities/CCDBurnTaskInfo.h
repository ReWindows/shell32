#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CCDBurnTaskInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurnTaskInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurnTaskInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurnTaskInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCDBurnTaskInfo@@QEAA@XZ
    ~CCDBurnTaskInfo();
};
