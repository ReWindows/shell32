#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CEnumFolderItemsMultiLevel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumFolderItemsMultiLevel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumFolderItemsMultiLevel@@QEAA@PEAVCFolderItemsMultiLevel@@@Z
    CEnumFolderItemsMultiLevel(CFolderItemsMultiLevel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumFolderItemsMultiLevel@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumFolderItemsMultiLevel@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumFolderItemsMultiLevel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumFolderItemsMultiLevel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumFolderItemsMultiLevel@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumFolderItemsMultiLevel@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
