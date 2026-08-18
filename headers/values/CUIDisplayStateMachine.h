#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CUIDisplayStateMachine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetDisplayStateOnHoldMode@CUIDisplayStateMachine@@QEAAJXZ
    long UnsetDisplayStateOnHoldMode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeState@CUIDisplayStateMachine@@AEAAXW4UI_VISIBLE_STATE@@@Z
    void _ChangeState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckOnHoldTimeout@CUIDisplayStateMachine@@AEAAXXZ
    void _CheckOnHoldTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateEvent@CUIDisplayStateMachine@@AEAAXXZ
    void _EvaluateEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteEntryActionsIfNeeded@CUIDisplayStateMachine@@AEAAXXZ
    void _ExecuteEntryActionsIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteExitActionsIfNeeded@CUIDisplayStateMachine@@AEAAXXZ
    void _ExecuteExitActionsIfNeeded();
};
