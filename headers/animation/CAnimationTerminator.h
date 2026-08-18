#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace COperationStatusTile {
class CAnimationTerminator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompleteOrAbandonAnimation@CAnimationTerminator@COperationStatusTile@@QEAA_N_NW4ANIM_PROGRESS_STATUS@CopyTileAnimationUtils@@@Z
    bool ForceCompleteOrAbandonAnimation(bool, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationTerminator@COperationStatusTile@@QEAA@XZ
    ~CAnimationTerminator();
};
} // namespace COperationStatusTile
