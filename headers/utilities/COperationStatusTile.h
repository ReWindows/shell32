#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 149 member(s).
class COperationStatusTile {
public:
    class CAnimationTerminator;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COperationStatusTile@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@COperationStatusTile@@UEAAJPEAUIOperationStatusSink@@PEAK@Z
    virtual long Advise(IOperationStatusSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlertTimeRemainingCalculation@COperationStatusTile@@UEAAJXZ
    virtual long AlertTimeRemainingCalculation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoPauseOperation@COperationStatusTile@@UEAAJXZ
    virtual long AutoPauseOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUpFrontConfirmation@COperationStatusTile@@UEAAJXZ
    virtual long BeginUpFrontConfirmation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@COperationStatusTile@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayInterrupt@COperationStatusTile@@UEAAJPEAUIOperationInterrupt@@@Z
    virtual long DisplayInterrupt(IOperationInterrupt *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUpFrontConfirmation@COperationStatusTile@@UEAAJXZ
    virtual long EndUpFrontConfirmation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConsistentDisplayMode@COperationStatusTile@@UEAAJXZ
    virtual long EnsureConsistentDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureElementVisible@COperationStatusTile@@UEAAJXZ
    virtual long EnsureElementVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterTileAnimationDuiBitmapPaintMode@COperationStatusTile@@UEAAJXZ
    virtual long EnterTileAnimationDuiBitmapPaintMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitTileAnimationDuiBitmapPaintMode@COperationStatusTile@@UEAAJXZ
    virtual long ExitTileAnimationDuiBitmapPaintMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceClosingTileAnimationToComplete@COperationStatusTile@@UEAAJXZ
    virtual long ForceClosingTileAnimationToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceTerminateAnimationSiblingTileReceivedFocus@COperationStatusTile@@UEAAJXZ
    virtual long ForceTerminateAnimationSiblingTileReceivedFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationFlags@COperationStatusTile@@UEAAJPEAK@Z
    virtual long GetOperationFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationType@COperationStatusTile@@UEAAJPEAW4OPERATION_TYPE@@@Z
    virtual long GetOperationType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerWindow@COperationStatusTile@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetOwnerWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSummaryText@COperationStatusTile@@UEAAJPEAPEAG@Z
    virtual long GetSummaryText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileID@COperationStatusTile@@UEAAJPEAK@Z
    virtual long GetTileID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileState@COperationStatusTile@@UEAAJPEAW4UI_VISIBLE_STATE@@@Z
    virtual long GetTileState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeUsed@COperationStatusTile@@UEAAJPEA_K0@Z
    virtual long GetTimeUsed(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleText@COperationStatusTile@@UEAAJPEAPEAG@Z
    virtual long GetTitleText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionType@COperationStatusTile@@UEAAJPEAW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@@Z
    virtual long GetTransitionType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@COperationStatusTile@@UEAAJPEA_N@Z
    virtual long IsActive(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimatingNewTile@COperationStatusTile@@UEAAJPEA_N@Z
    virtual long IsAnimatingNewTile(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationInProgress@COperationStatusTile@@UEAAJPEA_N@Z
    virtual long IsAnimationInProgress(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOkToCloseMainWindow@COperationStatusTile@@UEAAJPEA_N@Z
    virtual long IsOkToCloseMainWindow(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmoothingProgress@COperationStatusTile@@UEAAJPEA_N@Z
    virtual long IsSmoothingProgress(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@COperationStatusTile@@UEAAJPEA_N@Z
    virtual long IsVisible(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchConflictDialog@COperationStatusTile@@UEAAJXZ
    virtual long LaunchConflictDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationStarted@COperationStatusTile@@UEAAXW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUTILE_ANIMATION_NOTIFICATION_DATA@3@@Z
    virtual void OnAnimationStarted(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationTerminated@COperationStatusTile@@UEAAXW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUTILE_ANIMATION_NOTIFICATION_DATA@3@@Z
    virtual void OnAnimationTerminated(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@COperationStatusTile@@UEAAXXZ
    virtual void OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelling@COperationStatusTile@@UEAAXXZ
    virtual void OnCancelling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandCancelling@COperationStatusTile@@UEAAXXZ
    virtual void OnCommandCancelling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandPausing@COperationStatusTile@@UEAAXXZ
    virtual void OnCommandPausing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandResuming@COperationStatusTile@@UEAAXXZ
    virtual void OnCommandResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleted@COperationStatusTile@@UEAAXXZ
    virtual void OnCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDiscovering@COperationStatusTile@@UEAAXXZ
    virtual void OnDiscovering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplay@COperationStatusTile@@UEAAXXZ
    virtual void OnDisplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDone@COperationStatusTile@@UEAAXXZ
    virtual void OnDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnError@COperationStatusTile@@UEAAXXZ
    virtual void OnError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExecuting@COperationStatusTile@@UEAAXXZ
    virtual void OnExecuting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameAnimated@COperationStatusTile@@UEAAXW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUTILE_ANIMATION_NOTIFICATION_DATA@3@@Z
    virtual void OnFrameAnimated(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHidden@COperationStatusTile@@UEAAXXZ
    virtual void OnHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIndeterminate@COperationStatusTile@@UEAAXXZ
    virtual void OnIndeterminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInterrupting@COperationStatusTile@@UEAAXXZ
    virtual void OnInterrupting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInterruptingComplete@COperationStatusTile@@UEAAXXZ
    virtual void OnInterruptingComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@COperationStatusTile@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@COperationStatusTile@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@COperationStatusTile@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@COperationStatusTile@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@COperationStatusTile@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@COperationStatusTile@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaused@COperationStatusTile@@UEAAXXZ
    virtual void OnPaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPausedCallback@COperationStatusTile@@UEAAJXZ
    virtual long OnPausedCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPausing@COperationStatusTile@@UEAAXXZ
    virtual void OnPausing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResumedCallback@COperationStatusTile@@UEAAJXZ
    virtual long OnResumedCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResuming@COperationStatusTile@@UEAAXXZ
    virtual void OnResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResumingComplete@COperationStatusTile@@UEAAXXZ
    virtual void OnResumingComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShown@COperationStatusTile@@UEAAJXZ
    virtual long OnShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpFrontConfirming@COperationStatusTile@@UEAAXXZ
    virtual void OnUpFrontConfirming();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COperationStatusTile@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@COperationStatusTile@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshStatusElements@COperationStatusTile@@UEAAJXZ
    virtual long RefreshStatusElements();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COperationStatusTile@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOperationTile@COperationStatusTile@@UEAAJXZ
    virtual long RemoveOperationTile();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultKeyFocus@COperationStatusTile@@UEAAJXZ
    virtual long SetDefaultKeyFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@COperationStatusTile@@UEAAJW4OPERATION_MODE@@@Z
    virtual long SetMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOperationType@COperationStatusTile@@UEAAJW4OPERATION_TYPE@@@Z
    virtual long SetOperationType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowScrollBarFiller@COperationStatusTile@@UEAAJ_N@Z
    virtual long SetShowScrollBarFiller(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileDisplayMode@COperationStatusTile@@UEAAJ_N@Z
    virtual long SetTileDisplayMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileShowDivider@COperationStatusTile@@UEAAJ_N@Z
    virtual long SetTileShowDivider(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@COperationStatusTile@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationFrame@COperationStatusTile@@UEAAJ_K@Z
    virtual long UpdateAnimationFrame(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatusElements@COperationStatusTile@@UEAAJXZ
    virtual long UpdateStatusElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@COperationStatusTile@@SAJPEAVElement@DirectUI@@PEAUHWND__@@KKKW4FILE_OPERATION_EXTENDED_FLAGS@@PEAUIOperationDataReader@@PEAVCTileNotificationsBase@@PEAVCAnimationCoordinator@CopyTileAnimationUtils@@1AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(::DirectUI::Element *, HWND__*, unsigned long, unsigned long, unsigned long, int, IOperationDataReader *, CTileNotificationsBase *, WindissectOpaque *, HWND__*, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COperationStatusTile@@AEAA@PEAUHWND__@@KW4FILE_OPERATION_EXTENDED_FLAGS@@PEAUIOperationDataReader@@PEAVCTileNotificationsBase@@0@Z
    COperationStatusTile(HWND__*, unsigned long, int, IOperationDataReader *, CTileNotificationsBase *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelCore@COperationStatusTile@@AEAAXW4CancelTileOptions@1@@Z
    void _CancelCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckIfTileShouldUpdate@COperationStatusTile@@AEAA_NXZ
    bool _CheckIfTileShouldUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteSwitchFromInterrupt@COperationStatusTile@@AEAAXPEAUTILE_ANIMATION_NOTIFICATION_DATA@CopyTileAnimationUtils@@@Z
    void _CompleteSwitchFromInterrupt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteSwitchToInterrupt@COperationStatusTile@@AEAAXPEAUTILE_ANIMATION_NOTIFICATION_DATA@CopyTileAnimationUtils@@@Z
    void _CompleteSwitchToInterrupt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteTileClose@COperationStatusTile@@AEAAXPEAUTILE_ANIMATION_NOTIFICATION_DATA@CopyTileAnimationUtils@@@Z
    void _CompleteTileClose(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateElementForInterrupt@COperationStatusTile@@AEAAJPEAUIOperationInterrupt@@PEAPEAVElement@DirectUI@@@Z
    long _CreateElementForInterrupt(IOperationInterrupt *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateProgressTimer@COperationStatusTile@@AEAAJPEAVOperationTileElement@@@Z
    long _CreateProgressTimer(OperationTileElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRateChart@COperationStatusTile@@AEAAJKPEAVOperationTileElement@@@Z
    long _CreateRateChart(unsigned long, OperationTileElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTileElement@COperationStatusTile@@AEAAJKKPEAVElement@DirectUI@@@Z
    long _CreateTileElement(unsigned long, unsigned long, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteCompleteAnimation@COperationStatusTile@@AEAAXW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUTILE_ANIMATION_NOTIFICATION_DATA@3@@Z
    void _ExecuteCompleteAnimation(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteOnDisplay@COperationStatusTile@@AEAAXXZ
    void _ExecuteOnDisplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteStartAnimation@COperationStatusTile@@AEAAJW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@@Z
    long _ExecuteStartAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlashOperationManagerWindow@COperationStatusTile@@AEBAXXZ
    void _FlashOperationManagerWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPauseOrCancelButtonAsFocusTarget@COperationStatusTile@@AEAAPEAVElement@DirectUI@@XZ
    ::DirectUI::Element * _GetPauseOrCancelButtonAsFocusTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleInterruptComplete@COperationStatusTile@@AEAAXXZ
    void _HandleInterruptComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideDetails@COperationStatusTile@@AEAAJXZ
    long _HideDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@COperationStatusTile@@AEAAJKKPEAVElement@DirectUI@@PEAVCAnimationCoordinator@CopyTileAnimationUtils@@@Z
    long _Initialize(unsigned long, unsigned long, ::DirectUI::Element *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeProgressAnimationElements@COperationStatusTile@@AEAAXPEAPEAVElement@DirectUI@@000@Z
    void _InitializeProgressAnimationElements(::DirectUI::Element * *, ::DirectUI::Element * *, ::DirectUI::Element * *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeProgressSmoother@COperationStatusTile@@AEAAJXZ
    long _InitializeProgressSmoother();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeTileContentAnimationElements@COperationStatusTile@@AEAAXPEAPEAVElement@DirectUI@@000@Z
    void _InitializeTileContentAnimationElements(::DirectUI::Element * *, ::DirectUI::Element * *, ::DirectUI::Element * *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveFocusToNextTile@COperationStatusTile@@AEAAX_N@Z
    void _MoveFocusToNextTile(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyUpdateProgress@COperationStatusTile@@AEAAXXZ
    void _NotifyUpdateProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationChangeMode@COperationStatusTile@@AEAAJPEAUTILE_ANIMATION_DATA@CopyTileAnimationUtils@@@Z
    long _PrepareAnimationChangeMode(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationData@COperationStatusTile@@AEAAJW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUTILE_ANIMATION_DATA@3@@Z
    long _PrepareAnimationData(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationNotificationData@COperationStatusTile@@AEAAJW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@PEAUTILE_ANIMATION_DATA@3@@Z
    long _PrepareAnimationNotificationData(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationSwitchFromInterrupt@COperationStatusTile@@AEAAJPEAUTILE_ANIMATION_DATA@CopyTileAnimationUtils@@@Z
    long _PrepareAnimationSwitchFromInterrupt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationSwitchToInterrupt@COperationStatusTile@@AEAAJPEAUTILE_ANIMATION_DATA@CopyTileAnimationUtils@@@Z
    long _PrepareAnimationSwitchToInterrupt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareAnimationTileClose@COperationStatusTile@@AEAAJPEAUTILE_ANIMATION_DATA@CopyTileAnimationUtils@@@Z
    long _PrepareAnimationTileClose(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessBubbledOrDirectEvent@COperationStatusTile@@AEAA_NPEBUEvent@DirectUI@@@Z
    bool _ProcessBubbledOrDirectEvent(::DirectUI::Event const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessDPIChangedEvent@COperationStatusTile@@AEAA_NPEBUEvent@DirectUI@@@Z
    bool _ProcessDPIChangedEvent(::DirectUI::Event const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessEventTerminateAnimation@COperationStatusTile@@AEAA_NPEAUEvent@DirectUI@@PEA_N@Z
    bool _ProcessEventTerminateAnimation(::DirectUI::Event *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessRoutedEvent@COperationStatusTile@@AEAA_NPEAVElement@DirectUI@@PEBUEvent@3@@Z
    bool _ProcessRoutedEvent(::DirectUI::Element *, ::DirectUI::Event const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessThemeChangeEvent@COperationStatusTile@@AEAA_NPEBUEvent@DirectUI@@@Z
    bool _ProcessThemeChangeEvent(::DirectUI::Event const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PutStateMachineOnHold@COperationStatusTile@@AEAAJW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@@Z
    long _PutStateMachineOnHold(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshDisplayProgress@COperationStatusTile@@AEAAX_K0@Z
    void _RefreshDisplayProgress(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshRateChartIfNeeded@COperationStatusTile@@AEAAXXZ
    void _RefreshRateChartIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveInterruptPane@COperationStatusTile@@AEAAXPEA_N@Z
    void _RemoveInterruptPane(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCancelButtonEnabled@COperationStatusTile@@AEAAX_N@Z
    void _SetCancelButtonEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultKeyFocus@COperationStatusTile@@AEAAJ_N@Z
    long _SetDefaultKeyFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusOnPauseOrCancelButton@COperationStatusTile@@AEAAXXZ
    void _SetFocusOnPauseOrCancelButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIndeterminateMode@COperationStatusTile@@AEAAX_N@Z
    void _SetIndeterminateMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPauseButtonEnabled@COperationStatusTile@@AEAAX_N@Z
    void _SetPauseButtonEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPauseButtonExecutingOrPausing@COperationStatusTile@@AEAAXXZ
    void _SetPauseButtonExecutingOrPausing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPauseButtonPausedOrResuming@COperationStatusTile@@AEAAXXZ
    void _SetPauseButtonPausedOrResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProgressToError@COperationStatusTile@@AEAAXXZ
    void _SetProgressToError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProgressToNormal@COperationStatusTile@@AEAAXXZ
    void _SetProgressToNormal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProgressToPause@COperationStatusTile@@AEAAXXZ
    void _SetProgressToPause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStateMachineOperationTileEvent@COperationStatusTile@@AEAAXW4OPERATION_EVENT@@@Z
    void _SetStateMachineOperationTileEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStateMachineUserEvent@COperationStatusTile@@AEAAXW4USER_CLICK@@@Z
    void _SetStateMachineUserEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldUpdateTextFields@COperationStatusTile@@AEAA_NXZ
    bool _ShouldUpdateTextFields();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDetails@COperationStatusTile@@AEAAJXZ
    long _ShowDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAnimation@COperationStatusTile@@AEAAJW4ANIM_TRANSITION_TYPE@CopyTileAnimationUtils@@@Z
    long _StartAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCurrentItem@COperationStatusTile@@AEAAJPEAUIShellItem@@@Z
    long _UpdateCurrentItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateHeaderFromCacheIfNeeded@COperationStatusTile@@AEAAJ_N@Z
    long _UpdateHeaderFromCacheIfNeeded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRemainingItemsAndSize@COperationStatusTile@@AEAAJ_K000@Z
    long _UpdateRemainingItemsAndSize(uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateStatusElements@COperationStatusTile@@AEAAJ_N@Z
    long _UpdateStatusElements(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSummary@COperationStatusTile@@AEAAJPEBG@Z
    long _UpdateSummary(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSummaryFromCache@COperationStatusTile@@AEAAJXZ
    long _UpdateSummaryFromCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSummaryFromValues@COperationStatusTile@@AEAAJ_K0000@Z
    long _UpdateSummaryFromValues(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COperationStatusTile@@EEAA@XZ
    virtual ~COperationStatusTile();
};
