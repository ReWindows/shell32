#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class UIDisplayModeButtonExpandCollapseProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@UIDisplayModeButtonExpandCollapseProvider@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@UIDisplayModeButtonExpandCollapseProvider@@UEAAJXZ
    virtual long Expand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@UIDisplayModeButtonExpandCollapseProvider@@UEAAJPEAW4ExpandCollapseState@@@Z
    virtual long get_ExpandCollapseState(int *);
};
