#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CSortOrderCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSortOrderCommand@@QEAA@W4SORTORDERTYPE@@H@Z
    CSortOrderCommand(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CSortOrderCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSortOrderCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
};
