#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CPreviewBackground {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPreviewBackground@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewBackground@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CPreviewBackground@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SizeMenuProp@CPreviewBackground@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * SizeMenuProp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CPreviewBackground@@AEAAJPEAPEAUIShellItemArray@@@Z
    long _GetSelection(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchContextMenu@CPreviewBackground@@AEAAXPEBUMouseEvent@DirectUI@@@Z
    void _LaunchContextMenu(::DirectUI::MouseEvent const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveProperties@CPreviewBackground@@AEAAXXZ
    void _RemoveProperties();
};
