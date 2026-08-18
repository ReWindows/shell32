#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace CMultimonWallpaperState {
class CMultimonSpanLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachVisibleRegion@CMultimonSpanLayout@CMultimonWallpaperState@@QEAAXPEAPEAUHRGN__@@@Z
    void AttachVisibleRegion(HRGN__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLargestNonclippedRectangle@CMultimonSpanLayout@CMultimonWallpaperState@@QEAAXHHPEAUtagRECT@@@Z
    void GetLargestNonclippedRectangle(int, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMultimonSpanLayout@CMultimonWallpaperState@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateVisibleImageSizeAfterClip@CMultimonSpanLayout@CMultimonWallpaperState@@QEBANPEBUtagRECT@@@Z
    double _CalculateVisibleImageSizeAfterClip(tagRECT const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClipRectangle@CMultimonSpanLayout@CMultimonWallpaperState@@QEAAXPEBUtagRECT@@@Z
    void _ClipRectangle(tagRECT const *);
};
} // namespace CMultimonWallpaperState
