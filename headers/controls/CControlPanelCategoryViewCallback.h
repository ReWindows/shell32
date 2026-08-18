#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CControlPanelCategoryViewCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelCategoryViewCallback@@QEAA@PEAVCControlPanelCategoryFolder@@@Z
    CControlPanelCategoryViewCallback(CControlPanelCategoryFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CControlPanelCategoryViewCallback@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSFVMDelayWindowCreate@CControlPanelCategoryViewCallback@@AEAAJKPEAUHWND__@@@Z
    long _OnSFVMDelayWindowCreate(unsigned long, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelCategoryViewCallback@@EEAA@XZ
    virtual ~CControlPanelCategoryViewCallback();
};
