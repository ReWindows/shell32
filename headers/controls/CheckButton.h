#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class CheckButton {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CheckButton@@QEAA@XZ
    CheckButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CheckButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CheckButton@@QEAAJPEAVElement@DirectUI@@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CheckButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CheckButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CheckButton@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@CheckButton@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@CheckButton@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
