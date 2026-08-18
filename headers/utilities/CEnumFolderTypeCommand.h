#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CEnumFolderTypeCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumFolderTypeCommand@@QEAA@XZ
    CEnumFolderTypeCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumFolderTypeCommand@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
};
