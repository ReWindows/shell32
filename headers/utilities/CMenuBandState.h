#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CMenuBandState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CenterOnButton@CMenuBandState@@QEAAXPEAUHWND__@@HHPEBG1@Z
    void CenterOnButton(HWND__*, int, int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FadeRect@CMenuBandState@@QEAAJPEBUtagRECT@@@Z
    long FadeRect(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkerWindow@CMenuBandState@@QEAAPEAUHWND__@@PEAU2@@Z
    HWND__* GetWorkerWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideTooltip@CMenuBandState@@QEAAXH@Z
    void HideTooltip(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutTipOnTop@CMenuBandState@@QEAAXXZ
    void PutTipOnTop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuBandState@@UEAA@XZ
    virtual ~CMenuBandState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoToolTip@CMenuBandState@@IEAAXPEAUHWND__@@HHPEBG1@Z
    void _DoToolTip(HWND__*, int, int, unsigned short const *, unsigned short const *);
};
