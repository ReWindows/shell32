#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class SQM {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForBrowserHost@SQM@@YAIPEAUIUnknown@@@Z
    unsigned int GetSQMIDForBrowserHost(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForFolderTypeContainer@SQM@@YAIPEAUIUnknown@@@Z
    unsigned int GetSQMIDForFolderTypeContainer(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForFolderTypeKind@SQM@@YAIAEBU_GUID@@@Z
    unsigned int GetSQMIDForFolderTypeKind(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDForTopView@SQM@@YAIAEBUTOPVIEWKEY@@@Z
    unsigned int GetSQMIDForTopView(TOPVIEWKEY const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindSQMIDFromArray@SQM@@YAIPEBGHIPEBUSQMSTRIDPAIR@1@@Z
    unsigned int _FindSQMIDFromArray(unsigned short const *, int, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMIDForFolderTypeContainerFromItem@SQM@@YAIPEAUIShellItem@@@Z
    unsigned int _GetSQMIDForFolderTypeContainerFromItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFilteredSet@SQM@@YAHPEAUIShellItem@@@Z
    int _IsFilteredSet(IShellItem *);
};
