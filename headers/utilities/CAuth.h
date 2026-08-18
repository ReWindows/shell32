#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CAuth {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAccess@CAuth@@QEAAJPEAXKPEAK@Z
    long CheckAccess(void *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAuth@@QEAA@XZ
    ~CAuth();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CAuth@@AEAAJXZ
    long _Init();
};
