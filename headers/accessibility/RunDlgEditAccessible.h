#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class RunDlgEditAccessible {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@RunDlgEditAccessible@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RunDlgEditAccessible@@QEAA@PEAUIAccessible@@_K@Z
    RunDlgEditAccessible(IAccessible *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RunDlgEditAccessible@@UEAA@XZ
    virtual ~RunDlgEditAccessible();
};
