#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class GridWorkspaceWorker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@GridWorkspaceWorker@@UEAAJPEAUIStream@@@Z
    virtual long Deserialize(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGridSizeLargerOrEqualThan@GridWorkspaceWorker@@QEBA_NMM@Z
    bool IsGridSizeLargerOrEqualThan(float, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@GridWorkspaceWorker@@UEAAJPEAUIStream@@PEAG@Z
    virtual long Serialize(IStream *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@GridWorkspaceWorker@@UEAAJPEAG_KPEA_N@Z
    virtual long Validate(unsigned short *, uint64_t, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GridWorkspaceWorker@@QEAA@XZ
    ~GridWorkspaceWorker();
};
