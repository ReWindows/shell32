#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class FileActionMetadata {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActionName@FileActionMetadata@@QEAAXPEBG@Z
    void SetActionName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellItems@FileActionMetadata@@QEAAXPEAUIShellItemArray@@@Z
    void SetShellItems(IShellItemArray *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileActionMetadata@@UEAA@XZ
    virtual ~FileActionMetadata();
};
