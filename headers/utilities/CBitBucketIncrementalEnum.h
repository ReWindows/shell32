#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CBitBucketIncrementalEnum {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CBitBucketIncrementalEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CBitBucketIncrementalEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CBitBucketIncrementalEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CBitBucketIncrementalEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitBucketIncrementalEnum@@UEAA@XZ
    virtual ~CBitBucketIncrementalEnum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEnumerator@CBitBucketIncrementalEnum@@AEAAXXZ
    void EnsureEnumerator();
};
