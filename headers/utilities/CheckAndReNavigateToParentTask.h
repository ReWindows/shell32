#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CheckAndReNavigateToParentTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RenavigateToParent@CheckAndReNavigateToParentTask@@SAKPEAX@Z
    static unsigned long s_RenavigateToParent(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CheckAndReNavigateToParentTask@@QEAA@XZ
    ~CheckAndReNavigateToParentTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Browse@CheckAndReNavigateToParentTask@@AEAAXPEAUIUnknown@@PEAUIShellItem@@@Z
    void _Browse(IUnknown *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIDList@CheckAndReNavigateToParentTask@@AEAAJPEAUIUnknown@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GetIDList(IUnknown *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLayoutSame@CheckAndReNavigateToParentTask@@AEAA_NPEAUIUnknown@@PEAUIShellItem@@@Z
    bool _IsLayoutSame(IUnknown *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RenavigateToParent@CheckAndReNavigateToParentTask@@AEAAXXZ
    void _RenavigateToParent();
};
