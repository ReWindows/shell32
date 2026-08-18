#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 121 member(s).
class COperationStatusService {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COperationStatusService@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAnimate@COperationStatusService@@UEAA_NW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUIOperationStatusTilePriv@@@Z
    virtual bool CanAnimate(int, IOperationStatusTilePriv *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@COperationStatusService@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@COperationStatusService@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterTileAnimationDuiBitmapPaintMode@COperationStatusService@@UEAAJPEAUIOperationStatusTilePriv@@@Z
    virtual long EnterTileAnimationDuiBitmapPaintMode(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitTileAnimationDuiBitmapPaintMode@COperationStatusService@@UEAAJPEAUIOperationStatusTilePriv@@@Z
    virtual long ExitTileAnimationDuiBitmapPaintMode(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlashOperationManagerWindow@COperationStatusService@@UEAAJKW4tagOPERATION_STATUS_SERVICE_TOAST_OPTIONS@@@Z
    virtual long FlashOperationManagerWindow(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolators@COperationStatusService@@UEAAJW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUIOperationStatusTilePriv@@PEAPEAVCTileAnimationInterpolatorSet@3@@Z
    virtual long GetInterpolators(int, IOperationStatusTilePriv *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatusTile@COperationStatusService@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetStatusTile(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@COperationStatusService@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpandedDisplayMode@COperationStatusService@@UEBA_NXZ
    virtual bool IsExpandedDisplayMode() const;
    // Category: Method | Source: PE Export
    // Symbol: ?LockServer@COperationStatusService@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationTerminatedFocusReceived@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@@Z
    virtual void NotifyAnimationTerminatedFocusReceived(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileCancel@COperationStatusService@@UEAAXXZ
    virtual void NotifyTileCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileCancelled@COperationStatusService@@UEAAXXZ
    virtual void NotifyTileCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileDisplayed@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@@Z
    virtual void NotifyTileDisplayed(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileExecuting@COperationStatusService@@UEAAXXZ
    virtual void NotifyTileExecuting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileHidden@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@@Z
    virtual void NotifyTileHidden(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileHiding@COperationStatusService@@UEAAXXZ
    virtual void NotifyTileHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileInterruptCompleted@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@@Z
    virtual void NotifyTileInterruptCompleted(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileInterrupted@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@@Z
    virtual void NotifyTileInterrupted(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTilePaused@COperationStatusService@@UEAAXXZ
    virtual void NotifyTilePaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileSecondTryCancel@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@@Z
    virtual void NotifyTileSecondTryCancel(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileSizeChange@COperationStatusService@@UEAAXXZ
    virtual void NotifyTileSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTileUserEvent@COperationStatusService@@UEAAXXZ
    virtual void NotifyTileUserEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosingTile@COperationStatusService@@UEAAXPEAUIOperationStatusTilePriv@@PEA_N@Z
    virtual void OnClosingTile(IOperationStatusTilePriv *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@COperationStatusService@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@COperationStatusService@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@COperationStatusService@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@COperationStatusService@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@COperationStatusService@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@COperationStatusService@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COperationStatusService@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOperationTile@COperationStatusService@@UEAAJPEAUHWND__@@KW4FILE_OPERATION_EXTENDED_FLAGS@@_KPEAUIOperationDataReader@@AEBU_GUID@@PEAPEAX@Z
    virtual long RegisterOperationTile(HWND__*, unsigned long, int, uint64_t, IOperationDataReader *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COperationStatusService@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgress@COperationStatusService@@UEAAJXZ
    virtual long UpdateProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@COperationStatusService@@SAJAEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(_GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COperationStatusService@@AEAA@XZ
    COperationStatusService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@COperationStatusService@@AEAAX_J@Z
    void OnDPIChanged(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@COperationStatusService@@EEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendThemeChangedMessage@COperationStatusService@@CAXPEAUHWND__@@@Z
    static void SendThemeChangedMessage(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTileForPendingRemoval@COperationStatusService@@AEAAJPEAUIOperationStatusTilePriv@@@Z
    long _AddTileForPendingRemoval(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AlertTileTimeRemainingCalculation@COperationStatusService@@AEAAXXZ
    void _AlertTileTimeRemainingCalculation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnimateTiles@COperationStatusService@@AEAAXXZ
    void _AnimateTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateMinTileAreaHeight@COperationStatusService@@AEAAHXZ
    int _CalculateMinTileAreaHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateTileToWindowAdjustment@COperationStatusService@@AEAA?AUtagSIZE@@XZ
    tagSIZE _CalculateTileToWindowAdjustment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CenterWindowOverTileOwner@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _CenterWindowOverTileOwner(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteRemoveStatusTiles@COperationStatusService@@AEAAXXZ
    void _CompleteRemoveStatusTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndShowToast@COperationStatusService@@AEAAJPEAUIToastNotificationManagerStatics@Notifications@UI@Windows@@PEAUIXmlDocument@Dom@Xml@Data@5@@Z
    long _CreateAndShowToast(::Windows::UI::Notifications::IToastNotificationManagerStatics *, ::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBezierInterpolator@COperationStatusService@@AEAAJNNPEAPEAVCTileAnimationInterpolator@Interpolators@@@Z
    long _CreateBezierInterpolator(double, double, ::Interpolators::CTileAnimationInterpolator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateLinearInterpolator@COperationStatusService@@AEAAJNNPEAPEAVCTileAnimationInterpolator@Interpolators@@@Z
    long _CreateLinearInterpolator(double, double, ::Interpolators::CTileAnimationInterpolator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyAnimationTimer@COperationStatusService@@AEAAXXZ
    void _DestroyAnimationTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureConsistentDisplayMode@COperationStatusService@@AEAAXXZ
    void _EnsureConsistentDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImmersiveServiceProvider@COperationStatusService@@AEAAJXZ
    long _EnsureImmersiveServiceProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStatusView@COperationStatusService@@AEAAJXZ
    long _EnsureStatusView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTileDividerVisible@COperationStatusService@@AEAAXXZ
    void _EnsureTileDividerVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTilesAreShown@COperationStatusService@@AEAAXXZ
    void _EnsureTilesAreShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureToastContent@COperationStatusService@@AEAAJPEAUIToastNotificationManagerStatics@Notifications@UI@Windows@@@Z
    long _EnsureToastContent(::Windows::UI::Notifications::IToastNotificationManagerStatics *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureToastNotificationManager@COperationStatusService@@AEAAJXZ
    long _EnsureToastNotificationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureToastNotifierFactory@COperationStatusService@@AEAAJXZ
    long _EnsureToastNotifierFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlashOperationManagerWindow@COperationStatusService@@AEAAXK@Z
    void _FlashOperationManagerWindow(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCountTilesWhichCanSwitchMode@COperationStatusService@@AEAAIXZ
    unsigned int _GetCountTilesWhichCanSwitchMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDesiredWindowDimensionsFromTileArea@COperationStatusService@@AEAAXPEAVElement@DirectUI@@PEAH1@Z
    void _GetDesiredWindowDimensionsFromTileArea(::DirectUI::Element *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleTileCount@COperationStatusService@@AEAAI_N@Z
    unsigned int _GetVisibleTileCount(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowHeightRegistrySetting@COperationStatusService@@AEAAIXZ
    unsigned int _GetWindowHeightRegistrySetting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowTitle@COperationStatusService@@AEAAJW4TBPFLAG@@I_K1PEAPEAG@Z
    long _GetWindowTitle(int, unsigned int, uint64_t, uint64_t, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideMainWindowIfNeeded@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _HideMainWindowIfNeeded(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAnimation@COperationStatusService@@AEAAJXZ
    long _InitAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAnimationInterpolator@COperationStatusService@@AEAAJ_NNNNPEAPEAVCTileAnimationInterpolator@Interpolators@@@Z
    long _InitAnimationInterpolator(bool, double, double, double, ::Interpolators::CTileAnimationInterpolator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitInterpolatorsClosingTileAnimation@COperationStatusService@@AEAAJPEAVCTileAnimationInterpolatorSet@CopyTileAnimationUtils@@@Z
    long _InitInterpolatorsClosingTileAnimation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitInterpolatorsFirstTimeTileAnimation@COperationStatusService@@AEAAJPEAVCTileAnimationInterpolatorSet@CopyTileAnimationUtils@@@Z
    long _InitInterpolatorsFirstTimeTileAnimation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitInterpolatorsSwitchMode@COperationStatusService@@AEAAJPEAVCTileAnimationInterpolatorSet@CopyTileAnimationUtils@@@Z
    long _InitInterpolatorsSwitchMode(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitInterpolatorsToOrFromInterrupt@COperationStatusService@@AEAAJPEAVCTileAnimationInterpolatorSet@CopyTileAnimationUtils@@@Z
    long _InitInterpolatorsToOrFromInterrupt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDisplayMode@COperationStatusService@@AEAAXXZ
    void _InitializeDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLastNonAnimatingClosingFrame@COperationStatusService@@AEAA_NPEAUIOperationStatusTilePriv@@@Z
    bool _IsLastNonAnimatingClosingFrame(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLauncherHidden@COperationStatusService@@AEAA_NXZ
    bool _IsLauncherHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOkToCloseMainWindow@COperationStatusService@@AEAA_NPEAUIOperationStatusTilePriv@@@Z
    bool _IsOkToCloseMainWindow(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSystemInDesktopMode@COperationStatusService@@AEAA_NXZ
    bool _IsSystemInDesktopMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTheOnlyVisibleTile@COperationStatusService@@AEAA_NPEAUIOperationStatusTilePriv@@@Z
    bool _IsTheOnlyVisibleTile(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MinProgressRatio@COperationStatusService@@AEAA?AUUPDATE_PROGRESS_VALUES@@AEBU2@0@Z
    UPDATE_PROGRESS_VALUES _MinProgressRatio(UPDATE_PROGRESS_VALUES const &, UPDATE_PROGRESS_VALUES const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAnimationTerminatedFocusReceived@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _OnAnimationTerminatedFocusReceived(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCancelAll@COperationStatusService@@AEAAXXZ
    void _OnCancelAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClose@COperationStatusService@@AEAAXXZ
    void _OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroy@COperationStatusService@@AEAAXXZ
    void _OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnExitSizeMove@COperationStatusService@@AEAAXXZ
    void _OnExitSizeMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetMinMaxInfo@COperationStatusService@@AEAAXPEAUtagMINMAXINFO@@@Z
    void _OnGetMinMaxInfo(tagMINMAXINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLifetimeGuardedMessage@COperationStatusService@@AEAAJI_K_JPEA_J@Z
    long _OnLifetimeGuardedMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNCHitTest@COperationStatusService@@AEAA_J_J@Z
    int64_t _OnNCHitTest(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSizing@COperationStatusService@@AEAAXPEAUtagRECT@@@Z
    void _OnSizing(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSuspend@COperationStatusService@@AEAAXXZ
    void _OnSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTileInterruptCompleted@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _OnTileInterruptCompleted(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTileInterrupted@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _OnTileInterrupted(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTileShown@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _OnTileShown(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTileSizeChange@COperationStatusService@@AEAAXXZ
    void _OnTileSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@COperationStatusService@@AEAAXXZ
    void _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveStatusTile@COperationStatusService@@AEAAJK@Z
    long _RemoveStatusTile(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveTile@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _RemoveTile(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReserveEmptySlotsForPendingTilesRemoval@COperationStatusService@@AEAAXXZ
    void _ReserveEmptySlotsForPendingTilesRemoval();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollWindowToTile@COperationStatusService@@AEAAXPEAUIOperationStatusTilePriv@@@Z
    void _ScrollWindowToTile(IOperationStatusTilePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollWindowToTile@COperationStatusService@@AEAAXK@Z
    void _ScrollWindowToTile(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDetailsButtonState@COperationStatusService@@AEAAXXZ
    void _SetDetailsButtonState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDisplayModeAllTiles@COperationStatusService@@AEAAXXZ
    void _SetDisplayModeAllTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNodeValueString@COperationStatusService@@AEAAJPEAUHSTRING__@@PEAUIXmlNode@Dom@Xml@Data@Windows@@PEAUIXmlDocument@4567@@Z
    long _SetNodeValueString(HSTRING__*, ::Windows::Data::Xml::Dom::IXmlNode *, ::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTextNodes@COperationStatusService@@AEAAJPEAPEBGIPEAUIXmlDocument@Dom@Xml@Data@Windows@@@Z
    long _SetTextNodes(unsigned short const * *, unsigned int, ::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToastCallbacks@COperationStatusService@@AEAAJPEAUIToastNotification@Notifications@UI@Windows@@@Z
    long _SetToastCallbacks(::Windows::UI::Notifications::IToastNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSQM@COperationStatusService@@AEAAXXZ
    void _UpdateSQM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTiles@COperationStatusService@@AEAAXXZ
    void _UpdateTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTitleBarTheme@COperationStatusService@@AEAAXXZ
    void _UpdateTitleBarTheme();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COperationStatusService@@EEAA@XZ
    virtual ~COperationStatusService();
};
