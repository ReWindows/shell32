#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
namespace DirectUI {
class HWNDHost {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleImpl@HWNDHost@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@HWNDHost@DirectUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyFocused@HWNDHost@DirectUI@@UEAA_NXZ
    virtual bool GetKeyFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@HWNDHost@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdjustWindowSize@HWNDHost@DirectUI@@UEAAHHHI@Z
    virtual int OnAdjustWindowSize(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCtrlThemeChanged@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnCtrlThemeChanged(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@HWNDHost@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@HWNDHost@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@HWNDHost@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@HWNDHost@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSinkThemeChanged@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnSinkThemeChanged(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSysChar@HWNDHost@DirectUI@@UEAA_NG@Z
    virtual bool OnSysChar(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleChanged@HWNDHost@DirectUI@@UEAAX_KPEBUtagSTYLESTRUCT@@@Z
    virtual void OnWindowStyleChanged(uint64_t, tagSTYLESTRUCT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@HWNDHost@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocus@HWNDHost@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowDirection@HWNDHost@DirectUI@@UEAAXPEAUHWND__@@@Z
    virtual void SetWindowDirection(HWND__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EraseBkgnd@HWNDHost@DirectUI@@MEAA_NPEAUHDC__@@PEA_J@Z
    virtual bool EraseBkgnd(HDC__*, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@HWNDHost@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@HWNDHost@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
};
} // namespace DirectUI
