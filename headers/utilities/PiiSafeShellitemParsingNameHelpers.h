#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class PiiSafeShellitemParsingNameHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriveOrUncRootLocation@PiiSafeShellitemParsingNameHelpers@@YA?AW4ShellitemParsingNameRootLoc@@PEBG@Z
    int GetDriveOrUncRootLocation(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriveTypeFromPath@PiiSafeShellitemParsingNameHelpers@@YAIPEBG@Z
    unsigned int GetDriveTypeFromPath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownFolderIdFromPath@PiiSafeShellitemParsingNameHelpers@@YAJPEBGPEAU_GUID@@@Z
    long GetKnownFolderIdFromPath(unsigned short const *, _GUID *);
};
