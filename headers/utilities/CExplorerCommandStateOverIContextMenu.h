#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CExplorerCommandStateOverIContextMenu {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerCommandStateOverIContextMenu@@QEAA@XZ
    CExplorerCommandStateOverIContextMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?Execute@CExplorerCommandStateOverIContextMenu@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CExplorerCommandStateOverIContextMenu@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHandlerAvailable@CExplorerCommandStateOverIContextMenu@@AEAAJPEAUIShellItemArray@@PEA_N@Z
    long _IsHandlerAvailable(IShellItemArray *, bool *);
};
