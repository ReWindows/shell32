#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class OperationTileHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@OperationTileHost@@UEAAXPEAVElement@DirectUI@@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OperationTileHost@@SAJPEAUHWND__@@_NIPEAVElement@DirectUI@@PEAKPEAPEAV34@@Z
    static long Create(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@OperationTileHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@OperationTileHost@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@OperationTileHost@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@OperationTileHost@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmSettingChanged@OperationTileHost@@UEAAX_K_J@Z
    virtual void OnWmSettingChanged(uint64_t, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OperationTileHost@@QEAA@XZ
    OperationTileHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@OperationTileHost@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OperationTileHost@@UEAA@XZ
    virtual ~OperationTileHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BroadcastThemeChange@OperationTileHost@@AEAAXXZ
    void _BroadcastThemeChange();
};
