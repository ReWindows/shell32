#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CPublishedItemsFolderViewCB {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CPublishedItemsFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByProperty@CPublishedItemsFolderViewCB@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CPublishedItemsFolderViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
};
