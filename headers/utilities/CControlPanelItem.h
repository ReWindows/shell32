#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CControlPanelItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelItem@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Create@CControlPanelItem@@SAJPEAPEAV1@@Z
    static long s_Create(CControlPanelItem * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelItem@@AEAA@XZ
    ~CControlPanelItem();
};
