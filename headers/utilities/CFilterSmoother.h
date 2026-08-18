#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CFilterSmoother {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CFilterSmoother@@QEAANN@Z
    double GetNext(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CFilterSmoother@@SAJPEBNH0HHNPEAPEAV1@@Z
    static long s_CreateInstance(double const *, int, double const *, int, int, double, CFilterSmoother * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilterSmoother@@QEAA@XZ
    ~CFilterSmoother();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilterSmoother@@AEAA@PEBNH0HHN@Z
    CFilterSmoother(double const *, int, double const *, int, int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFifoArray@CFilterSmoother@@AEAAXNPEAV?$CLocalSimpleArray@N$0PPPPPPPO@@@@Z
    void _UpdateFifoArray(double, WindissectOpaque *);
};
