#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class IconGridItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneFields@IconGridItem@@QEAAJAEBU1@@Z
    long CloneFields(IconGridItem const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSameIdentifiersAs@IconGridItem@@QEAA_NAEBU1@@Z
    bool HasSameIdentifiersAs(IconGridItem const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IconGridItem@@QEAA@XZ
    IconGridItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameFile@IconGridItem@@QEBA_NAEBU1@@Z
    bool IsSameFile(IconGridItem const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconGridItem@@QEAA@XZ
    ~IconGridItem();
};
