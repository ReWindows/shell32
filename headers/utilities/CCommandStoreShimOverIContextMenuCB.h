#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CCommandStoreShimOverIContextMenuCB {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandStoreShimOverIContextMenuCB@@QEAA@XZ
    CCommandStoreShimOverIContextMenuCB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CCommandStoreShimOverIContextMenuCB@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CCommandStoreShimOverIContextMenuCB@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuCommandId@CCommandStoreShimOverIContextMenuCB@@AEAAJPEAUHMENU__@@PEAUHWND__@@PEAUIContextMenuCB@@PEAUIDataObject@@IPEAI@Z
    long _GetMenuCommandId(HMENU__*, HWND__*, IContextMenuCB *, IDataObject *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateOrInvokeVerb@CCommandStoreShimOverIContextMenuCB@@AEAAJPEAUIDataObject@@H@Z
    long _ValidateOrInvokeVerb(IDataObject *, int);
};
