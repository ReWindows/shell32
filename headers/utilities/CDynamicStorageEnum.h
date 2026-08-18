#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CDynamicStorageEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDynamicStorageEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDynamicStorageEnum@@QEAA@PEAVCDynamicStorage@@@Z
    CDynamicStorageEnum(CDynamicStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CDynamicStorageEnum@@UEAAJPEAPEAUIEnumSTATSTG@@@Z
    virtual long Clone(IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CDynamicStorageEnum@@UEAAJPEAPEAUIEnumShellItems@@@Z
    virtual long Clone(IEnumShellItems * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CDynamicStorageEnum@@UEAAJKPEAPEAUIShellItem@@PEAK@Z
    virtual long Next(unsigned long, IShellItem * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CDynamicStorageEnum@@UEAAJKPEAUtagSTATSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDynamicStorageEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDynamicStorageEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CDynamicStorageEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CDynamicStorageEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
