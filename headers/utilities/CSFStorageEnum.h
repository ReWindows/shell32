#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CSFStorageEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSFStorageEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSFStorageEnum@@UEAAJPEAPEAUIEnumSTATSTG@@@Z
    virtual long Clone(IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSFStorageEnum@@UEAAJKPEAUtagSTATSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSFStorageEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSFStorageEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSFStorageEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CSFStorageEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSFStorageEnum@@IEAA@XZ
    ~CSFStorageEnum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PidlToSTATSTG@CSFStorageEnum@@AEAAJPEFBU_ITEMID_CHILD@@PEAUtagSTATSTG@@@Z
    long _PidlToSTATSTG(_ITEMID_CHILD & volatile *, tagSTATSTG *);
};
