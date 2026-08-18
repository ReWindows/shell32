#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CConfirmConflictResultInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConfirmConflictResultInfo@@QEAA@XZ
    CConfirmConflictResultInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConfirmConflictResultInfo@@QEAA@XZ
    ~CConfirmConflictResultInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Duplicate@CConfirmConflictResultInfo@@CAJPEAUCONFIRM_CONFLICT_RESULT_INFO@@PEBU2@@Z
    static long s_Duplicate(CONFIRM_CONFLICT_RESULT_INFO *, CONFIRM_CONFLICT_RESULT_INFO const *);
};
