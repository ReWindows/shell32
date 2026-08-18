#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CObjectCLSID {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectCLSID@@QEAA@PEBU_GUID@@@Z
    CObjectCLSID(_GUID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CObjectCLSID@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectCLSID@@UEAA@XZ
    virtual ~CObjectCLSID();
};
