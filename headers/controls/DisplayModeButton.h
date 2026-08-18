#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class DisplayModeButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@DisplayModeButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@DisplayModeButton@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@3@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DisplayModeButton@@SAJXZ
    static long Register();
};
