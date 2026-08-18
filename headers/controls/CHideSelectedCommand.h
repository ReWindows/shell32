#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CHideSelectedCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CHideSelectedCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CHideSelectedCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InRecycleBin@CHideSelectedCommand@@AEAA_NXZ
    bool _InRecycleBin();
};
