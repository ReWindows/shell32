#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
class DetailsPaneHwndHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewAdapter@DetailsPaneHwndHost@@QEAAJPEAUIUnknown@@@Z
    long CreateViewAdapter(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDetailsPaneView@DetailsPaneHwndHost@@QEAAXXZ
    void DetachDetailsPaneView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@DetailsPaneHwndHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@DetailsPaneHwndHost@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@DetailsPaneHwndHost@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@DetailsPaneHwndHost@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DetailsPaneHwndHost@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocus@DetailsPaneHwndHost@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DetailsPaneHwndHost@@UEAA@XZ
    virtual ~DetailsPaneHwndHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@DetailsPaneHwndHost@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@DetailsPaneHwndHost@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
};
