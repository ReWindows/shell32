#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CollectedConflictTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveCollectedConflictTelemetry@CollectedConflictTelemetry@@QEAAXXZ
    void SaveCollectedConflictTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDecideForEachDataPoints@CollectedConflictTelemetry@@QEAAXXZ
    void UpdateDecideForEachDataPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIndividualResponse@CollectedConflictTelemetry@@QEAAXKW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@H@Z
    void UpdateIndividualResponse(unsigned long, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectedConflictTelemetry@@QEAA@XZ
    ~CollectedConflictTelemetry();
};
