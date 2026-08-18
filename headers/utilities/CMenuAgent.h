#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CMenuAgent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelMenu@CMenuAgent@@QEAAXPEBX@Z
    void CancelMenu(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMenuAgent@@QEAAXPEAXPEAVCTrackPopupBar@@PEAUIMenuPopup@@PEAUHWND__@@3@Z
    void Init(void *, CTrackPopupBar *, IMenuPopup *, HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsgHook@CMenuAgent@@SA_JH_K_J@Z
    static int64_t MsgHook(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMenuAgent@@QEAAXPEBX@Z
    void Reset(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKey@CMenuAgent@@QEAAH_K@Z
    int _OnKey(uint64_t);
};
