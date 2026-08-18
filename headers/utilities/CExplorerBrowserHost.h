#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
class CExplorerBrowserHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CExplorerBrowserHost@@SAJIIPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(unsigned int, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CExplorerBrowserHost@@QEAAXXZ
    void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CExplorerBrowserHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CExplorerBrowserHost@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CExplorerBrowserHost@@MEAAXXZ
    virtual void OnDestroy();
};
