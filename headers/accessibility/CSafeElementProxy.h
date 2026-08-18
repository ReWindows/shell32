#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CSafeElementProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSafeElementProxy@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDUserContext@CSafeElementProxy@@AEAAJPEAPEAUHDCONTEXT__@@@Z
    long _InitDUserContext(HDCONTEXT__* *);
};
