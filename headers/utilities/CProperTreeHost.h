#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 137 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
class CProperTreeHost {
public:
    class AppAndEnterpriseIds;
    class NavigateToAsyncWorkItem;
    class OnNavigateAsyncWorkItem;
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CProperTreeHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProperTreeHost@@QEAA@XZ
    CProperTreeHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleName@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAPEAG@Z
    virtual long GetAccessibleName(IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CProperTreeHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CProperTreeHost@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialExpand@CProperTreeHost@@QEAA_NXZ
    bool GetInitialExpand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrderStream@CProperTreeHost@@UEAAJPEAUIShellItem@@KPEAPEAUIStream@@@Z
    virtual long GetOrderStream(IShellItem *, unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CProperTreeHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CProperTreeHost@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CProperTreeHost@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CProperTreeHost@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?ItemPostPaint@CProperTreeHost@@UEAAJPEAUHDC__@@PEAUtagRECT@@PEAUNSTCCUSTOMDRAW@@@Z
    virtual long ItemPostPaint(HDC__*, tagRECT *, NSTCCUSTOMDRAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemPrePaint@CProperTreeHost@@UEAAJPEAUHDC__@@PEAUtagRECT@@PEAUNSTCCUSTOMDRAW@@PEAK3PEA_J@Z
    virtual long ItemPrePaint(HDC__*, tagRECT *, NSTCCUSTOMDRAW *, unsigned long *, unsigned long *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterContextMenu@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUIContextMenu@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnAfterContextMenu(IShellItem *, IContextMenu *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterExpand@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnAfterExpand(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeContextMenu@CProperTreeHost@@UEAAJPEAUIShellItem@@AEBU_GUID@@PEAPEAX@Z
    virtual long OnBeforeContextMenu(IShellItem *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeExpand@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeExpand(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeItemDelete@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeItemDelete(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeStateImageChange@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeforeStateImageChange(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeginLabelEdit@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeginLabelEdit(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CProperTreeHost@@UEAAJXZ
    virtual long OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CProperTreeHost@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoDefaultAccessibilityAction@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnDoDefaultAccessibilityAction(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDragEnter@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUIShellItemArray@@HKPEAK@Z
    virtual long OnDragEnter(IShellItem *, IShellItemArray *, int, unsigned long, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDragLeave@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnDragLeave(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDragOver@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUIShellItemArray@@KPEAK@Z
    virtual long OnDragOver(IShellItem *, IShellItemArray *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragPosition@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUIShellItemArray@@HH@Z
    virtual long OnDragPosition(IShellItem *, IShellItemArray *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUIShellItemArray@@HKPEAK@Z
    virtual long OnDrop(IShellItem *, IShellItemArray *, int, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropPosition@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUIShellItemArray@@HH@Z
    virtual long OnDropPosition(IShellItem *, IShellItemArray *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEndLabelEdit@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnEndLabelEdit(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnumDone@CProperTreeHost@@UEAAJPEAUIShellFolder@@H@Z
    virtual long OnEnumDone(IShellFolder *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetAccessibilityRole@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAUtagVARIANT@@@Z
    virtual long OnGetAccessibilityRole(IShellItem *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDefaultAccessibilityAction@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAPEAG@Z
    virtual long OnGetDefaultAccessibilityAction(IShellItem *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDefaultIconIndex@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAH1@Z
    virtual long OnGetDefaultIconIndex(IShellItem *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetItemCustomState@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnGetItemCustomState(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetToolTip@CProperTreeHost@@UEAAJPEAUIShellItem@@PEAGH@Z
    virtual long OnGetToolTip(IShellItem *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@CProperTreeHost@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemAdded@CProperTreeHost@@UEAAJPEAUIShellItem@@H@Z
    virtual long OnItemAdded(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@CProperTreeHost@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemClick(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemDeleted@CProperTreeHost@@UEAAJPEAUIShellItem@@H@Z
    virtual long OnItemDeleted(IShellItem *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemStateChanged@CProperTreeHost@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemStateChanged(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemStateChanging@CProperTreeHost@@UEAAJPEAUIShellItem@@KK@Z
    virtual long OnItemStateChanging(IShellItem *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardInput@CProperTreeHost@@UEAAJI_K_J@Z
    virtual long OnKeyboardInput(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CProperTreeHost@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyItemCommit@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long OnPropertyItemCommit(IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChanged@CProperTreeHost@@UEAAJPEAUIShellItemArray@@@Z
    virtual long OnSelectionChanged(IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabletModeChanged@CProperTreeHost@@UEAAJXZ
    virtual long OnTabletModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistChildItemsOrder@CProperTreeHost@@UEAAJHPEAUIShellItem@@@Z
    virtual long PersistChildItemsOrder(int, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?PostPaint@CProperTreeHost@@UEAAJPEAUHDC__@@PEAUtagRECT@@@Z
    virtual long PostPaint(HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrePaint@CProperTreeHost@@UEAAJPEAUHDC__@@PEAUtagRECT@@PEA_J@Z
    virtual long PrePaint(HDC__*, tagRECT *, int64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProperTreeHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CProperTreeHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CProperTreeHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialExpand@CProperTreeHost@@QEAAJ_N@Z
    long SetInitialExpand(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropBag@CProperTreeHost@@QEAAXPEAUIPropertyBag@@@Z
    void SetPropBag(IPropertyBag *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CProperTreeHost@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldReorderChildItems@CProperTreeHost@@UEAAJPEAUIShellItem@@@Z
    virtual long ShouldReorderChildItems(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CProperTreeHost@@QEAAJPEAUtagMSG@@@Z
    long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSetting@CProperTreeHost@@UEAAJW4UPDATESETTING@@@Z
    virtual long UpdateSetting(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettingForMenu@CProperTreeHost@@QEAAJW4UPDATESETTING@@@Z
    long UpdateSettingForMenu(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCFDAppRoots@CProperTreeHost@@AEAAXK@Z
    void AppendCFDAppRoots(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptPrependRoots@CProperTreeHost@@AEAAXXZ
    void AttemptPrependRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheAppEnterpriseIds@CProperTreeHost@@AEAAJPEAUIShellItem@@@Z
    long CacheAppEnterpriseIds(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAppNodesFilter@CProperTreeHost@@AEAAXXZ
    void ClearAppNodesFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CProperTreeHost@@EEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWNDInternal@CProperTreeHost@@AEAAJPEAUHWND__@@@Z
    long CreateHWNDInternal(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNeededFolders@CProperTreeHost@@AEAAJXZ
    long EnsureNeededFolders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterAppNodes@CProperTreeHost@@AEAAXPEBG@Z
    void FilterAppNodes(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTextColor@CProperTreeHost@@AEAAKW4ColorIndex@@_N@Z
    unsigned long GetSpecialTextColor(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewItemWithoutUpdateShellItemAppContext@CProperTreeHost@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long GetViewItemWithoutUpdateShellItemAppContext(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDropPosition@CProperTreeHost@@AEAA_NHH@Z
    bool IsValidDropPosition(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAsyncCancel@CProperTreeHost@@AEAAXXZ
    void NavigateAsyncCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToAsync@CProperTreeHost@@AEAAJPEAUIShellItem@@K@Z
    long NavigateToAsync(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToAsyncComplete@CProperTreeHost@@AEAAXXZ
    void NavigateToAsyncComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CProperTreeHost@@EEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAsync@CProperTreeHost@@AEAAXXZ
    void OnNavigateAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAsyncComplete@CProperTreeHost@@AEAAXXZ
    void OnNavigateAsyncComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupPinnedImageList@CProperTreeHost@@AEAAJPEAUHWND__@@@Z
    long SetupPinnedImageList(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFadingExpandoStyle@CProperTreeHost@@AEAAXXZ
    void UpdateFadingExpandoStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellItemAppContext@CProperTreeHost@@CAJPEAUIShellItem@@@Z
    static long UpdateShellItemAppContext(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTreeRoot@CProperTreeHost@@AEAAJXZ
    long ValidateTreeRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendAppNodes@CProperTreeHost@@AEAAJXZ
    long _AppendAppNodes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToView@CProperTreeHost@@AEAAJH@Z
    long _ConnectToView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLibraries@CProperTreeHost@@AEAAJXZ
    long _EnsureLibraries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRootsInitialized@CProperTreeHost@@AEAAXXZ
    void _EnsureRootsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandItemInTree@CProperTreeHost@@AEAAJPEAUIShellItem@@K@Z
    long _ExpandItemInTree(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumFlags@CProperTreeHost@@AEAAKXZ
    unsigned long _GetEnumFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemExpandedState@CProperTreeHost@@AEAA_NPEAUIShellItem@@@Z
    bool _GetItemExpandedState(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CProperTreeHost@@AEAAJPEAPEAUIShellItem@@@Z
    long _GetSelectedItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_GetSetColorProp@CProperTreeHost@@AEAAXPEBUPropertyInfo@DirectUI@@PEAUIVisualProperties@@W4VPCOLORFLAGS@@@Z
    void _GetSetColorProp(::DirectUI::PropertyInfo const *, IVisualProperties *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewItem@CProperTreeHost@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetViewItem(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAppLocationsExpanded@CProperTreeHost@@AEAA_NXZ
    bool _IsAppLocationsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInCFD@CProperTreeHost@@AEAA_NXZ
    bool _IsInCFD();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRemovableAndNotInCFD@CProperTreeHost@@AEAA_NPEAUIShellItem@@@Z
    bool _IsRemovableAndNotInCFD(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadOrInitExpandedState@CProperTreeHost@@AEAAJXZ
    long _LoadOrInitExpandedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeGetAppLocations@CProperTreeHost@@AEAAJXZ
    long _MaybeGetAppLocations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeGetBrowserNavigationRoot@CProperTreeHost@@AEAAJXZ
    long _MaybeGetBrowserNavigationRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateTo@CProperTreeHost@@AEAAJPEAUIShellItem@@K@Z
    long _NavigateTo(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNavigate@CProperTreeHost@@AEAAXXZ
    void _OnNavigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshCompColorSetting@CProperTreeHost@@AEAAXXZ
    void _RefreshCompColorSetting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveExpandedState@CProperTreeHost@@AEAAJXZ
    long _SaveExpandedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetColors@CProperTreeHost@@AEAAXXZ
    void _SetColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPositioningValues@CProperTreeHost@@AEAAJXZ
    long _SetPositioningValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldPersistExpandedState@CProperTreeHost@@AEAA_NPEAUIShellItem@@@Z
    bool _ShouldPersistExpandedState(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShowNavigationRoots@CProperTreeHost@@AEAA_NXZ
    bool _ShouldShowNavigationRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SqmDirectParentMoveOperation@CProperTreeHost@@AEAAXPEAUIShellItem@@@Z
    void _SqmDirectParentMoveOperation(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProperTreeHost@@EEAA@XZ
    virtual ~CProperTreeHost();
};
