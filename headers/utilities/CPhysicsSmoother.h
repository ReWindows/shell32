#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CPhysicsSmoother {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CPhysicsSmoother@@QEAANN@Z
    double GetNext(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CPhysicsSmoother@@QEAAJNNII@Z
    long SetScale(double, double, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CPhysicsSmoother@@SAJNNNPEAPEAV1@@Z
    static long s_CreateInstance(double, double, double, CPhysicsSmoother * *);
};
