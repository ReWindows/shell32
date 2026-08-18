#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CMenuData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubMenu@CMenuData@@QEAAJPEBU_GUID@@AEBU2@PEAPEAX@Z
    long GetSubMenu(_GUID const *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuData@@UEAA@XZ
    virtual ~CMenuData();
};
