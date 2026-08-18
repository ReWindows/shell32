#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace CopyTileAnimationUtils {
class CTileAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationFrame@CTileAnimator@CopyTileAnimationUtils@@QEAAJ_K@Z
    long UpdateAnimationFrame(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAnimationElements@CTileAnimator@CopyTileAnimationUtils@@AEAAJPEAVElement@DirectUI@@00PEAVCTileAnimationInterpolator@Interpolators@@@Z
    long _ValidateAnimationElements(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *, ::Interpolators::CTileAnimationInterpolator *);
};
} // namespace CopyTileAnimationUtils
