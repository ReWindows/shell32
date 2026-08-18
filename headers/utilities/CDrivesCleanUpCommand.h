#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CDrivesCleanUpCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrivesCleanUpCommand@@QEAA@XZ
    CDrivesCleanUpCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CDrivesCleanUpCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDrivesCleanUpCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
};
