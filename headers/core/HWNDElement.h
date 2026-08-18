#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
namespace DirectUI {
class HWNDElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@HWNDElement@DirectUI@@UEAAXPEAVElement@2@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSetFocus@HWNDElement@DirectUI@@UEAA_NXZ
    virtual bool CanSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStyleParser@HWNDElement@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateStyleParser(::DirectUI::DUIXmlParser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleImpl@HWNDElement@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@HWNDElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@HWNDElement@DirectUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowClassNameAndStyle@HWNDElement@DirectUI@@UEAAXPEAPEBGPEAI@Z
    virtual void GetWindowClassNameAndStyle(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMSAAEnabled@HWNDElement@DirectUI@@UEAA_NXZ
    virtual bool IsMSAAEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionChanged@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnCompositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@HWNDElement@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@HWNDElement@DirectUI@@UEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupChanged@HWNDElement@DirectUI@@UEAAXH_N@Z
    virtual void OnGroupChanged(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmersiveColorSchemeChanged@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnImmersiveColorSchemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@HWNDElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoChildWithShortcutFound@HWNDElement@DirectUI@@UEAAXPEAUKeyboardEvent@2@@Z
    virtual void OnNoChildWithShortcutFound(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@HWNDElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@HWNDElement@DirectUI@@UEAAXPEAUThemeChangedEvent@2@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmSettingChanged@HWNDElement@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmSettingChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmThemeChanged@HWNDElement@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmThemeChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTooltip@HWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void RemoveTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltip@HWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void UpdateTooltip(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@HWNDElement@DirectUI@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnUIStateChanged@HWNDElement@DirectUI@@MEAAXGG@Z
    virtual void _OnUIStateChanged(unsigned short, unsigned short);
};
} // namespace DirectUI
