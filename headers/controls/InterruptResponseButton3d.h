#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class InterruptResponseButton3d {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ButtonResponseProp@InterruptResponseButton3d@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ButtonResponseProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@InterruptResponseButton3d@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@InterruptResponseButton3d@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@InterruptResponseButton3d@@SAJXZ
    static long Register();
};
