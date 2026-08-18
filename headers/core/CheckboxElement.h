#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class CheckboxElement {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CheckboxElement@@QEAA@XZ
    CheckboxElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CheckboxInnerAlignProp@CheckboxElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * CheckboxInnerAlignProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CheckedStateProp@CheckboxElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * CheckedStateProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CheckboxElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CheckboxElement@@QEAAJPEAVElement@DirectUI@@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CheckboxElement@@UEAAJPEAPEAVElement@DirectUI@@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CheckboxElement@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CheckboxElement@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@CheckboxElement@@UEAA_NPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CheckboxElement@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckedState@CheckboxElement@@QEAAJW4CHECKED_STATE@@@Z
    long SetCheckedState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ShowMouseFocusedOnMouseWithinProp@CheckboxElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * ShowMouseFocusedOnMouseWithinProp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CheckboxElement@@UEAA@XZ
    virtual ~CheckboxElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddGlyph@CheckboxElement@@AEAAJXZ
    long _CreateAndAddGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddLabel@CheckboxElement@@AEAAJXZ
    long _CreateAndAddLabel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSimulatedFocusElement@CheckboxElement@@AEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * _GetSimulatedFocusElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCheckedState@CheckboxElement@@AEAAJW4CHECKED_STATE@@@Z
    long _SetCheckedState(int);
};
