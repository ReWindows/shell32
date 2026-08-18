#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CShowDWMTreeItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckState@CShowDWMTreeItem@@UEAAJPEAH@Z
    virtual long GetCheckState(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCheckState@CShowDWMTreeItem@@UEAAJH@Z
    virtual long SetCheckState(int);
};
