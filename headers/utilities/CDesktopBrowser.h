#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 163 member(s).
class CDesktopBrowser {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDesktopBrowser@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLayout@CDesktopBrowser@@UEAAJPEAUIUnknown@@PEAPEAU2@@Z
    virtual long AdjustLayout(IUnknown *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseItem@CDesktopBrowser@@UEAAJPEAUIShellItem@@I@Z
    virtual long BrowseItem(IShellItem *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrowseObject@CDesktopBrowser@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@I@Z
    virtual long BrowseObject(_ITEMIDLIST_RELATIVE & volatile *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopBrowser@@QEAA@PEAUIDeskTray@@@Z
    CDesktopBrowser(IDeskTray *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CDesktopBrowser@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateViewWindow@CDesktopBrowser@@UEAAJPEAUIShellItem@@PEAUIShellView@@1PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellItem *, IShellView *, IShellView *, tagRECT *, HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?DisplayParseError@CDesktopBrowser@@UEAAJJPEBG@Z
    virtual long DisplayParseError(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExpandedContextMenu@CDesktopBrowser@@UEAAXUtagPOINT@@HPEAU_GUID@@PEAU2@H@Z
    virtual void DoExpandedContextMenu(tagPOINT, int, _GUID *, tagPOINT *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?EnableModelessSB@CDesktopBrowser@@UEAAJH@Z
    virtual long EnableModelessSB(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CDesktopBrowser@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBrowserIndex@CDesktopBrowser@@UEAAKXZ
    virtual unsigned long GetBrowserIndex();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColumnPropertyList@CDesktopBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetColumnPropertyList(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetControlWindow@CDesktopBrowser@@UEAAJIPEAPEAUHWND__@@@Z
    virtual long GetControlWindow(unsigned int, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentItem@CDesktopBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentItem(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFlags@CDesktopBrowser@@UEAAJPEAK@Z
    virtual long GetFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CDesktopBrowser@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGroupByProperty@CDesktopBrowser@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGroupSubsetCount@CDesktopBrowser@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryObject@CDesktopBrowser@@UEAAJPEAPEAUIOleObject@@PEAPEAUIStream@@PEAPEAUIBindCtx@@@Z
    virtual long GetHistoryObject(IOleObject * *, IStream * *, IBindCtx * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIconSize@CDesktopBrowser@@UEAAJPEAI@Z
    virtual long GetIconSize(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNavigateState@CDesktopBrowser@@UEAAJPEAW4tagBNSTATE@@@Z
    virtual long GetNavigateState(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPalette@CDesktopBrowser@@UEAAJPEAPEAUHPALETTE__@@@Z
    virtual long GetPalette(HPALETTE__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPendingItem@CDesktopBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPendingItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidl@CDesktopBrowser@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBag@CDesktopBrowser@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyBag(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSortColumns@CDesktopBrowser@@UEAAJPEAUSORTCOLUMN@@IPEAI@Z
    virtual long GetSortColumns(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTitle@CDesktopBrowser@@UEAAJPEAUIShellView@@PEAGK@Z
    virtual long GetTitle(IShellView *, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTravelLog@CDesktopBrowser@@UEAAJPEAPEAUITravelLog@@@Z
    virtual long GetTravelLog(ITravelLog * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetViewMode@CDesktopBrowser@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetViewStateStream@CDesktopBrowser@@UEAAJKPEAPEAUIStream@@@Z
    virtual long GetViewStateStream(unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDesktopBrowser@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?InsertMenusSB@CDesktopBrowser@@UEAAJPEAUHMENU__@@PEAUtagOleMenuGroupWidths@@@Z
    virtual long InsertMenusSB(HMENU__*, tagOleMenuGroupWidths *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDesktopBrowser@@UEAAXPEAUIContextMenu@@PEAUIShellItemArray@@PEAUHMENU__@@IUtagPOINT@@@Z
    virtual void Invoke(IContextMenu *, IShellItemArray *, HMENU__*, unsigned int, tagPOINT);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsControlWindowShown@CDesktopBrowser@@UEAAJIPEAH@Z
    virtual long IsControlWindowShown(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CDesktopBrowser@@UEAAHPEAUIWallpaperWindow@@@Z
    virtual int OnAnimationComplete(IWallpaperWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CDesktopBrowser@@UEAAXXZ
    virtual void OnContextMenuDismiss();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFocusChangeIS@CDesktopBrowser@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateComplete@CDesktopBrowser@@UEAAXPEAUIWallpaperWindow@@@Z
    virtual void OnUpdateComplete(IWallpaperWindow *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewWindowActive@CDesktopBrowser@@UEAAJPEAUIShellView@@@Z
    virtual long OnViewWindowActive(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewWindowCreated@CDesktopBrowser@@UEAAJPEAUHWND__@@@Z
    virtual long OnViewWindowCreated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintWallpaper@CDesktopBrowser@@UEAAJPEAUHWND__@@PEAUHDC__@@@Z
    virtual long PaintWallpaper(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryActiveShellView@CDesktopBrowser@@UEAAJPEAPEAUIShellView@@@Z
    virtual long QueryActiveShellView(IShellView * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDesktopBrowser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDesktopBrowser@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryStatus@CDesktopBrowser@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindow@CDesktopBrowser@@UEAAJHH@Z
    virtual long RegisterWindow(int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDesktopBrowser@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveMenusSB@CDesktopBrowser@@UEAAJPEAUHMENU__@@@Z
    virtual long RemoveMenusSB(HMENU__*);
    // Category: Method | Source: PE Export
    // Symbol: ?SendControlMsg@CDesktopBrowser@@UEAAJII_K_JPEA_J@Z
    virtual long SendControlMsg(unsigned int, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAsDefFolderSettings@CDesktopBrowser@@UEAAJXZ
    virtual long SetAsDefFolderSettings();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFlags@CDesktopBrowser@@UEAAJKK@Z
    virtual long SetFlags(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CDesktopBrowser@@UEAAXXZ
    virtual void SetFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMenuSB@CDesktopBrowser@@UEAAJPEAUHMENU__@@PEAXPEAUHWND__@@@Z
    virtual long SetMenuSB(HMENU__*, void *, HWND__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNavigateState@CDesktopBrowser@@UEAAJW4tagBNSTATE@@@Z
    virtual long SetNavigateState(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStatusTextSB@CDesktopBrowser@@UEAAJPEBG@Z
    virtual long SetStatusTextSB(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToolbarItems@CDesktopBrowser@@UEAAJPEAU_TBBUTTON@@II@Z
    virtual long SetToolbarItems(_TBBUTTON *, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowControlWindow@CDesktopBrowser@@UEAAJIH@Z
    virtual long ShowControlWindow(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorSB@CDesktopBrowser@@UEAAJPEAUtagMSG@@G@Z
    virtual long TranslateAcceleratorSB(tagMSG *, unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateBackForwardState@CDesktopBrowser@@UEAAJXZ
    virtual long UpdateBackForwardState();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateWindowList@CDesktopBrowser@@UEAAJXZ
    virtual long UpdateWindowList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MessageLoop@CDesktopBrowser@@QEAAXXZ
    void _MessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DesktopWndProc@CDesktopBrowser@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DesktopWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsAnimationEnabled@CDesktopBrowser@@SA_NXZ
    static bool s_IsAnimationEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsWallpaperForcedSolid@CDesktopBrowser@@SA_NXZ
    static bool s_IsWallpaperForcedSolid();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustViewRectsForAppBars@CDesktopBrowser@@IEAAXIPEAUtagRECT@@@Z
    void AdjustViewRectsForAppBars(unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSettingsChanged@CDesktopBrowser@@IEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque BroadcastSettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSavedWindowsRestoreTabs@CDesktopBrowser@@KAJXZ
    static long CreateSavedWindowsRestoreTabs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContextMenuPresenter@CDesktopBrowser@@IEAAJXZ
    long EnsureContextMenuPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDispatcherQueueController@CDesktopBrowser@@IEAAJXZ
    long EnsureDispatcherQueueController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFileExplorerView@CDesktopBrowser@@IEAAJXZ
    long EnsureFileExplorerView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewRectsMinusToolbar@CDesktopBrowser@@IEAA_NIPEAUtagRECT@@@Z
    bool GetViewRectsMinusToolbar(unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeXamlApplication@CDesktopBrowser@@IEAAJXZ
    long InitializeXamlApplication();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXamlDesktopControllerEnabled@CDesktopBrowser@@IEAA_NXZ
    bool IsXamlDesktopControllerEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDesktopControllerEnableChanged@CDesktopBrowser@@IEAAX_N@Z
    void OnDesktopControllerEnableChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamingExperienceActiveChanged@CDesktopBrowser@@IEAAXXZ
    void OnGamingExperienceActiveChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateMessageCrossProcSafe@CDesktopBrowser@@IEAAXI_K_J@Z
    void PropagateMessageCrossProcSafe(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopWorkAreas@CDesktopBrowser@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    long SetDesktopWorkAreas(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopXamlIslandWorkAreas@CDesktopBrowser@@IEAAJXZ
    long SetDesktopXamlIslandWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewSize@CDesktopBrowser@@IEAAJ_NPEAUHWND__@@@Z
    long UpdateViewSize(bool, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewSize@CDesktopBrowser@@IEAAJ_N@Z
    long UpdateViewSize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateXamlViewSize@CDesktopBrowser@@IEAAJXZ
    long UpdateXamlViewSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateView@CDesktopBrowser@@IEAAJXZ
    long _ActivateView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDesktopTask@CDesktopBrowser@@IEAAJPEAUIRunnableTask@@K@Z
    long _AddDesktopTask(IRunnableTask *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnimatingWallpaper@CDesktopBrowser@@IEAA_NXZ
    bool _AnimatingWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndFadeWallpaper@CDesktopBrowser@@IEAAJK@Z
    long _CreateAndFadeWallpaper(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDesktopView@CDesktopBrowser@@IEAAJXZ
    long _CreateDesktopView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableTransparentView@CDesktopBrowser@@IEAAJ_N@Z
    long _EnableTransparentView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAutoColorization@CDesktopBrowser@@IEAAX_N@Z
    void _EnsureAutoColorization(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDesktopWallpaper@CDesktopBrowser@@IEAA_NXZ
    bool _EnsureDesktopWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListview@CDesktopBrowser@@IEAAPEAUHWND__@@PEAU2@@Z
    HWND__* _GetListview(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSlideshowEnableDisable@CDesktopBrowser@@IEAAXXZ
    void _HandleSlideshowEnableDisable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMonitors@CDesktopBrowser@@IEAAXXZ
    void _InitMonitors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitScheduler@CDesktopBrowser@@IEAAJXZ
    long _InitScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CDesktopBrowser@@IEAAJPEAUHWND__@@@Z
    long _Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDesktopWallpaperInitialized@CDesktopBrowser@@IEAA_NXZ
    bool _IsDesktopWallpaperInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHDRWallpaperActive@CDesktopBrowser@@IEAA_NXZ
    bool _IsHDRWallpaperActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInBoxRegItems@CDesktopBrowser@@IEAAHPEBGPEAK@Z
    int _IsInBoxRegItems(unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadWallpaper@CDesktopBrowser@@IEAAXXZ
    void _LoadWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogDesktopSQM@CDesktopBrowser@@IEAAXXZ
    void _LogDesktopSQM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NeedsTransparentView@CDesktopBrowser@@IEAA_NXZ
    bool _NeedsTransparentView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAddToRecent@CDesktopBrowser@@IEAAXPEAXK@Z
    void _OnAddToRecent(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAnimationRequirementsChanged@CDesktopBrowser@@IEAAXXZ
    void _OnAnimationRequirementsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CDesktopBrowser@@IEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CDesktopBrowser@@IEAAJPEBUtagCREATESTRUCTW@@@Z
    long _OnCreate(tagCREATESTRUCTW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreateApiSurface@CDesktopBrowser@@IEAAX_K_J@Z
    void _OnCreateApiSurface(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroy@CDesktopBrowser@@IEAAJXZ
    long _OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFinalInitialize@CDesktopBrowser@@IEAAX_J@Z
    void _OnFinalInitialize(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFocusMsg@CDesktopBrowser@@IEAAJI_K_J@Z
    long _OnFocusMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRaise@CDesktopBrowser@@IEAAX_K_J@Z
    void _OnRaise(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnShowDesktopVisuals@CDesktopBrowser@@IEAAX_K_J@Z
    void _OnShowDesktopVisuals(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSystemParametersChanged@CDesktopBrowser@@IEAAXI_K_J@Z
    void _OnSystemParametersChanged(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWallpaperUpdate@CDesktopBrowser@@IEAAJ_K_J@Z
    long _OnWallpaperUpdate(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintDesktopWatermarkText@CDesktopBrowser@@IEAAXPEAUHWND__@@PEAUHDC__@@@Z
    void _PaintDesktopWatermarkText(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PeekForAMessage@CDesktopBrowser@@IEAAIXZ
    unsigned int _PeekForAMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateMessage@CDesktopBrowser@@IEAAXI_K_JH@Z
    void _PropagateMessage(unsigned int, uint64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Raise@CDesktopBrowser@@IEAAX_N@Z
    void _Raise(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterDesktopWallpaper@CDesktopBrowser@@IEAA_NXZ
    bool _RegisterDesktopWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RepaintBlurredWallpaper@CDesktopBrowser@@IEAAXXZ
    void _RepaintBlurredWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveState@CDesktopBrowser@@IEAAXXZ
    void _SaveState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveViewState@CDesktopBrowser@@IEAAJXZ
    long _SaveViewState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAcceleratorMenu@CDesktopBrowser@@IEAAJPEAUHACCEL__@@@Z
    long _SetAcceleratorMenu(HACCEL__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDWMAndImmersiveColor@CDesktopBrowser@@IEAAXK@Z
    void _SetDWMAndImmersiveColor(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupAppRan@CDesktopBrowser@@IEAAX_K_J@Z
    void _SetupAppRan(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowWindowWithoutHourglass@CDesktopBrowser@@IEAAXXZ
    void _ShowWindowWithoutHourglass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubtractBottommostTray@CDesktopBrowser@@IEAAXPEAUtagRECT@@@Z
    void _SubtractBottommostTray(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateShouldLaunchEverythingMaximized@CDesktopBrowser@@IEAAXXZ
    void _UpdateShouldLaunchEverythingMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWallpaperWindow@CDesktopBrowser@@IEAAJXZ
    long _UpdateWallpaperWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProcBS@CDesktopBrowser@@IEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _WndProcBS(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopBrowser@@IEAA@XZ
    ~CDesktopBrowser();
};
