#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CControlPanelItemListBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelItemListBase@@QEAAKXZ
    unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendItem@CControlPanelItemListBase@@IEAAJPEAUIShellFolder2@@PEAU_ITEMID_CHILD@@PEAH@Z
    long AppendItem(IShellFolder2*, _ITEMID_CHILD *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLoaded@CControlPanelItemListBase@@MEAAJXZ
    virtual long EnsureLoaded();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelItemListBase@@MEAA@XZ
    virtual ~CControlPanelItemListBase();
};
