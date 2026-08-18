#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CSaveControlsModuleInner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSaveControlsModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSaveControlsModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CSaveControlsModuleInner@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSaveControlsModuleInner@@QEAAJPEAUIUnknown@@@Z
    long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCommonItemDialogSizerSize@CSaveControlsModuleInner@@AEAAXXZ
    void UpdateCommonItemDialogSizerSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateControls@CSaveControlsModuleInner@@AEAAJXZ
    long _CreateControls();
};
