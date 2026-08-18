#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CUICommandStateMachine {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOnTimerEvent@CUICommandStateMachine@@QEAAXXZ
    void SetOnTimerEvent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeState@CUICommandStateMachine@@AEAAXW4UI_VISIBLE_STATE@@@Z
    void _ChangeState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateEvent@CUICommandStateMachine@@AEAAXW4TILE_EVENT_TYPE@@@Z
    void _EvaluateEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsActiveState@CUICommandStateMachine@@CA_NW4UI_VISIBLE_STATE@@@Z
    static bool s_IsActiveState(int);
};
