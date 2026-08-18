#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CViewRemotePrintersCommand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CViewRemotePrintersCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CViewRemotePrintersCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderFromSelection@CViewRemotePrintersCommand@@AEAAJPEAUIShellItemArray@@PEAPEAUIShellFolder@@@Z
    long _GetFolderFromSelection(IShellItemArray *, IShellFolder * *);
};
