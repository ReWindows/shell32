#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
namespace CopyTileAnimationUtils {
class CTileAnimationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceAbandonAnimation@CTileAnimationManager@CopyTileAnimationUtils@@QEAAXW4ANIM_PROGRESS_STATUS@2@@Z
    void ForceAbandonAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompleteAnimation@CTileAnimationManager@CopyTileAnimationUtils@@QEAAXW4ANIM_PROGRESS_STATUS@2@@Z
    void ForceCompleteAnimation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionType@CTileAnimationManager@CopyTileAnimationUtils@@QEBA?AW4ANIM_TRANSITION_TYPE@2@XZ
    int GetTransitionType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CTileAnimationManager@CopyTileAnimationUtils@@QEAAJW4ANIM_TRANSITION_TYPE@2@PEAUTILE_ANIMATION_DATA@2@PEAUIOperationStatusTilePriv@@@Z
    long StartAnimation(int, WindissectOpaque *, IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationFrame@CTileAnimationManager@CopyTileAnimationUtils@@QEAAJ_K@Z
    long UpdateAnimationFrame(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CTileAnimationManager@CopyTileAnimationUtils@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitProgressAnimationElements@CTileAnimationManager@CopyTileAnimationUtils@@AEAAJPEAUTILE_ANIMATION_DATA@2@@Z
    long _InitProgressAnimationElements(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationStartup@CTileAnimationManager@CopyTileAnimationUtils@@AEAAJW4ANIM_TRANSITION_TYPE@2@PEAUIOperationStatusTilePriv@@@Z
    long _PrepareAnimationStartup(int, IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAnimationElementAndSetFocus@CTileAnimationManager@CopyTileAnimationUtils@@AEAAJPEAVElement@DirectUI@@@Z
    long _ShowAnimationElementAndSetFocus(::DirectUI::Element *);
};
} // namespace CopyTileAnimationUtils
