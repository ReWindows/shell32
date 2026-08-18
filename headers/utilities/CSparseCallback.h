#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CSparseCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSparseCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSparseCallback@@QEAA@XZ
    CSparseCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSparseCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Clone(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceImagePresent@CSparseCallback@@UEAAJPEAUIImageList2@@H@Z
    virtual long ForceImagePresent(IImageList2*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CSparseCallback@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSizeMax@CSparseCallback@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSparseCallback@@QEAAJPEAVCIconCache@@PEAUIImageList2@@I@Z
    long Initialize(CIconCache *, IImageList2*, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CSparseCallback@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PE Export
    // Symbol: ?Load@CSparseCallback@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSparseCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSparseCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CSparseCallback@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
};
