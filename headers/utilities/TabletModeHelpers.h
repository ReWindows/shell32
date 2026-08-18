#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class TabletModeHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletMode@TabletModeHelpers@@YA_NXZ
    bool IsTabletMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z
    long QueryTabletMode(int *);
};
