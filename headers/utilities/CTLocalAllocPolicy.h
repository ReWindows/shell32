#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CTLocalAllocPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z
    static long Alloc(void *, unsigned long, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realloc@CTLocalAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z
    static long Realloc(void *, unsigned long, void *, uint64_t, void * *);
};
