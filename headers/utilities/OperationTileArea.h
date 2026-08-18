#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class OperationTileArea {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@OperationTileArea@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@OperationTileArea@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@OperationTileArea@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@OperationTileArea@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToTile@OperationTileArea@@AEAAPEAVElement@DirectUI@@PEAV23@H0@Z
    ::DirectUI::Element * _NavigateToTile(::DirectUI::Element *, int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPageUpDown@OperationTileArea@@AEAAXPEAUKeyboardEvent@DirectUI@@@Z
    void _OnPageUpDown(::DirectUI::KeyboardEvent *);
};
