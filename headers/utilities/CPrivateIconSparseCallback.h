#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CPrivateIconSparseCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrivateIconSparseCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrivateIconSparseCallback@@QEAA@XZ
    CPrivateIconSparseCallback();
    // Category: Method | Source: PE Export
    // Symbol: ?Clone@CPrivateIconSparseCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Clone(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceImagePresent@CPrivateIconSparseCallback@@UEAAJPEAUIImageList2@@H@Z
    virtual long ForceImagePresent(IImageList2*, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrivateIconSparseCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrivateIconSparseCallback@@UEAAKXZ
    virtual unsigned long Release();
};
