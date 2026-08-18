#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 31 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CControlPanelNavModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CControlPanelNavModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelNavModuleInner@@QEAA@XZ
    CControlPanelNavModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CControlPanelNavModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CControlPanelNavModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CControlPanelNavModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CControlPanelNavModuleInner@@QEAAJXZ
    long Load();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CControlPanelNavModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CControlPanelNavModuleInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CControlPanelNavModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelNavModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CControlPanelNavModuleInner@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@CControlPanelNavModuleInner@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelNavModuleInner@@MEAA@XZ
    virtual ~CControlPanelNavModuleInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableAppletModeLinks@CControlPanelNavModuleInner@@AEAAJ_N@Z
    long _EnableAppletModeLinks(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableSelectedCategoryLink@CControlPanelNavModuleInner@@AEAAJ_N@Z
    long _EnableSelectedCategoryLink(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FadeIn@CControlPanelNavModuleInner@@AEAAXPEAVElement@DirectUI@@H@Z
    void _FadeIn(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FadeOut@CControlPanelNavModuleInner@@AEAAXPEAVElement@DirectUI@@HPEAVCAnimationCallback@@@Z
    void _FadeOut(::DirectUI::Element *, int, CAnimationCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsSearchResults@CControlPanelNavModuleInner@@AEAAJXZ
    long _GetIsSearchResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Navigate@CControlPanelNavModuleInner@@AEAAXPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    void _Navigate(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowElementsForMode@CControlPanelNavModuleInner@@AEAAJXZ
    long _ShowElementsForMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAppletModeLinks@CControlPanelNavModuleInner@@AEAAXPEAVCControlPanelNavLinks@@@Z
    void _UpdateAppletModeLinks(CControlPanelNavLinks *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCategoryList@CControlPanelNavModuleInner@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _UpdateCategoryList(_ITEMIDLIST_ABSOLUTE const *);
};
