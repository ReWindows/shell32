#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CMultiItemsDefaultCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CMultiItemsDefaultCommand@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenuToInvoke@CMultiItemsDefaultCommand@@AEAAJPEAUIShellItemArray@@PEAIPEAPEAUIContextMenu@@@Z
    long _GetContextMenuToInvoke(IShellItemArray *, unsigned int *, IContextMenu * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultiItemsDefaultCommand@@EEAA@XZ
    virtual ~CMultiItemsDefaultCommand();
};
