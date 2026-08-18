#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
class CInfoBar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CInfoBar@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CInfoBar@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CInfoBar@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInfoBarMessage@CInfoBar@@QEAAJPEAUIInfoBarMessage@@@Z
    long SetInfoBarMessage(IInfoBarMessage *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInfoBar@@UEAA@XZ
    virtual ~CInfoBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPopupMenu@CInfoBar@@AEAAJXZ
    long _DoPopupMenu();
};
