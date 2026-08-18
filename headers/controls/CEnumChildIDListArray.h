#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CEnumChildIDListArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumChildIDListArray@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumChildIDListArray@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumChildIDListArray@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumChildIDListArray@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumChildIDListArray@@UEAA@XZ
    virtual ~CEnumChildIDListArray();
};
