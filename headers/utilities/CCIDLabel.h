#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CCIDLabel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CCIDLabel@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CCIDLabel@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
};
