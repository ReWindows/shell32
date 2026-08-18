#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CItemKeyArray {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemKeyArray@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CItemKeyArray@@UEAAJPEAPEAUIItemKeyArray@@@Z
    virtual long Clone(IItemKeyArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachHDSA@CItemKeyArray@@UEAAJPEAX@Z
    virtual long DetachHDSA(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CItemKeyArray@@UEAAJHPEAUtagITEMKEY@@@Z
    virtual long GetAt(int, tagITEMKEY *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CItemKeyArray@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CItemKeyArray@@QEAAJPEAV?$CDSA@UtagITEMKEY@@@@W4IKA_INIT_TYPES@@@Z
    long Initialize(WindissectOpaque *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemKeyArray@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemKeyArray@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemKeyArray@@AEAA@XZ
    ~CItemKeyArray();
};
