#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class COperationStatusTileRateCalculator {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateRate@COperationStatusTileRateCalculator@@AEAAN_K000000PEAN@Z
    double _CalculateRate(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToRateTypeCore@COperationStatusTileRateCalculator@@AEAAJW4RateTypes@1@@Z
    long _SetToRateTypeCore(int);
};
