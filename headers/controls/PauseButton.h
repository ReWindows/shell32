#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
// Base evidence: CheckButton (likely; classinfo-template-instantiation).
class PauseButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@PauseButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@PauseButton@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@PauseButton@@QEAAJW4PAUSE_BUTTON_STATE@@@Z
    long SetState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?StateProp@PauseButton@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * StateProp();
};
