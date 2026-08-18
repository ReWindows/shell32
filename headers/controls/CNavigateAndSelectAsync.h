#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CNavigateAndSelectAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoNavigateAndSelect@CNavigateAndSelectAsync@@QEAAJPEAUIUnknown@@PEAUIShellItem@@@Z
    long DoNavigateAndSelect(IUnknown *, IShellItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNavigateAndSelectAsync@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeThreadProc@CNavigateAndSelectAsync@@AEAAJXZ
    long _InvokeThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavAndSelect@CNavigateAndSelectAsync@@AEAAJPEAUIShellBrowser@@PEAUIShellItem@@@Z
    long _NavAndSelect(IShellBrowser *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InvokeThreadProc@CNavigateAndSelectAsync@@CAKPEAX@Z
    static unsigned long s_InvokeThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNavigateAndSelectAsync@@AEAA@XZ
    ~CNavigateAndSelectAsync();
};
