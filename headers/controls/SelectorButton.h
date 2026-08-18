#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
// Base evidence: Button3d (likely; classinfo-template-instantiation).
class SelectorButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SelectorButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SelectorButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@SelectorButton@@SAJXZ
    static long Register();
};
