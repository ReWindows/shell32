#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CDrivesDefragmentCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CDrivesDefragmentCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDrivesDefragmentCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAsync@CDrivesDefragmentCommand@@AEAA?AUfire_and_forget@winrt@@PEAUIShellItemArray@@@Z
    WindissectOpaque InvokeAsync(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAndGetDefragmentPath@CDrivesDefragmentCommand@@AEAAJXZ
    long _CheckAndGetDefragmentPath();
};
