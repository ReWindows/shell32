#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 44 member(s).
namespace DirectUI {
class Element {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Element@DirectUI@@UEAAJPEAPEAV12@I@Z
    virtual long Add(Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBehavior@Element@DirectUI@@UEAAJPEAUIDuiBehavior@@@Z
    virtual long AddBehavior(IDuiBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@Element@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@Element@DirectUI@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleImpl@Element@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@Element@DirectUI@@UEAAPEAV12@PEAV12@HPEBUNavReference@2@K@Z
    virtual Element * GetAdjacent(Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@Element@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStringAsDisplayed@Element@DirectUI@@UEAAPEBGPEAPEAVValue@2@@Z
    virtual unsigned short const * GetContentStringAsDisplayed(::DirectUI::Value * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@Element@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveFocusRectOffsets@Element@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyFocused@Element@DirectUI@@UEAA_NXZ
    virtual bool GetKeyFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAElementProvider@Element@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetUIAElementProvider(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUiaFocusDelegate@Element@DirectUI@@UEAAPEAV12@XZ
    virtual Element * GetUiaFocusDelegate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaDestroyListener@Element@DirectUI@@UEAAXXZ
    virtual void HandleUiaDestroyListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaEventListener@Element@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void HandleUiaEventListener(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyChangingListener@Element@DirectUI@@UEAAXPEBUPropertyInfo@2@@Z
    virtual void HandleUiaPropertyChangingListener(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleUiaPropertyListener@Element@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void HandleUiaPropertyListener(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Element@DirectUI@@UEAAJPEAPEAV12@II@Z
    virtual long Insert(Element * *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentProtected@Element@DirectUI@@UEAA_NXZ
    virtual bool IsContentProtected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTLReading@Element@DirectUI@@UEAA_NXZ
    virtual bool IsRTLReading();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@Element@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@Element@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@Element@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupChanged@Element@DirectUI@@UEAAXH_N@Z
    virtual void OnGroupChanged(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@Element@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@Element@DirectUI@@UEAAXPEAV12@0@Z
    virtual void OnKeyFocusMoved(Element *, Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseFocusMoved@Element@DirectUI@@UEAAXPEAV12@0@Z
    virtual void OnMouseFocusMoved(Element *, Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@Element@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@Element@DirectUI@@UEAAXPEAUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@Element@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@Element@DirectUI@@UEAA_NPEAUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@Element@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Element@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Element@DirectUI@@UEAAJPEAPEAV12@I@Z
    virtual long Remove(Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBehavior@Element@DirectUI@@UEAAJPEAUIDuiBehavior@@@Z
    virtual long RemoveBehavior(IDuiBehavior *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocus@Element@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Element@DirectUI@@UEAA@XZ
    virtual ~Element();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@Element@DirectUI@@MEAAXPEAV12@K@Z
    virtual void ActivateTooltip(Element *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void OnHosted(Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void OnUnHosted(Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTooltip@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void RemoveTooltip(Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltip@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void UpdateTooltip(Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@Element@DirectUI@@MEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@Element@DirectUI@@MEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
} // namespace DirectUI
