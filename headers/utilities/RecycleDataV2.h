#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class RecycleDataV2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@RecycleDataV2@@QEAAJPEBG@Z
    long _Initialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@RecycleDataV2@@SAJPEBURecycleDataV1@@PEAU1@@Z
    static long _Initialize(RecycleDataV1const *, RecycleDataV2*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecycleDataV2@@QEAA@XZ
    ~RecycleDataV2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRestorePathLength@RecycleDataV2@@AEAAXXZ
    void _InitRestorePathLength();
};
