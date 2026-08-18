#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
class CControlPanelLink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustAppletPidlForCategoryView@CControlPanelLink@@QEAAJXZ
    long AdjustAppletPidlForCategoryView();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelLink@@QEAA@XZ
    CControlPanelLink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CControlPanelLink@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CControlPanelLink@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CControlPanelLink@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavTaskCommand@CControlPanelLink@@QEAAXPEAVCControlPanelNavLinkCommand@@@Z
    void SetNavTaskCommand(CControlPanelNavLinkCommand *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginDrag@CControlPanelLink@@AEAAJXZ
    long _BeginDrag();
};
