#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class Button3d {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Button3d@@QEAA@XZ
    Button3d();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?EvaluatingAsyncStateProp@Button3d@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * EvaluatingAsyncStateProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@Button3d@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPressedPaddingShift@Button3d@@QEAAHXZ
    int GetPressedPaddingShift();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@Button3d@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PressedPaddingShiftProp@Button3d@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PressedPaddingShiftProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@Button3d@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEvaluatingAsyncState@Button3d@@QEAAJ_N@Z
    long SetEvaluatingAsyncState(bool);
};
