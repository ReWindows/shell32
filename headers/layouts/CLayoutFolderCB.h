#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CLayoutFolderCB {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CLayoutFolderCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeClient@CLayoutFolderCB@@IEAAJXZ
    long _InitializeClient();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutFolderCB@@MEAA@XZ
    virtual ~CLayoutFolderCB();
};
