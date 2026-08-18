#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
class CDUIView {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDUIView@@QEAA@XZ
    CDUIView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDUIView@@SAJIPEAUHWND__@@PEAVElement@DirectUI@@PEAKPEAPEAV34@@Z
    static long Create(unsigned int, HWND__*, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CDUIView@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CDUIView@@QEAAJXZ
    long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachListview@CDUIView@@QEAAXXZ
    void DetachListview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CDUIView@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CDUIView@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CDUIView@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocus@CDUIView@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDUIView@@UEAA@XZ
    virtual ~CDUIView();
};
