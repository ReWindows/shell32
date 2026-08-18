#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CReadingPaneModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CReadingPaneModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadingPaneModuleInner@@QEAA@XZ
    CReadingPaneModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CReadingPaneModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CReadingPaneModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CReadingPaneModuleInner@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CReadingPaneModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CReadingPaneModuleInner@@QEAAJXZ
    long Load();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CReadingPaneModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActiveStateChanged@CReadingPaneModuleInner@@UEAAJPEAUIBrowserWithActivationNotification@@@Z
    virtual long OnActiveStateChanged(IBrowserWithActivationNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CReadingPaneModuleInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CReadingPaneModuleInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChanged@CReadingPaneModuleInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CReadingPaneModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CReadingPaneModuleInner@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CReadingPaneModuleInner@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CReadingPaneModuleInner@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CReadingPaneModuleInner@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CReadingPaneModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CReadingPaneModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CReadingPaneModuleInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@CReadingPaneModuleInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CReadingPaneModuleInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReadingPaneModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CReadingPaneModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CReadingPaneModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorIO@CReadingPaneModuleInner@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CReadingPaneModuleInner@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextSizeChanged@CReadingPaneModuleInner@@IEAAX_N@Z
    void TextSizeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectSqmData@CReadingPaneModuleInner@@IEAAXPEAUIShellItem@@@Z
    void _CollectSqmData(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCoverPage@CReadingPaneModuleInner@@IEAAPEAVElement@DirectUI@@PEBG@Z
    ::DirectUI::Element * _EnsureCoverPage(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTrustButton@CReadingPaneModuleInner@@IEAAXXZ
    void _EnsureTrustButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueUpdateWorkItem@CReadingPaneModuleInner@@IEAAJAEBUREADINGPANE_UPDATE_PARAMS@@@Z
    long _QueueUpdateWorkItem(READINGPANE_UPDATE_PARAMS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SQMReportStatusIfPreviewed@CReadingPaneModuleInner@@IEAAXXZ
    void _SQMReportStatusIfPreviewed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCoverSheetText@CReadingPaneModuleInner@@IEAAXPEBG@Z
    void _SetCoverSheetText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCurrentCLSID@CReadingPaneModuleInner@@IEAAXAEBU_GUID@@@Z
    void _SetCurrentCLSID(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@CReadingPaneModuleInner@@IEAAJXZ
    long _Update();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCoverSheets@CReadingPaneModuleInner@@IEAAXW4COVER_SHEET_STATE@1@PEBGJ@Z
    void _UpdateCoverSheets(int, unsigned short const *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadingPaneModuleInner@@MEAA@XZ
    virtual ~CReadingPaneModuleInner();
};
