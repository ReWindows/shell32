#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CControlPanelTypeAhead {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CControlPanelTypeAhead@@QEAAXPEAUKeyboardEvent@DirectUI@@@Z
    void OnInput(::DirectUI::KeyboardEvent *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelTypeAhead@@QEAA@XZ
    ~CControlPanelTypeAhead();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindAndSelectItem@CControlPanelTypeAhead@@AEAAJPEBG_N@Z
    long _FindAndSelectItem(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFocusIndex@CControlPanelTypeAhead@@AEAAHXZ
    int _GetFocusIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncrementSearchString@CControlPanelTypeAhead@@AEAAJG@Z
    long _IncrementSearchString(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DSA_FindAppletElement@CControlPanelTypeAhead@@CAHPEBUAPPLETELEMENT@@0_J@Z
    static int s_DSA_FindAppletElement(APPLETELEMENT const *, APPLETELEMENT const *, int64_t);
};
