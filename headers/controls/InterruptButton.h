#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class InterruptButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@InterruptButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResponse@InterruptButton@@QEAA?AW4OPERATION_INTERRUPT_RESPONSE_SINGLE@@XZ
    int GetResponse();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InterruptButton@@QEAA@XZ
    InterruptButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@InterruptButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@InterruptButton@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ResponseProp@InterruptButton@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ResponseProp();
};
