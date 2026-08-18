#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CVolume {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVolume@@QEAA@XZ
    CVolume();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabel@CVolume@@QEAAJPEAGK@Z
    long GetLabel(unsigned short *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVolume@@QEAAKXZ
    unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabel@CVolume@@QEAAXPEBG@Z
    void SetLabel(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVolume@@QEAA@XZ
    ~CVolume();
};
