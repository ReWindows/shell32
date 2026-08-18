#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class WallpaperSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compositor@WallpaperSurface@@QEAA?AU0Composition@UI@Windows@winrt@@XZ
    WindissectOpaque Compositor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@WallpaperSurface@@QEBA_NXZ
    bool IsValid() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WallpaperSurface@@QEAA@XZ
    ~WallpaperSurface();
};
