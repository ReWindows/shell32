#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CControlPanelCategoryList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLoaded@CControlPanelCategoryList@@UEAAJXZ
    virtual long EnsureLoaded();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadCategories@CControlPanelCategoryList@@AEAAJPEAUIShellFolder2@@@Z
    long _LoadCategories(IShellFolder2*);
};
