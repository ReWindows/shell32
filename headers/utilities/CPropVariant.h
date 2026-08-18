#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CPropVariant {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CPropVariant@@QEBAPEBGXZ
    unsigned short const * GetString() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CPropVariant@@QEAAJPEBG@Z
    long SetString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStealString@CPropVariant@@QEAA_NPEAPEAG@Z
    bool TryStealString(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropVariant@@QEAA@XZ
    ~CPropVariant();
};
