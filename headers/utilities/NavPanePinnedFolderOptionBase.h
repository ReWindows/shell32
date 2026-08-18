#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class NavPanePinnedFolderOptionBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckState@NavPanePinnedFolderOptionBase@@UEAAJPEAH@Z
    virtual long GetCheckState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultCheckState@NavPanePinnedFolderOptionBase@@UEAAJPEAH@Z
    virtual long GetDefaultCheckState(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavPanePinnedFolderOptionBase@@QEAA@XZ
    NavPanePinnedFolderOptionBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckState@NavPanePinnedFolderOptionBase@@UEAAJH@Z
    virtual long SetCheckState(int);
};
