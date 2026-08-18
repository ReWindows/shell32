#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CExplorerSubCommandOverIContextMenu {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CExplorerSubCommandOverIContextMenu@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CExplorerSubCommandOverIContextMenu@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerSubCommandOverIContextMenu@@UEAA@XZ
    virtual ~CExplorerSubCommandOverIContextMenu();
};
