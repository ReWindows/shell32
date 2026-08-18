#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 77 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CStatusBarModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CStatusBarModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStatusBarModuleInner@@QEAA@XZ
    CStatusBarModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStatusBarModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@CStatusBarModuleInner@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CStatusBarModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CStatusBarModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CStatusBarModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CStatusBarModuleInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CStatusBarModuleInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanged@CStatusBarModuleInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CStatusBarModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CStatusBarModuleInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesFetched@CStatusBarModuleInner@@QEAAXAEBU_tagpropertykey@@PEAUIPropertyStoreCache@@@Z
    void OnPropertiesFetched(_tagpropertykey const &, IPropertyStoreCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@CStatusBarModuleInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CStatusBarModuleInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStatusBarModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CStatusBarModuleInner@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CStatusBarModuleInner@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CStatusBarModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CStatusBarModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleSearchDisclaimerAndLinkVisibility@CStatusBarModuleInner@@QEAAJ_N@Z
    long ToggleSearchDisclaimerAndLinkVisibility(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStatusBarModuleInner@@UEAA@XZ
    virtual ~CStatusBarModuleInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchProperties@CStatusBarModuleInner@@AEAAX_N0AEBUhstring@winrt@@@Z
    void FetchProperties(bool, bool, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchScope@CStatusBarModuleInner@@AEAAJPEAPEAUIShellItem@@@Z
    long GetSearchScope(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchFolder@CStatusBarModuleInner@@AEAAJPEA_N@Z
    long IsSearchFolder(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleBarHeight@CStatusBarModuleInner@@AEAAXPEAUHWND__@@AEBUtagLOGFONTW@@@Z
    void ScaleBarHeight(HWND__*, tagLOGFONTW const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleTextSizeAndBarHeight@CStatusBarModuleInner@@AEAAXXZ
    void ScaleTextSizeAndBarHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScopeRequiresDisclaimer@CStatusBarModuleInner@@AEAAJPEA_N0PEAPEAG@Z
    long ScopeRequiresDisclaimer(bool *, bool *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScopeRequiresDisclaimer_Old@CStatusBarModuleInner@@AEAAJPEA_N@Z
    long ScopeRequiresDisclaimer_Old(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisclaimerText@CStatusBarModuleInner@@AEAAJXZ
    long SetDisclaimerText();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemedViewIcon@CStatusBarModuleInner@@AEAAXPEAVElement@DirectUI@@H@Z
    void SetThemedViewIcon(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGetPropertiesWorkItem@CStatusBarModuleInner@@AEAAJ_N0AEBUhstring@winrt@@@Z
    long StartGetPropertiesWorkItem(bool, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisclaimerVisibility@CStatusBarModuleInner@@AEAAXPEA_NPEAPEAG@Z
    void UpdateDisclaimerVisibility(bool *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisclaimerVisibility_Old@CStatusBarModuleInner@@AEAAXXZ
    void UpdateDisclaimerVisibility_Old();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeOnViewIcons@CStatusBarModuleInner@@AEAAXXZ
    void UpdateThemeOnViewIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewButtonsVisibility@CStatusBarModuleInner@@AEAAXXZ
    void UpdateViewButtonsVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendButtonField@CStatusBarModuleInner@@AEAAJPEAVDUIXmlParser@DirectUI@@PEAVElement@3@PEAUIPropertyStoreCache@@PEAUIPropertyDescription@@@Z
    long _AppendButtonField(::DirectUI::DUIXmlParser *, ::DirectUI::Element *, IPropertyStoreCache *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendProperty@CStatusBarModuleInner@@AEAAJPEAVDUIXmlParser@DirectUI@@PEAVElement@3@PEAUIPropertyStoreCache@@PEAUIPropertyDescription@@@Z
    long _AppendProperty(::DirectUI::DUIXmlParser *, ::DirectUI::Element *, IPropertyStoreCache *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendPropertyField@CStatusBarModuleInner@@AEAAJPEAVDUIXmlParser@DirectUI@@PEAVElement@3@PEAUIPropertyDescription@@PEAUIPropertyValue@@@Z
    long _AppendPropertyField(::DirectUI::DUIXmlParser *, ::DirectUI::Element *, IPropertyDescription *, IPropertyValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendStaticTextPropertyField@CStatusBarModuleInner@@AEAAJPEAVDUIXmlParser@DirectUI@@PEAVElement@3@PEAUIPropertyStoreCache@@PEAUIPropertyDescription@@@Z
    long _AppendStaticTextPropertyField(::DirectUI::DUIXmlParser *, ::DirectUI::Element *, IPropertyStoreCache *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelOldGetPropertiesWorkItem@CStatusBarModuleInner@@AEAAXXZ
    void _CancelOldGetPropertiesWorkItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearProperties@CStatusBarModuleInner@@AEAAXXZ
    void _ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFieldElement@CStatusBarModuleInner@@AEAAJPEAVDUIXmlParser@DirectUI@@PEBGPEAUIPropertyDescription@@PEAPEAVElement@3@@Z
    long _CreateFieldElement(::DirectUI::DUIXmlParser *, unsigned short const *, IPropertyDescription *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FetchProperties_Old@CStatusBarModuleInner@@AEAAX_N@Z
    void _FetchProperties_Old(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItemArraySelected@CStatusBarModuleInner@@AEAAJPEAUIFolderView@@PEAPEAUIShellItemArray@@PEAI@Z
    long _GetShellItemArraySelected(IFolderView *, IShellItemArray * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItemArrayView@CStatusBarModuleInner@@AEAAJPEAUIFolderView@@PEAPEAUIShellItemArray@@PEAI@Z
    long _GetShellItemArrayView(IFolderView *, IShellItemArray * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibilitySettingFromRegistry@CStatusBarModuleInner@@AEAA_NXZ
    bool _GetVisibilitySettingFromRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasDrawControl@CStatusBarModuleInner@@AEAAHPEAUIPropertyDescription@@@Z
    int _HasDrawControl(IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CStatusBarModuleInner@@AEAAJPEAPEAVElement@DirectUI@@@Z
    long _Initialize(::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeVerb@CStatusBarModuleInner@@AEAAXPEBG@Z
    void _InvokeVerb(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsButtonProperty@CStatusBarModuleInner@@AEAAHPEAUIPropertyStoreCache@@PEAUIPropertyDescription@@@Z
    int _IsButtonProperty(IPropertyStoreCache *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMetadataInteractionEvent@CStatusBarModuleInner@@AEAAXPEAVCMetadataElement@@W4REASON@MetadataInteractionEvent@@PEBGH@Z
    void _OnMetadataInteractionEvent(CMetadataElement *, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateProperties@CStatusBarModuleInner@@AEAAXAEBU_tagpropertykey@@PEAUIPropertyStoreCache@@@Z
    void _PopulateProperties(_tagpropertykey const &, IPropertyStoreCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetOverflowLayout@CStatusBarModuleInner@@AEAAJPEAVElement@DirectUI@@@Z
    long _SetOverflowLayout(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPropertyLabel@CStatusBarModuleInner@@AEAAJPEAVElement@DirectUI@@PEAUIPropertyDescription@@@Z
    long _SetPropertyLabel(::DirectUI::Element *, IPropertyDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewMode@CStatusBarModuleInner@@AEAAXW4FOLDERVIEWMODE@@H@Z
    void _SetViewMode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartGetPropertiesWorkItem_Old@CStatusBarModuleInner@@AEAAJ_N@Z
    long _StartGetPropertiesWorkItem_Old(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrackFetchProperties@CStatusBarModuleInner@@AEAAXW4TRACKOPERATIONEVENT@@@Z
    void _TrackFetchProperties(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRadioButton@CStatusBarModuleInner@@AEAAXPEAVElement@DirectUI@@H@Z
    void _UpdateRadioButton(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateViewButtons@CStatusBarModuleInner@@AEAAXXZ
    void _UpdateViewButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVisibility@CStatusBarModuleInner@@AEAAXH@Z
    void _UpdateVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HideLastSyncedProperty@CStatusBarModuleInner@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_HideLastSyncedProperty(GMA_ACTIONINFO *);
};
