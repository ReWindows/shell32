#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CMergedFolderViewCB {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMergedFolderViewCB@@QEAA@PEAVCMergedFolder@@@Z
    CMergedFolderViewCB(CMergedFolder *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGroupByProperty@CMergedFolderViewCB@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?RealMessage@CMergedFolderViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMergedFolderViewCB@@MEAA@XZ
    virtual ~CMergedFolderViewCB();
};
