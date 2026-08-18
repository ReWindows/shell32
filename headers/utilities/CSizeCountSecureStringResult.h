#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CSizeCountSecureStringResult {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CSizeCountSecureStringResult@@QEAAJK@Z
    long Allocate(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSizeCountSecureStringResult@@QEAA@XZ
    ~CSizeCountSecureStringResult();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SecureFree@CSizeCountSecureStringResult@@AEAAXXZ
    void _SecureFree();
};
