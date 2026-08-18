#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 196 member(s).
class CExplorerBrowser {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerBrowser@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CExplorerBrowser@@UEAAJPEAUIExplorerBrowserEvents@@PEAK@Z
    virtual long Advise(IExplorerBrowserEvents *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseItem@CExplorerBrowser@@UEAAJPEAUIShellItem@@I@Z
    virtual long BrowseItem(IShellItem *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseObject@CExplorerBrowser@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    virtual long BrowseObject(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseToIDList@CExplorerBrowser@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    virtual long BrowseToIDList(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseToObject@CExplorerBrowser@@UEAAJPEAUIUnknown@@I@Z
    virtual long BrowseToObject(IUnknown *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerBrowser@@QEAA@XZ
    CExplorerBrowser();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CExplorerBrowser@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CExplorerBrowser@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableModelessSB@CExplorerBrowser@@UEAAJH@Z
    virtual long EnableModelessSB(int);
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CExplorerBrowser@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnectionPoints@CExplorerBrowser@@UEAAJPEAPEAUIEnumConnectionPoints@@@Z
    virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CExplorerBrowser@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillFromObject@CExplorerBrowser@@UEAAJPEAUIUnknown@@W4EXPLORER_BROWSER_FILL_FLAGS@@@Z
    virtual long FillFromObject(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnectionPoint@CExplorerBrowser@@UEAAJAEBU_GUID@@PEAPEAUIConnectionPoint@@@Z
    virtual long FindConnectionPoint(_GUID const &, IConnectionPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByIndex@CExplorerBrowser@@UEAAJKPEAPEAUIUnknown@@@Z
    virtual long FindWindowByIndex(unsigned long, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByIndex@CExplorerBrowser@@UEAAJKPEAU_GUID@@PEAPEAUIUnknown@@@Z
    virtual long FindWindowByIndex(unsigned long, _GUID *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CExplorerBrowser@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorder@CExplorerBrowser@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBorder(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserIndex@CExplorerBrowser@@UEAAKXZ
    virtual unsigned long GetBrowserIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CExplorerBrowser@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetControlWindow@CExplorerBrowser@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetControlWindow(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFilter@CExplorerBrowser@@UEAAJPEAGH@Z
    virtual long GetCurrentFilter(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentItem@CExplorerBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CExplorerBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentView(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultMenuText@CExplorerBrowser@@UEAAJPEAUIShellView@@PEAGH@Z
    virtual long GetDefaultMenuText(IShellView *, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDummyWindowData@CExplorerBrowser@@UEAAJPEBG0PEAUIStream@@PEAU_WINDOWDATA@@@Z
    virtual long GetDummyWindowData(unsigned short const *, unsigned short const *, IStream *, _WINDOWDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderViewOptions@CExplorerBrowser@@UEAAJPEAW4FOLDERVIEWOPTIONS@@@Z
    virtual long GetFolderViewOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryObject@CExplorerBrowser@@UEAAJPEAPEAUIOleObject@@PEAPEAUIStream@@PEAPEAUIBindCtx@@@Z
    virtual long GetHistoryObject(IOleObject * *, IStream * *, IBindCtx * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@CExplorerBrowser@@UEAAJPEAW4EXPLORER_BROWSER_OPTIONS@@@Z
    virtual long GetOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CExplorerBrowser@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingItem@CExplorerBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPendingItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidl@CExplorerBrowser@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCookie@CExplorerBrowser@@UEAAJPEAK@Z
    virtual long GetPositionCookie(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBag@CExplorerBrowser@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyBag(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTravelLog@CExplorerBrowser@@UEAAJPEAPEAUITravelLog@@@Z
    virtual long GetTravelLog(ITravelLog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFlags@CExplorerBrowser@@UEAAJPEAK@Z
    virtual long GetViewFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFrame@CExplorerBrowser@@UEAAJPEAPEAUIViewFrame@@@Z
    virtual long GetViewFrame(IViewFrame * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetViewStateStream@CExplorerBrowser@@UEAAJKPEAPEAUIStream@@@Z
    virtual long GetViewStateStream(unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CExplorerBrowser@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowData@CExplorerBrowser@@UEAAJPEAUIStream@@PEAU_WINDOWDATA@@@Z
    virtual long GetWindowData(IStream *, _WINDOWDATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CExplorerBrowser@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeObject@CExplorerBrowser@@UEAAJPEAUIShellView@@PEFBU_ITEMID_CHILD@@@Z
    virtual long IncludeObject(IShellView *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExplorerBrowser@@UEAAJPEAUHWND__@@PEBUtagRECT@@PEBUFOLDERSETTINGS@@@Z
    virtual long Initialize(HWND__*, tagRECT const *, FOLDERSETTINGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CExplorerBrowser@@UEAAJPEAUHWND__@@PEAUIDataObject@@PEAUtagRECT@@@Z
    virtual long Initialize(HWND__*, IDataObject *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CExplorerBrowser@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InsertMenusSB@CExplorerBrowser@@UEAAJPEAUHMENU__@@PEAUtagOleMenuGroupWidths@@@Z
    virtual long InsertMenusSB(HMENU__*, tagOleMenuGroupWidths *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CExplorerBrowser@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistory@CExplorerBrowser@@UEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    virtual long LoadHistory(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHistoryPosition@CExplorerBrowser@@UEAAJPEAGK@Z
    virtual long LoadHistoryPosition(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CExplorerBrowser@@UEAAJPEAUIShellView@@K@Z
    virtual long Notify(IShellView *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnClicked@CExplorerBrowser@@UEAAJPEAUIShellView@@H@Z
    virtual long OnColumnClicked(IShellView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultCommand@CExplorerBrowser@@UEAAJPEAUIShellView@@@Z
    virtual long OnDefaultCommand(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreViewCreated@CExplorerBrowser@@UEAAJPEAUIShellView@@@Z
    virtual long OnPreViewCreated(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CExplorerBrowser@@UEAAJPEAUIShellView@@K@Z
    virtual long OnStateChange(IShellView *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewWindowActive@CExplorerBrowser@@UEAAJPEAUIShellView@@@Z
    virtual long OnViewWindowActive(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryActiveShellView@CExplorerBrowser@@UEAAJPEAPEAUIShellView@@@Z
    virtual long QueryActiveShellView(IShellView * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CExplorerBrowser@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CExplorerBrowser@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryStatus@CExplorerBrowser@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshViewFrame@CExplorerBrowser@@UEAAJXZ
    virtual long RefreshViewFrame();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerBrowser@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@CExplorerBrowser@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveMenusSB@CExplorerBrowser@@UEAAJPEAUHMENU__@@@Z
    virtual long RemoveMenusSB(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBorderSpace@CExplorerBrowser@@UEAAJPEBUtagRECT@@@Z
    virtual long RequestBorderSpace(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveHistory@CExplorerBrowser@@UEAAJPEAUIStream@@@Z
    virtual long SaveHistory(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveHistoryEx@CExplorerBrowser@@UEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    virtual long SaveHistoryEx(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendControlMsg@CExplorerBrowser@@UEAAJII_K_JPEA_J@Z
    virtual long SendControlMsg(unsigned int, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibleName@CExplorerBrowser@@UEAAJPEBG@Z
    virtual long SetAccessibleName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveObject@CExplorerBrowser@@UEAAJPEAUIOleInPlaceActiveObject@@PEBG@Z
    virtual long SetActiveObject(IOleInPlaceActiveObject *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderSpace@CExplorerBrowser@@UEAAJPEBUtagRECT@@@Z
    virtual long SetBorderSpace(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyText@CExplorerBrowser@@UEAAJPEBG@Z
    virtual long SetEmptyText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@CExplorerBrowser@@UEAAJPEAUIUnknown@@@Z
    virtual long SetFilter(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFolderSettings@CExplorerBrowser@@UEAAJPEBUFOLDERSETTINGS@@@Z
    virtual long SetFolderSettings(FOLDERSETTINGS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFolderViewOptions@CExplorerBrowser@@UEAAJW4FOLDERVIEWOPTIONS@@0@Z
    virtual long SetFolderViewOptions(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMenuSB@CExplorerBrowser@@UEAAJPEAUHMENU__@@PEAXPEAUHWND__@@@Z
    virtual long SetMenuSB(HMENU__*, void *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CExplorerBrowser@@UEAAJW4EXPLORER_BROWSER_OPTIONS@@@Z
    virtual long SetOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionCookie@CExplorerBrowser@@UEAAJK@Z
    virtual long SetPositionCookie(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyBag@CExplorerBrowser@@UEAAJPEBG@Z
    virtual long SetPropertyBag(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CExplorerBrowser@@UEAAJPEAPEAXUtagRECT@@@Z
    virtual long SetRect(void * *, tagRECT);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStatusTextSB@CExplorerBrowser@@UEAAJPEBG@Z
    virtual long SetStatusTextSB(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToolbarItems@CExplorerBrowser@@UEAAJPEAU_TBBUTTON@@II@Z
    virtual long SetToolbarItems(_TBBUTTON *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorGlobal@CExplorerBrowser@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorGlobal(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CExplorerBrowser@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateAcceleratorSB@CExplorerBrowser@@UEAAJPEAUtagMSG@@G@Z
    virtual long TranslateAcceleratorSB(tagMSG *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CExplorerBrowser@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CExplorerBrowser@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkComplete@CExplorerBrowser@@UEAAJJ@Z
    virtual long WalkComplete(long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyFolderSettings@CExplorerBrowser@@AEAAJPEAUIShellView@@@Z
    long _ApplyFolderSettings(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseInViewFromTL@CExplorerBrowser@@AEAAJKPEAUIStream@@PEAUIBindCtx@@@Z
    long _BrowseInViewFromTL(unsigned long, IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseObjectInternal@CExplorerBrowser@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    long _BrowseObjectInternal(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseToResultsFolder@CExplorerBrowser@@AEAAJW4EXPLORER_BROWSER_FILL_FLAGS@@@Z
    long _BrowseToResultsFolder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseToView@CExplorerBrowser@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    long _BrowseToView(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseToViewFromTL@CExplorerBrowser@@AEAAJPEAUIStream@@PEAUIBindCtx@@@Z
    long _BrowseToViewFromTL(IStream *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanNavigate@CExplorerBrowser@@AEAAJI@Z
    long _CanNavigate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelCurrentView@CExplorerBrowser@@AEAAXXZ
    void _CancelCurrentView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupFrame@CExplorerBrowser@@AEAAXXZ
    void _CleanupFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateViewWindow@CExplorerBrowser@@AEAAJPEBUtagRECT@@PEAPEAUHWND__@@@Z
    long _CreateViewWindow(tagRECT const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetermineInitialViewMode@CExplorerBrowser@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAUFOLDERSETTINGS@@@Z
    long _DetermineInitialViewMode(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, FOLDERSETTINGS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetermineViewMode@CExplorerBrowser@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUFOLDERSETTINGS@@@Z
    long _DetermineViewMode(_ITEMIDLIST_ABSOLUTE const *, FOLDERSETTINGS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureNavigationWindow@CExplorerBrowser@@AEAAJXZ
    long _EnsureNavigationWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTrackEvents@CExplorerBrowser@@AEAAJXZ
    long _EnsureTrackEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFrameOrCurrentView@CExplorerBrowser@@AEAAJPEAPEAUHWND__@@@Z
    long _GetFrameOrCurrentView(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateNotifySuccess@CExplorerBrowser@@AEAAXXZ
    void _NavigateNotifySuccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBrowseObject@CExplorerBrowser@@AEAAJXZ
    long _OnBrowseObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFSNotify@CExplorerBrowser@@AEAAX_K_J@Z
    void _OnFSNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistViewState@CExplorerBrowser@@AEAAXPEAUIShellView@@@Z
    void _PersistViewState(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateWithWalkResults@CExplorerBrowser@@AEAAJW4EXPLORER_BROWSER_FILL_FLAGS@@PEAUIUnknown@@@Z
    long _PopulateWithWalkResults(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveHistory@CExplorerBrowser@@AEAAJPEAUIStream@@@Z
    long _SaveHistory(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveTopView@CExplorerBrowser@@AEAAXXZ
    void _SaveTopView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccessibleName@CExplorerBrowser@@AEAAJPEAUIShellView@@@Z
    long _SetAccessibleName(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetGroupBy@CExplorerBrowser@@AEAAXPEAUIShellView@@@Z
    void _SetGroupBy(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewRectAdjustForWrapper@CExplorerBrowser@@AEAAXAEBUtagRECT@@@Z
    void _SetViewRectAdjustForWrapper(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchView@CExplorerBrowser@@AEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@HPEAVTelemetryCorrelationVectorServiceProvider@@@Z
    long _SwitchView(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, int, TelemetryCorrelationVectorServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryBrowseToSameView@CExplorerBrowser@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    long _TryBrowseToSameView(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTravelLog@CExplorerBrowser@@AEAAJHH@Z
    long _UpdateTravelLog(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WaitCursor@CExplorerBrowser@@AEAAXH@Z
    void _WaitCursor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NavigationWndProc@CExplorerBrowser@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_NavigationWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CExplorerBrowser@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerBrowser@@EEAA@XZ
    virtual ~CExplorerBrowser();
};
