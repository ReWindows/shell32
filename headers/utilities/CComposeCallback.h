#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CComposeCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CComposeCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceImagePresent@CComposeCallback@@UEAAJPEAUIAggregateImageList@@H@Z
    virtual long ForceImagePresent(IAggregateImageList *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CComposeCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CComposeCallback@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComposeCallback@@AEAA@XZ
    ~CComposeCallback();
};
