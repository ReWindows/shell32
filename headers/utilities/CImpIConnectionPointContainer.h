#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CImpIConnectionPointContainer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImpIConnectionPointContainer@@QEAA@XZ
    CImpIConnectionPointContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnectionPoint@CImpIConnectionPointContainer@@UEAAJAEBU_GUID@@PEAPEAUIConnectionPoint@@@Z
    virtual long FindConnectionPoint(_GUID const &, IConnectionPoint * *);
};
