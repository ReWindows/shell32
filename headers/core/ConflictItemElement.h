#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class ConflictItemElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ConflictItemElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@ConflictItemElement@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ConflictItemElement@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItem@ConflictItemElement@@QEAAXPEAUIShellItem@@PEBG@Z
    void SetConflictItem(IShellItem *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConflictItemElement@@UEAA@XZ
    virtual ~ConflictItemElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTopLevelHWND@ConflictItemElement@@AEAAPEAUHWND__@@XZ
    HWND__* _GetTopLevelHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeDefaultVerb@ConflictItemElement@@AEAA_NXZ
    bool _InvokeDefaultVerb();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowContextMenu@ConflictItemElement@@AEAA_NXZ
    bool _ShowContextMenu();
};
