#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
class CStatusBarModule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CStatusBarModule@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CStatusBarModule@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
};
