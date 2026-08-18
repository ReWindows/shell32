#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CAnimateWindowSizeWorker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CAnimateWindowSizeWorker@@QEAAJXZ
    long Start();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeAnimation@CAnimateWindowSizeWorker@@AEAAXKPEAUtagSIZE@@@Z
    void _ComputeAnimation(unsigned long, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeSCurveAnimation@CAnimateWindowSizeWorker@@AEAANNNN@Z
    double _ComputeSCurveAnimation(double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowSize@CAnimateWindowSizeWorker@@AEAAXI@Z
    void _WindowSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WindowSize@CAnimateWindowSizeWorker@@CAXII_K00@Z
    static void s_WindowSize(unsigned int, unsigned int, uint64_t, uint64_t, uint64_t);
};
