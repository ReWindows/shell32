#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
class CChartView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CChartView@@SAJIIPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(unsigned int, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CChartView@@UEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CChartView@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CChartView@@SAJXZ
    static long Register();
};
