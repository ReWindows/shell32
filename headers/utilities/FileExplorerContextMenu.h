#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class FileExplorerContextMenu {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContextMenuPresenterAvailable@FileExplorerContextMenu@@YA_NPEAUIUnknown@@@Z
    bool IsContextMenuPresenterAvailable(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContextMenuInvokeVerbsForContext@FileExplorerContextMenu@@YAXPEAUIContextMenu@@W4LOCATION_CONTEXT_FLAGS@@@Z
    void PrepareContextMenuInvokeVerbsForContext(IContextMenu *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOwnerDrawAppliedHMenu@FileExplorerContextMenu@@YAIPEAUHMENU__@@PEAUHWND__@@UtagPOINT@@_N3W4CONTEXT_MENU_PRESENTER_FLAGS@@@Z
    unsigned int ShowOwnerDrawAppliedHMenu(HMENU__*, HWND__*, tagPOINT, bool, bool, int);
};
