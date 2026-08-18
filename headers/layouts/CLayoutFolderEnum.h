#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CLayoutFolderEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLayoutFolderEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Clone@CLayoutFolderEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CLayoutFolderEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLayoutFolderEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLayoutFolderEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CLayoutFolderEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CLayoutFolderEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutFolderEnum@@EEAA@XZ
    virtual ~CLayoutFolderEnum();
};
