#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CConfirmConflictItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConfirmConflictItem@@QEAA@XZ
    CConfirmConflictItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConfirmConflictItem@@QEAA@XZ
    ~CConfirmConflictItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Duplicate@CConfirmConflictItem@@CAJPEAUCONFIRM_CONFLICT_ITEM@@PEBU2@@Z
    static long s_Duplicate(CONFIRM_CONFLICT_ITEM *, CONFIRM_CONFLICT_ITEM const *);
};
