# `global` :: `CDefView`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `shell32.dll`. Total members: **693**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class ATL; 
class AccessibilityHelpers; 
class BannerTelemetry; 
class CAggregatedUnknown; 
class CAssocListBase; 
class CCommandFolder; 
class CCritSecDelayInitBase; 
class CFONProps; 
class CListViewHost; 
class CMarshaledInterface; 
class CMenuStaticToolbar; 
class CMultimonWallpaperState; 
class COperationStatusTile; 
class CProperTreeHost; 
class CReadingPaneHostUpdateWorkItem; 
class CRecycleBinManager; 
class CSearchHistorySuggestionsTask; 
class CTranscodedImage; 
class CloudFilesTelemetry; 
class CoCreateInstanceAsSystemTelemetry; 
class Common; 
class ControlPanelNavigationTelemetry; 
class CopyTileAnimationUtils; 
class DefaultAssocTelemetry; 
class DesktopIconLayoutTelemetry; 
class DesktopWallpaperTelemetry; 
class FavoritesTelemetry; 
class FileExplorerPerf; 
class FileExplorerTelemetry; 
class FileExplorerTelemetryCommon; 
class GraphRecentItems; 
class IconCacheTelemetry; 
class LoggingUtil; 
class MaliciousTextScanning; 
namespace Microsoft { namespace WRL { class Details; } } 
class OpenWithTelemetry; 
class PaintBatch; 
class RunDialogLoggingTelemetry; 
class SetDarkModeForWindows; 
class Shell32LoggingTelemetry; 
class StateRepoNewMenuCache; 
class SyncProviderRecycleBinLinks; 
class TaskbarFlexibleLayoutTelemetry; 
class TaskbarPinningTelemetry; 
namespace fc { class details; } 
class fc_tson; 
class tip2; 
class tson; 
class winrt; 
class ABOUT_PARAMS; class ADDICONSINFO; class ADVANCEDPAGE; class ANCHORED_ICON_FOR_MOVE; class APPLETELEMENT; class APPLETTASKS; class ATL; class ATL_DRAWINFO; class ATTRIBUTESTATE; class AUDIT_CALLBACK_INFO; class AUTOLISTINIT; class AccessibilityHelpers; class ActivityData; class AgileGitPtr; class Amd64AttributeList; class AppModeRestorer; class ApplicationDefaultCategoriesImpl; class ApplyLogonTaskAdditionalThread; class AssociationFileElement; class AsyncRenameResultData; class AsyncRenameTelemetry; class AutoProviderRegistrar; class BANDINFOSFB; class BBTHREADDATA; class BFSF; class BINDCTX_PARAM; class BannerAccProvider; class BannerAccProxy; class BannerLogging; class BannerTelemetry; class BatchPositionChangesHelper; class Button3d; class CACBackgroundJob; class CACBackgroundJobInitData; class CACJobManager; class CACLHistory; class CACLIShellFolder; class CACLMRU; class CACLMulti; class CACString; class CACWordBreaker; class CAConfirmCommonDlg; class CATEGORY_INFO; class CAccessible; class CAccessibleExWrapperBase; class CAccessibleWrapperBase; class CAce; class CAceList; class CActivatedEventArgsBase; class CActivatedEventArgsWithPrelaunchAndViewIdBase; class CActivatedEventArgsWithViewIdBase; class CActiveDesktop; class CAddColumnCommand; class CAddMediaServerCommand; class CAddRemoveProgramsCommand; class CAdornerBase; class CAdvancedDlgEventListener; class CAggregateMultipleValues; class CAggregatedUnknown; class CAnimateWindowSize; class CAnimateWindowSizeWorker; class CAnimationCallback; class CAppControlHost; class CAppControlsModule; class CAppControlsModuleInner; class CAppCursorManager; class CAppInfo; class CAppPathReader; class CAppSuggestedLocationsFolder; class CAppSuggestedLocationsFolderEnum; class CAppSuggestedLocationsIconHandler; class CAppletAndTaskEnum; class CApplicationTileInformation; class CApplyDateChange; class CAssocHandler; class CAssocListBase; class CAsyncParseInitData; class CAuth; class CAutoArrayMemPtr; class CAutoColorImageData; class CAutoColorization; class CAutoComplete; class CAutoDestItemsList; class CAutoFont; class CAutoPlayDirect; class CAutoPlayParams; class CAutoPlaySite; class CAutoPlayVerb; class CAutoWaitCursor; class CAutomationCM; class CAutoplayContentHandler; class CAutoplayDeviceData; class CAutoplayDeviceDataManager; class CAutoplayDeviceEventHandlerInfo; class CAutoplayDeviceHandler; class CAutoplayHandler; class CAutoplayHandlerList; class CBXITEM; class CBackPropSheetPage; class CBackupLocationManager; class CBandProxy; class CBarrierPage; class CBaseBar; class CBaseBrowserService; class CBaseCommandHandler; class CBaseDlg; class CBaseMutex; class CBaseOverlayHandler; class CBaseRPCTimeout; class CBaseShellFolderViewCB; class CBaseTreeWalkerCB; class CBasicWallpaperWindow; class CBitBucket; class CBitBucketData; class CBitBucketDropTarget; class CBitBucketIncrementalEnum; class CBitBucketPropertyStore; class CBitBucketViewCB; class CBitLockerLicenseQuery; class CBooleanCheckMarkControl; class CBooleanDropListControl; class CBrowseForFolder; class CBrowserProgressAggregator; class CBrowserProgressAggregatorConnector; class CBurnAudioCDExtension; class CBurnEventHandler; class CByValueConfirmationInterrupt; class CByValueOperationInterrupt; class CByValueSingleConflictInterrupt; class CByteHashTable; class CCDBurn; class CCDBurnFolder; class CCDBurnFolderPropertyStore; class CCDBurnFolderPropertyStoreFactory; class CCDBurnFolderViewCB; class CCDBurnGlobalSettingsDialog; class CCDBurnTaskInfo; class CCIDGroupControl; class CCIDLabel; class CCPLSearchTarget; class CCachedSTAObject; class CCalendarControl; class CCallBOOLWithTimeoutParams; class CCallWithTimeoutParams; class CCallback; class CCallbackPropertyBag; class CCancelWithEvent; class CCaseInsensitiveStringCompare; class CCaseInsensitiveStringHashPolicy; class CCaseInsensitiveStringHashTable; class CCategoryEntry; class CCategoryEnum; class CChartView; class CCheckDiskDialog; class CCheckLocationIndexedTask; class CCheckSaveLocationTask; class CChildId; class CChooseColumnsCommand; class CCleanRecentDocsCommand; class CClientExtractIcon; class CClientExtractIconCB; class CCloseSession; class CCoArrayOfStrings; class CCoSimpleArray; class CCoSimpleArrayIterator; class CCoTaskMemPtr; class CColorizationColor; class CColumnDlg; class CComCatCacheTask; class CComExplorerCommandBase; class CComPropVariant; class CComTask; class CComTaskContext; class CComTaskThread; class CCommandButtonSite; class CCommandFolder; class CCommandFolderEnum; class CCommandModule; class CCommandModuleInner; class CCommandModuleSite; class CCommandStateBase; class CCommandStoreShimBase; class CCommandStoreShimOverCommandFolder; class CCommandStoreShimOverIContextMenuCB; class CCommonCommandState; class CCommonLayoutDefinition; class CCommonLayoutModifier; class CCommonParentUndoUnit; class CCommonPlaceFolder; class CCommonPlacesViewCB; class CCompareCompactItem; class CComposeCallback; class CConditionEvaluator; class CConditionallySetTemporarySite; class CConfirmConflictItem; class CConfirmConflictResultInfo; class CConfirmationCommandBase; class CConfirmationDlgBase; class CConfirmationInterrupt; class CConflictDialogData; class CConflictDialogDataDecorator; class CConflictInterrupt; class CConflictResolutionDlg; class CConnectionPoint; class CConnectionPointEnum; class CContextMenuCBImpl; class CContextMenuExtensionImpl; class CContextMenuForwarder; class CContextMenuOnContextMenuArray; class CContextMenuOnContextMenuArrayNoDuplicateVerbs; class CContextMenuOnHMENU; class CContextMenuRenameVerb; class CContextMenuReplaceVerb; class CContextMenuWithoutVerbs; class CControlPanelAppletList; class CControlPanelAssocHandler; class CControlPanelCategoryEnum; class CControlPanelCategoryFolder; class CControlPanelCategoryList; class CControlPanelCategoryModule; class CControlPanelCategoryModuleInner; class CControlPanelCategoryViewCallback; class CControlPanelDataWorkItem; class CControlPanelEnum; class CControlPanelEnumHandlers; class CControlPanelFolder; class CControlPanelIconWorkItem; class CControlPanelItem; class CControlPanelItemListBase; class CControlPanelLink; class CControlPanelNavLinkCommand; class CControlPanelNavLinks; class CControlPanelNavModule; class CControlPanelNavModuleInner; class CControlPanelPage; class CControlPanelTaskEnum; class CControlPanelTasks; class CControlPanelTypeAhead; class CControlPanelViewCallback; class CCopyAsPathMenu; class CCopyHook; class CCopyItemCachedData; class CCopyMoveToChooseFolder; class CCopyMoveToEnumeration; class CCopyMoveToItem; class CCopyMoveToMenu; class CCopyMoveToMenuCommand; class CCopyThread; class CCritSecDelayInitBase; class CCscComTaskContext; class CCscPropHelper; class CCscUiCmdObj_WorkOfflineOnline; class CCscUiCmdObject_Sync; class CCscUiComTaskContext; class CCscWorkOfflineTaskDialog; class CCscWorkOnlineErrorTaskDialog; class CCtrlExtIconBase; class CCtrlMouseWheelHandler; class CDBURN_WIZPAGE; class CDDROPPARAMS; class CDPA; class CDPACoTaskMem; class CDPAItemIdList; class CDPALocalMem; class CDPARelease; class CDROMICONS; class CDSA; class CDUIResourceManager; class CDUISizerElement; class CDUIView; class CDUIViewFrame; class CDUIViewHost; class CDVBackgrndHMENU; class CDVDropTarget; class CDViewEvents; class CDebugOutput; class CDecodeStream; class CDefBackgroundMenuCB; class CDefFolderMenu; class CDefFolderMenuCallback; class CDefView; class CDefViewPersistHistory; class CDefViewSink; class CDefaultAssociationsProfileHandler; class CDefaultHashPolicy; class CDefaultKeyCompare; class CDefaultRehashPolicy; class CDefaultResizePolicy; class CDeferredCollectionNotifier; class CDeferredCollectionSink; class CDelegateAccessibleImpl; class CDelegateDropTarget; class CDelegateFolderBase; class CDelegateFolderBaseNoUI; class CDelegatePropStoreFactory; class CDeskHtmlProp; class CDesktopBrowser; class CDesktopGadget; class CDesktopIconPropSheetPage; class CDesktopSpotlightNextContextMenuVerb; class CDesktopSpotlightOpenContextMenuVerb; class CDesktopWallpaper; class CDesktopWatermark; class CDetailsContainer; class CDeviceEncryptionBackUpRecoveryKeyVisibilityCondition; class CDeviceEncryptionOnlyNoMoSetClassicCPLVisibilityCondition; class CDeviceEventHandler; class CDeviceEventInfo; class CDiscImageMountVerb; class CDiscretionaryShareUser; class CDisplayElement; class CDragDropHelper; class CDrawPercentFull; class CDrawProgressBar; class CDrawProgressBase; class CDriveLetterCache; class CDriveLetterData; class CDriveProps; class CDrivesBackgroundMenuCB; class CDrivesCleanUpCommand; class CDrivesDefragmentCommand; class CDrivesDropTarget; class CDrivesViewCallback; class CDropListControlBase; class CDropShadowAdorner; class CDropSource; class CDrvExtIconBase; class CDrvSizeThreadData; class CDummyRowsetListener; class CDummyUnknown; class CDumpObject; class CDynamicStorage; class CDynamicStorageEnum; class CEditElement; class CEfsUtil; class CElementWithIUnknown; class CElementWithSite; class CElevatableDiscImageMount; class CElsServiceInstance; class CEmptyLibraryPage; class CEmptyRecycleBinExecute; class CEmptyRecycleBinState; class CEncoderInfo; class CEncryptFilePropSheetPage; class CEncryptionContextMenu; class CEnumChildIDListArray; class CEnumChildIDListOverItemCollection; class CEnumEntry; class CEnumExplorerCommandOnEnumUICommand; class CEnumExplorerCommandOverDPA; class CEnumExplorerCommandOverIContextMenu; class CEnumFolderItemVerbs; class CEnumFolderItems; class CEnumFolderItemsMultiLevel; class CEnumFolderTypeCommand; class CEnumIDListArrayBase; class CEnumIDListBase; class CEnumLibrariesCommand; class CEnumLibraryLocationsCommand; class CEnumNewItemSubCommands; class CEnumOleUndoUnit; class CEnumPropStg; class CEnumSetStg; class CEnumUICommand; class CEnumUITasks; class CEnumerableObjectCollection; class CEnumeratedDropListControl; class CEraseEventHandler; class CErrorOverlayHandler; class CEventResult; class CExeDropTarget; class CExecuteAppIDAndActivationContext; class CExecuteCommandBase; class CExecuteCommon; class CExecuteItem; class CExecuteOpenSearchDescription; class CExecuteRunAppFilter; class CExecuteTypeDelegator; class CExecuteVerbOnProperty; class CExplorerBrowser; class CExplorerBrowserHost; class CExplorerBrowserResultsFolder; class CExplorerCommandBase; class CExplorerCommandOnUICommand; class CExplorerCommandOverCommandStoreVerbList; class CExplorerCommandOverIContextMenu; class CExplorerCommandStateOverIContextMenu; class CExplorerSubCommandOverIContextMenu; class CExtractConstIcon; class CExtractIconBase; class CExtractIconWForA; class CExtractThumbnailTask; class CExtractToCommand; class CFDFolderNotifySource; class CFDFolderNotifySourceWrapper; class CFONProps; class CFSDropTarget; class CFSDropTargetHelper; class CFSFolderViewCB; class CFSIDLData; class CFSIconOverlayManager; class CFSNotifyHelper; class CFTAssocInfo; class CFTAssocStore; class CFTEnumAssocInfo; class CFadeTask; class CFileGroupDescriptorReader; class CFilePropSheetPage; class CFilePropSheetPageHelper; class CFileSource; class CFileSysBindData; class CFileSystemDriveProps; class CFillIDLTreeWalkCB; class CFilterCondition; class CFilterControl; class CFilterSmoother; class CFilterWorkerItem; class CFindExtensionsMenu; class CFlyoutMenuCallback; class CFocusIndicator; class CFolder; class CFolderAttribTreeWalker; class CFolderContentsInfo; class CFolderCustomize; class CFolderItem; class CFolderItemVerb; class CFolderItemVerbs; class CFolderItems; class CFolderItemsMultiLevel; class CFolderMenu; class CFolderOptionsCommand; class CFolderOptionsPsx; class CFolderSizeTreeWalkerCB; class CFontPropertySetStg; class CFontPropertyStg; class CFontProps; class CFormatEngine; class CFrameModule; class CFrameTask; class CFrameTaskManager; class CFrameWorkItem; class CFreeThreadedConflictDialogProxyWrapper; class CGCTask; class CGetCommandStateTask; class CGetPropertiesWorkItem; class CGetSupportStatusTask; class CGetVolumeInformationParams; class CGetVolumeNameForVolumeMountPointParams; class CGraphicsInit; class CGrep; class CGrepConditionEvaluator; class CHILDITEMID; class CHSBColor; class CHWNDView; class CHWShellExecute; class CHardwareFailureDialog; class CHelpExecute; class CHideSelectedCommand; class CHistoryCommand; class CHyperlinkPropertyControl; class CIDLDataObj; class CIDLDropTarget; class CIDLMatchMany; class CIDLNode; class CIDLTree; class CIDLTreeTraversor; class CISFBand; class CISFMenuCallback; class CISyncStatusCacheEntryComparer; class CISyncStatusProviderInfoComparer; class CIconCache; class CIconListControl; class CIconOverlayAdorner; class CIconResourceEnumHelper; class CIconSizeCommand; class CIconTask; class CImageData; class CImageFactory; class CImagePrefetchWorkItem; class CImageQueueItem; class CImageServicesSink; class CImmersiveColor; class CImmersiveContextMenuOwnerDrawHelper; class CImpIConnectionPointContainer; class CImpIDispatch; class CImpWndProc; class CIncludeInLibrary; class CIncludeInLibraryCommand; class CIncludeInLibraryContextMenu; class CIncludeInLibraryContextMenuHelper; class CIndividualConflictFastDataHelper; class CInfoBar; class CInfoBarHostModule; class CInfoBarHostModuleInner; class CInfoBarManager; class CInfoPane; class CInfoPaneInner; class CInitializeAutoPlayForegroundControl; class CInputLimiter; class CInputLimiterNetAddr; class CInsertDiscDialog; class CInstClassFactory; class CItemAncestorIterator; class CItemCollectionSink; class CItemCommand; class CItemCommandBase; class CItemIDFactory; class CItemKeyArray; class CItemPositioning; class CItemThumbnail; class CItemTile; class CKeywordStringWordSink; class CKnownFoldersFilter; class CKoreanDecomposition; class CLambdaCommandHandler; class CLaunchActivatedEventArgs; class CLauncherOptions; class CLauncherUIMode; class CLauncherUIModeWithDesktopSwitch; class CLauncherUIOptions; class CLayerCallback; class CLayoutDefinition; class CLayoutFolder; class CLayoutFolderCB; class CLayoutFolderChild; class CLayoutFolderEnum; class CLegacyViewState; class CLibrariesFolderBase; class CLibrariesTransfer; class CLibraryAddLocationTask; class CLibraryBaseRibbonCommand; class CLibraryBaseRibbonCommandEnum; class CLibraryDropTarget; class CLibraryFolderContextMenu; class CLibraryLocationCommand; class CLibraryLocationFileDialogEvent; class CLibraryPropHandler; class CLibraryPropSheetItemContextMenu; class CLibrarySaveOperation; class CLibrarySimpleRibbonCommand; class CLibraryTransferHelper; class CLicensePage; class CLimitedMalloc; class CLinguisticAlternativeGenerator; class CLinkedNode; class CListViewHost; class CLoadFileParams; class CLocalCopyHelper; class CLocalMetadataResultsTask; class CLocalRecycleBinPropDlg; class CLocalSimpleArray; class CLocationContextMenu; class CLocationFolderUI; class CLowDiskSpaceUI; class CMBMsgFilter; class CMNEnumQueueItem; class CMNEnumTask; class CMNLock; class CMVPEditControl; class CMVPRichEditOleCallback; class CMVPToken; class CMVPTokenData; class CM_COLUMNINFO; class CManageLibraryDialog; class CManageLibraryLocationBase; class CManageLibraryTaskBase; class CMappedXmlElement; class CMappingData; class CMappingDecorator; class CMarshalByValue; class CMarshalInterfaceOnce; class CMarshaledInterface; class CMemoryCachedImage; class CMenuAgent; class CMenuBand; class CMenuBandMetrics; class CMenuBandState; class CMenuData; class CMenuDeskBar; class CMenuMatchCommand; class CMenuSFToolbar; class CMenuSite; class CMenuStaticToolbar; class CMenuToolbarBase; class CMergedCategorizer; class CMergedFldrContextMenu; class CMergedFldrDropTarget; class CMergedFldrEnum; class CMergedFldrItem; class CMergedFldrNamespace; class CMergedFolder; class CMergedFolderViewCB; class CMessageDialogHelper; class CMetadataElement; class CMetadataExtractorWorkItem; class CMetadataLabel; class CMockHistoryProvider; class CMockLocalProvider; class CMockSuggestionsTask; class CModernErrorDialogCommand; class CModifiedState; class CMountPoint; class CMountPointRename; class CMountedDriveProps; class CMountedVolume; class CMtPtLocal; class CMtPtRemote; class CMultiItemsDefaultCommand; class CMultiSzBuilderW; class CMultimonWallpaperState; class CMultipleValues; class CMyDocsFolder; class CMyDocsFolderLinkResolver; class CNamedPropertyStoreHelper; class CNamespaceWalkFilter; class CNavPaneOptionCommand; class CNavigateAndSelectAsync; class CNavigateButton; class CNavigationSite; class CNetAssocList; class CNetFolderDataObj; class CNetFolderUI; class CNetFolderViewCB; class CNewItemCommand; class CNewItemSubCommand; class CNewMenu; class CNonFileTable; class CNotificationDispatcher; class CNotificationDispatcherBase; class CNotifySubclassWndProc; class CNotifyUserPictureChangeTask; class CNullSpaceContextMenu; class COLUMN_INFO; class COMMANDITEM; class CONDITIONBITSSETCACHE; class CONDITIONEVALINFO; class CONDITIONEVALPROPS; class CONFIRMOP; class CONFIRM_CONFLICT_ITEM; class CONFIRM_CONFLICT_PARAMS; class CONFIRM_CONFLICT_RESULT; class CONFIRM_CONFLICT_RESULT_INFO; class CONFIRM_ITEM_INFO; class CONFLICT_ITEM_METADATA; class CONTROLPANELTASK; class COPY_CACHE_ITEM; class CObjectCLSID; class CObjectSafety; class CObjectWindow; class CObjectWithBackReferences; class CObjectWithSite; class CObservableItem; class CObservableItemCollection; class CObservableItemCollectionSink; class CObservableItemCollectionVectorChangedEventArgs; class CObservableItemSink; class CObservableObjectFactory; class CObservableProperty; class COpenCmdPromptAsAdmin; class COpenCommand; class COpenControlPanel; class COpenDefaultLocationCommand; class COpenFileLocationMenu; class COpenLocationTask; class COpenMetadataProp; class COpenPowershellAsAdmin; class COpenSearchContextMenu; class COpenSearchLocationCreator; class COpenSearchViewSiteState; class COpenSearchXmlFragment; class COpenWithArray; class COpenWithExplorerCommand; class COpenWithExplorerCommandEnumerator; class COpenWithGalleryButton; class COpenWithMenu; class COpenWithTypeOverride; class COpenWithUICommand; class COpenWithUICommandWithPackageFullName; class COperationDataProvider; class COperationManagerTelemetry; class COperationStatusService; class COperationStatusServiceTimer; class COperationStatusTile; class COperationStatusTileCache; class COperationStatusTileProgressTimer; class COperationStatusTileRateCalculator; class COperationStatusTileRateChart; class COperationStatusTileRateChartAccessibilityHelper; class CPCATIDL; class CPCSettingsEnum; class CPCSettingsFolder; class CPFDropTarget; class CPLAPPLETID; class CPLEXECINFO; class CPLITEM; class CPLMODULE; class CPackageInformation; class CPackageInstallStateStore; class CPackageInstallStateStoreEnum; class CPartialPropertyChangeOperation; class CPathLookupEntry; class CPathPropertyControl; class CPerUserGlobalMutex; class CPerfTrackProvider; class CPhysicsSmoother; class CPinList; class CPinPropertyControl; class CPinUnpinTask; class CPinnedList; class CPinnedListEnum; class CPixelBucket; class CPlayAll; class CPlayCommandState; class CPlayExecute; class CPlayMusicCommand; class CPostBootReminder; class CPremiumBitLockerVisibilityCondition; class CPrepareDiscDialog; class CPreviewBackground; class CPreviewHost; class CPreviewMetadata; class CPreviewMetadataInner; class CPreviewThumbnail; class CPreviewThumbnailDevirtualizeSelectionWorkItem; class CPreviewThumbnailInner; class CPreviewTitleArea; class CPreviewTitleAreaInner; class CPreviewTitleAreaWorkItem; class CPreviewWindowCreator; class CPrintClientStruct; class CPrintersBindInfo; class CPrivateIconSparseCallback; class CProcessAndThreadRefHost; class CProfferService; class CProgressDialog; class CProgressDialogUI; class CProgressTimer; class CPropVariant; class CProperTreeHost; class CProperTreeModule; class CProperTreeModuleInner; class CPropertyButton; class CPropertyChangedEventArgs; class CPropertyControlBase; class CPropertyStoreHelper; class CPropertyThumbnailHandler; class CPropertyUI; class CPropertyValue; class CProviderDelay; class CProviderTypeAheadResult; class CProximityParams; class CPublishBase; class CPublishBaseWithOwner; class CPublishedItem; class CPublishedItemEnumerator; class CPublishedItemsFolder; class CPublishedItemsFolderViewCB; class CPublishedItemsService; class CPublishedMessage; class CPublishedUsersFilesDescription; class CQueryCscPropertyInfoTask; class CQueryFocusParams; class CQueryWithLinguisticAlternatives; class CQueueItem; class CQuickLinks; class CRC64; class CRGBColor; class CRGTypeSizes; class CRPCTimeout; class CRTFPreviewHandler; class CRatingsControl; class CReadingPaneCallback; class CReadingPaneHostUpdateWorkItem; class CReadingPaneModule; class CReadingPaneModuleHost; class CReadingPaneModuleInner; class CReadingPaneUpdateWorkItem; class CRebuildSessionTask; class CRecentDocsContextMenu; class CRecoveryTable; class CRecycleBinBase; class CRecycleBinBaseEnum; class CRecycleBinCleaner; class CRecycleBinData; class CRecycleBinEnumMgr; class CRecycleBinFinishOperation; class CRecycleBinManager; class CRefCountedCriticalSection; class CRefCountedDPA; class CRefCountedObject; class CReferenceCounted; class CRegSupport; class CRegSupportBuf; class CRegTreeItemBase; class CRegTreeOptions; class CRegistryChangeListener; class CRegistryVerbArray; class CRegistryVerbsContextMenu; class CRemoveLocationTask; class CRemoveMediaServerCommand; class CRemovePropertiesDropTarget; class CRenameDialog; class CResetEASPolicyVisibilityCondition; class CRestoreEditModifiedFlag; class CRestoreFavoriteLinksExecute; class CRestoreLibrariesExecute; class CResultsFolder; class CResultsFolderViewCB; class CResultsMenuCB; class CResultsMenuWrap; class CResultsTaskBase; class CRibbonDeleteCommand; class CRichPreviewBackgroundThreadData; class CRichPreviewThreadData; class CRichPreviewThreadParams; class CRichTypeAheadResult; class CRunAsNewUser; class CRunDlg; class CRunnableTask; class CSFStorage; class CSFStorageEnum; class CSFToolbar; class CSHAccessibleBase; class CSHAccessibleHWNDBase; class CSHEnumClassesOfCategories; class CSafeElementProxy; class CSafeServiceSite; class CSaveControlsModule; class CSaveControlsModuleInner; class CSaveDialogPreviewMetadata; class CSaveDialogPreviewMetadataInner; class CSaveLocationPropertyBag; class CSaveLocationsTask; class CScfFileExecute; class CScopeDialog; class CScopeTreeRootFilter; class CScriptAutoDetection; class CScrollBarFlickerRemover; class CScrollingHwnd; class CSearchConnectorFolder; class CSearchEverywhereTask; class CSearchHistoryCompare; class CSearchHistoryStoreEntryTask; class CSearchHistoryString; class CSearchHistorySuggestionsTask; class CSearchOnlyLibraryPage; class CSearchPageText; class CSearchPropSheet; class CSearchStringComparer; class CSecondaryTileFile; class CSecurityZoneChecker; class CSelectArrangeByColumnCommandBase; class CSelectColumnCommandBase; class CSelectGroupByColumnCommand; class CSelectIconSizeCommand; class CSelectSortByColumnCommand; class CSelectionManager; class CSendToMenu; class CServerManagerLinkVisibilityCondition; class CSetShellForeground; class CSetSlideshowState; class CShare; class CSharePointView; class CSharePointViewFVCB; class CShellCmdFileIcon; class CShellDispatch; class CShellDriveProps; class CShellFolderSet; class CShellFolderSetEnumTask; class CShellFolderView; class CShellFolderViewOC; class CShellIconGlobalSettings; class CShellKnownFolderHandler; class CShellMenuCallbackWrapper; class CShellProtectedRegLock; class CShellSearchExt; class CShellTreeWalker; class CShellUrl; class CShortcut; class CShowDWMTreeItem; class CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper; class CSimpleArrayStandardCompareHelper; class CSimpleCaseInsensitiveOrdinalStringArray; class CSimpleDialog; class CSimpleHashTable; class CSimplePointerArrayCoTaskMem; class CSimplePointerArrayNewMem; class CSimpleReconcileInitiator; class CSimpleTaskItem; class CSimpleUICommand; class CSingleItemSplitDefaultCommand; class CSizeAllColumnsCommand; class CSizeCountSecureStringResult; class CSlideshow; class CSlideshowSettings; class CSlideshowWorker; class CSnapRTask; class CSortOrderCommand; class CSourceViewSizePreference; class CSparseCallback; class CSplitButton; class CSprocketsAdorner; class CStackComposer; class CStandardEnum; class CStartMenuPin; class CStaticPropertyControl; class CStatusBarModule; class CStatusBarModuleInner; class CStatusBarPropertyStore; class CStreamWithLayoutType; class CStringHashTable; class CSubQueryRootFilter; class CSuggestFilterWorker; class CSummaryPage; class CSuppressAutoplay; class CSyncCommandState; class CSyncIntegrationManager; class CSyncStatusHandler; class CSyncStatusProviderInfo; class CSyncingOverlayHandler; class CTCoAllocPolicy; class CTContainer_PolicyLocalMem; class CTContainer_PolicyNewMem; class CTContainer_PolicyRelease; class CTContainer_PolicyUnOwned; class CTGlobalAllocPolicy; class CTLTStore; class CTLocalAllocPolicy; class CTTFProps; class CTaskCondition; class CTaskConditionBase; class CTaskConditionCombiner; class CTaskLock; class CTaskXmlFile; class CTaskbandPin; class CTasksFolder; class CTasksFolderCallback; class CTemplateBackground; class CTextPropertyControl; class CThemesRegTreeItem; class CThreadRefHost; class CThreadRefTaker; class CThumbnail; class CThumbnailAdorner; class CThumbnailAdornerFactory; class CThumbnailControlCallback; class CThumbnailControlHost; class CThumbnailLookupTable; class CThumbnailQueueItem; class CThumbnailsOrIconRegTreeItem; class CTileNotificationsBase; class CTimeCounter; class CTimeZoneInformationCache; class CTimeZoneInformationCache_InitOnDemand; class CToggleRecyclePromptCommand; class CToggleShellSettingCommand; class CToolBand; class CToolbarBand; class CToolbarMenu; class CTopViewCommand; class CTopViewCommandEnumerator; class CTopViewSubCommand; class CTrackEvents; class CTrackPopupBar; class CTrackShellMenu; class CTranscodedImage; class CTransferConfirmation; class CTransferConfirmationProxy; class CTransitionCscScopeOfflineTask; class CTransitionCscScopeOnlineTask; class CTravelEntry; class CTravelLog; class CTryHarderFactory; class CTryHarderItem; class CTryHarderItemComputer; class CTryHarderItemCustom; class CTryHarderItemFolderID; class CTryHarderItemInternet; class CTryHarderItemPinnedLibrary; class CTypeAheadFramework; class CTypeAheadLocalMetadataProvider; class CTypeAheadLocalSettings; class CTypeAheadSearchHistoryProvider; class CTypeAheadSearchHistorySettings; class CTypeWrapper; class CTypedDataThumbnailHandler; class CUACount; class CUADBLog; class CUASession; class CUICommand; class CUICommandObject; class CUICommandStateMachine; class CUIDisplayStateMachine; class CUIElement; class CUdfFormatter; class CUndoManager; class CUndoRedoCommand; class CUniversalDelegateFolder; class CUnmappedXmlAttrib; class CUnmappedXmlElement; class CUnmappedXmlNameText; class CUnmappedXmlStorage; class CUnmappedXmlString; class CUserAssist; class CUserChoice; class CUserChoiceForFileAssociation; class CUserChoiceForUrlAssociation; class CUserEventTimer; class CUserFilesDescriptionEnum; class CUserNotification; class CUsersLibrariesCommandProvider; class CUsersLibrariesDropTarget; class CUsersLibrariesFolderUI; class CValuePtr; class CVerbStateTask; class CVerbWalkCallback; class CVersionPropertyStore; class CViewGroup; class CViewOptionsCommand; class CViewRemotePrintersCommand; class CViewSlider; class CVolume; class CWRLExecuteCommandBase; class CWRLObjectWithGITSite; class CWRLObjectWithSite; class CWSDPublisher; class CWVTASKITEM; class CWaitCursorManager; class CWaitForNavigateComplete; class CWaitForWindow; class CWaitTask; class CWallpaperCollection; class CWallpaperRenderer; class CWallpaperWindow; class CWindowPropStore; class CWordMatch; class CWordWheel; class CWorkItemQueue; class CWrapOldCallback; class CXElementModule; class CXElementModuleInner; class CXPContext; class CXmlElement; class CXmlEntity; class CXmlIndexMap; class CZeroInitNew; class CallerIdentity; class CheckAndReNavigateToParentTask; class CheckButton; class CheckboxButtonElement; class CheckboxContentElement; class CheckboxElement; class CloudFileProvider; class CloudFilesTelemetry; class CoCreateInstanceAsSystemTaskServerLogging; class CoCreateInstanceAsSystemTelemetry; class CoTaskMemFree; class CoUninitialize; class CollectedConflictTelemetry; class CollectionChangeArgs; class ColumnBalancingLayout; class Common; class CompactData; class CompactItem; class Composition; class CompositionDevice; class ConfirmationDlgUtils; class ConfirmationInterruptElement; class ConflictInterruptElement; class ConflictItemElement; class ConflictItemTile; class ContextMenuInfo; class ContextMenuRenderingData; class ContextMenuTelemetry; class ControlData; class ControlPanelNavigationTelemetry; class CopyEngineDialogTelemetry; class CopyTileAnimationUtils; class CreateObjectHandler; class CreateObjectTaskDelegate; class CreateObjectTaskServer; class D2D1_BITMAP_PROPERTIES1const; class D2D_POINT_2F; class D2D_RECT_F; class D2D_SIZE_U; class DEADCOUNTS; class DEFCONTEXTMENU; class DELEGATEBASEITEM; class DESKBANDINFO; class DFMICS; class DIBSectionUtil; class DISKCOPY; class DISK_INFORMATION; class DISPLAYCONFIG_MODE_INFO; class DISPLAYCONFIG_PATH_INFO; class DISPLAY_OBJECT_CONTAINER_DATA; class DPIToPPIHelpers; class DRAGDROPMENUPARAM; class DRIVEPROPSHEETPAGE; class DYNASTGDATA; class DefViewTelemetry; class DefaultAssocLogging; class DefaultAssocTelemetry; class DefaultLocationUtilsImpl; class DeferWindowPosHelper; class DelayAllocateTLSLogging; class DelayAllocateTLSTelemetry; class DelayedInvokeCommand; class DelayedInvokeMenu; class DelegateInvokeHelper; class DeleteItem; class DeleteObject; class DesktopCopier; class DesktopData; class DesktopDataForTracelog; class DesktopDictionary; class DesktopIconLayoutDataModel; class DesktopIconLayoutLogging; class DesktopIconLayoutMapper; class DesktopIconLayoutTelemetry; class DesktopMatchInformation; class DesktopMatcher; class DesktopPersonalizationLogging; class DesktopPersonalizationTelemetry; class DesktopWallpaperProvider; class DesktopWallpaperTelemetry; class Destroy; class DetailsPaneHwndHost; class DispatcherQueueHelper; class DisplayModeButton; class DragTrayShellHostHandler; class DuiFrameTelemetry; class EXP_DARWIN_LINK; class EdpHelpers; class EjectParams; class ElementWidthComparer; class ElementWrapper; class EnableExplicitPlaceholderHydrationMode; class EncryptHandle; class EventRegistrationToken; class ExecuteItemCommandLaunchProperties; class ExplorerCommandItem; class ExplorerCommandNameIDPair; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FINDPRINTERINFO; class FMIFS; class FMIFS_FORMATEX2_PARAM; class FNNRW3const; class FOLDERMENUITEMDATA; class FOLDEROPTDATA; class FOLDERSETTINGS; class FORMATINFO; class FSIconOverlay; class FSMENUINFO; class FavoritesTelemetry; class FetchFreeBlocksParams; class FileActionMetadata; class FileExplorerAggregateTelemetry; class FileExplorerContextMenu; class FileExplorerErrorFallback; class FileExplorerLogging; class FileExplorerPerf; class FileExplorerSessionWatcher; class FileExplorerTabsRestoreTelemetry; class FileExplorerTelemetry; class FileExplorerTelemetryCommon; class FileExplorerTelemetryDesktop; class Folder; class FolderItem; class FolderItemVerb; class FolderItemVerbs; class FolderItems; class FolderOptionsTelemetry; class ForceSyncShellExecuteService; class GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__; class GDIHelpers; class GFAGVICALL; class GMA_ACTIONINFO; class GROUPITEM; class GROUP_ITEM_ENTRY; class GlobalInterfaceTable; class GlobalUnlock; class GraphRecentItems; class GridWorkspace; class GridWorkspaceWorker; class HACCEL__; class HAMSICONTEXT__; class HBITMAP__; class HBRUSH__; class HCONV__; class HDCONTEXT__; class HDC__; class HDDEDATA__; class HDEVQUERY__; class HDROP__; class HFONT__; class HICON__; class HIDDENFOLDERDATA; class HIDDENRECYCLEBINDATAV1; class HIDDENRECYCLEBINDATAV2; class HIDDENRECYCLEBINDATAV21; class HINSTANCE__; class HKEY__; class HKL__; class HMENU__; class HMONITOR__; class HPALETTE__; class HRGN__; class HSTRING__; class HSZ__; class HTIPTEST__; class HWNDFloat; class HWND__; class HashBucket; class HomeFolderSettings; class HomegroupLogging; class HomegroupTelemetry; class IACList; class IAccPropServices; class IAccessible; class IAccessibleEx; class IAccessor; class IActivationFactory; class IActiveDesktop; class IAdvancedDialog; class IAdviseSink; class IAggregateImageList; class IAggregateMultipleValues; class IAgileReference; class IAnimation; class IAppControl; class IApplicationActivationManager; class IApplicationActivationManagerPriv; class IApplicationResolver; class IApplicationTileInformation; class IApplicationTileInformationPriv; class IApplicationViewManifestInformation; class IAssocHandler; class IAssocHandlerInvoker; class IAssocInfo; class IAssociationArray; class IAssociationElement; class IAsyncResetTaskCallback; class IAugmentedShellFolder; class IAutoCompTestHook; class IAutoListDescription; class IAutoPlayUI; class IAutomaticDestinationList; class IAutomaticDestinationListPrivate; class IAutomaticDestinationListPropertyStore; class IAutoplayContentHandler; class IAutoplayDeviceHandler; class IAutoplayHandler; class IAutoplayHandlerList; class IBDATA; class IBindCtx; class IBindScopeDialog; class IBindStatusCallback; class IBrowserProgressSessionProvider; class IBrowserTrackEventsCallback; class IBrowserWithActivationNotification; class ICIVERBTOIDMAP; class ICONIMAGE; class ICONRESOURCE; class IC_HEAD; class ICachedPrivateProfile; class ICancelMethodCalls; class ICapabilities; class ICategoryDescription; class IChangeNotifySink; class IChildId; class IClassFactory; class ICollectionEventSink; class ICommDlgBrowser; class ICommDlgBrowser2; class ICommandInvokeContext; class ICompositionChangedSink; class ICompositionProcessor; class ICondition; class IConditionFactory2; class IConfigurePopupProperty; class IConfirmationInterrupt; class IConflictDialogCallback; class IConflictDialogData; class IConflictDialogDataMode; class IConflictDialogDataResponse; class IConflictInterrupt; class IConflictInterruptFilter; class IConflictItemDataCallback; class IConflictOperationScheduler; class IConnectionPoint; class IConnectionPointContainer; class IContextMenu; class IContextMenu2; class IContextMenu3; class IContextMenuCB; class IContextMenuForProgInvoke; class IContextMenuPresenter; class ICreateObject; class ICreateProcessInputs; class ICreateProcessOutputs; class ICriticalSection; class ICurrentItem; class ICustomCollection; class ID2D1Bitmap1; class ID2D1Device; class ID2D1DeviceContext; class ID2D1Effect; class ID2D1Factory1; class ID3D11Device; class IDNETRESOURCE; class IDXGIDevice; class IDXGIFactory1; class IDataObject; class IDebugOutput; class IDefViewDropTargetHelper; class IDefaultExtractIconInit; class IDeskBand; class IDeskTray; class IDesktopIconLayoutDataModel; class IDiscFormat2; class IDiscFormat2Data; class IDiscMaster2; class IDiscRecorder2; class IDispatch; class IDispatchNotification; class IDisplayInformationStaticsInterop; class IDrawPropertyControl; class IDriveFolderViewCallbackProvider; class IDropSource; class IDropTarget; class IDuiBehavior; class IElementClassProvider; class IEmptyVolumeCacheCallBack; class IEnumAssocHandlers; class IEnumAssocInfo; class IEnumConnectionPoints; class IEnumConnections; class IEnumExplorerCommand; class IEnumExtraSearch; class IEnumFORMATETC; class IEnumFullIDList; class IEnumGUID; class IEnumGeneric; class IEnumIDList; class IEnumOLEVERB; class IEnumObjects; class IEnumOleUndoUnits; class IEnumReadyCallback; class IEnumRecycleItems; class IEnumSTATDATA; class IEnumSTATPROPSETSTG; class IEnumSTATPROPSTG; class IEnumSTATSTG; class IEnumShellItems; class IEnumShellReminder; class IEnumString; class IEnumTravelLogEntry; class IEnumUICommand; class IEnumUnknown; class IEnumVARIANT; class IEnumerateAssociationElements; class IErrorLog; class IExecuteCommand; class IExecuteCommandApplicationHostEnvironment; class IExecuteCommandHost; class IExplorerBrowser; class IExplorerBrowserEvents; class IExplorerCommand; class IExtractIconW; class IExtractImage; class IFSFolderPriv; class IFileDialog; class IFileExplorerGlobalSettingsInternal; class IFileIsInUse; class IFileOperation; class IFileOperationConflictItemsMetadata; class IFileOperationProgressSink; class IFilePropSheetPageHelper; class IFileSystemBindData; class IFileSystemBindData2; class IFileSystemImage; class IFilterCondition; class IFilterControl; class IFilterControlCallback; class IFilterWorkerItem; class IFolderFilter; class IFolderTypeDescription; class IFolderView; class IFolderView2; class IFolderWithSearchRoot; class IFrameLayoutDefinition; class IFrameTaskManager; class IFrameWorkItem; class IFsiDirectoryItem; class IGangImageList; class IGetImageStream; class IHTMLElement; class IHTMLElementCollection; class IHTMLEventObj; class IHWDeviceCustomProperties; class IHardwareDevices; class IHlink; class IHlinkBrowseContext; class IHomeGroupStatus; class IIdentityStore; class IImageList; class IImageList2; class IImageListImageDecorator; class IImeCompatibleChangedSink; class IInfoBarMessage; class IInitializeWithItem; class IInitializeWithStream; class IInitializeWithWindow; class IInspectable; class IInternetHostSecurityManager; class IInternetSecurityManager; class IItem; class IItemCollection; class IItemCollectionFactory; class IItemEventSink; class IItemFilter; class IItemImageInfo; class IItemImageStreamProvider; class IItemKeyArray; class IItemNameLimits; class IItemStore; class IItemThumbnailCallback; class IKnownFolder; class ILaunchSourceAppUserModelId; class ILaunchSourceViewSizePreference; class ILaunchTargetMonitor; class ILayerImageList; class ILayoutPreferencesOnAppLaunch; class ILibraryDescription; class ILinguisticAlternativeGenerator; class ILinkTarget; class IListControl; class IListControlHost; class IListDescription; class IListView; class IListView2; class IListViewFooter; class IListViewHost; class IListViewPopup; class ILocalCopyDownloadSettings; class ILocationDescription; class ILocationDescription2; class IMAGE_PREFETCH_PARAMS; class IMAGE_PREFETCH_RESULT; class IMMERSIVE_COLOR_PREFERENCE; class IMalloc; class IMenuBand; class IMenuPopup; class IMoniker; class IMruDataList; class IMultiValueCollection; class IMultipleValues; class INCLUDEINLIBRARYITEM; class INDEXED_VIEW_ITEM_ENTRY; class INDIVIDUAL_CONFLICT_FAST_DATA; class INDIVIDUAL_CONFLICT_MAPPING_DATA; class INameSpaceTreeControl; class INamedPropertyStore; class INetworkFolderInternal; class INewItemAdvisor; class INewObjectHandler; class INotifiableProperty; class INotificationDispatcher; class IObjectArray; class IObjectCollection; class IObjectWithAssociationElement; class IObjectWithItem; class IObjectWithItemCollection; class IObjectWithOwner; class IObjectWithSelection; class IObjectWithSite; class IObjectWithWindow; class IObjectWithWindowRect; class IOfflineFilesCache; class IOfflineFilesItem; class IOleClientSite; class IOleCommandTarget; class IOleInPlaceActiveObject; class IOleInPlaceFrame; class IOleInPlaceUIWindow; class IOleObject; class IOleParentUndoUnit; class IOleUndoManager; class IOleUndoUnit; class IOleWindow; class IOpenControlPanel; class IOpenWithTypeOverride; class IOperationDataReader; class IOperationInterrupt; class IOperationStatusSink; class IOperationStatusTilePriv; class IOplockProvider; class IPackageInformation; class IPersist; class IPersistFile; class IPersistHistory; class IPersistPropertyBag; class IPersistSerializedPropStorage; class IPersistStream; class IPinnedList3; class IPopupCommand; class IPopupCommandHandler; class IPopupWindow; class IPreviewHandlerFrame; class IPreviewHostCallback; class IProgressDialog; class IProgressTimer; class IPropertyBag; class IPropertyChangeArray; class IPropertyControl; class IPropertyControlBase; class IPropertyControlSite; class IPropertyDescription; class IPropertyDescriptionList; class IPropertyDescriptionPriv; class IPropertyDescriptionRelatedPropertyInfo; class IPropertyInfoProvider; class IPropertyKeyStore; class IPropertyProvider; class IPropertySetStorage; class IPropertyStorage; class IPropertyStore; class IPropertyStoreCache; class IPropertyStoreCapabilities; class IPropertyStoreFactory; class IPropertySystem; class IPropertyValue; class IPublicationServicesChangeData; class IPublicationServicesPublisher; class IPublishedItemDescription; class IQueryAssociations; class IQueryContinue; class IQuerySource; class IQueryWithLinguisticAlternatives; class IQueueItem2; class IRawElementProviderFragment; class IRawElementProviderFragmentRoot; class IRawElementProviderSimple; class IRawElementProviderWindowlessSite; class IReconcileInitiator; class IRecycle; class IRecycleBin; class IRecycleBinManager; class IRegItemCustomAttributes; class IRegTreeOptionsEventListener; class IRegisteredTask; class IRegistryChangeListener; class IResultShape; class IResultsFolderEx; class IRichChunk; class IRowset; class IRowsetEvents; class IRunnableTask; class IRunningObjectTable; class ISafeElementProxyInvokeHelper; class IScope; class IScopeDialogEvents; class IScopeDialogUIInfo; class IScopeFactory; class IScopeItem; class IScrollingWindow; class ISearchCatalogManager; class ISearchCatalogManagerInternal; class ISearchContext; class ISearchFolderItemFactory; class ISearchTypeAheadEventsSink; class ISearchTypeAheadResult; class ISecurityZoneChecker; class IServiceProvider; class ISharedBitmap; class IShellBandProxy; class IShellBrowser; class IShellBrowserService; class IShellExtInit; class IShellFolder; class IShellFolder2; class IShellFolder2const; class IShellFolder3; class IShellFolderView; class IShellFolderViewCB; class IShellIconOverlay; class IShellImageData; class IShellImageDataAbort; class IShellItem; class IShellItem2; class IShellItemArray; class IShellItemFilter; class IShellLibraryPriv; class IShellLinkW; class IShellMenu; class IShellMenuCallback; class IShellNavigationTarget; class IShellPropSheetExt; class IShellReminderManager; class IShellSearchScope; class IShellServiceObject; class IShellTaskScheduler; class IShellTaskScheduler2; class IShellTravelLogUI; class IShellTreeWalkerCallBack; class IShellView; class IShellWindows; class IShouldSwitchToDesktop; class ISortColumnArray; class ISplashScreen; class IStorage; class IStorageProviderInfo; class IStream; class ISuggestFilterCallback; class ISyncMgrConflictItems; class ISyncMgrConflictResolutionItems; class ISyncRootManager; class ISyncRootManagerPriv; class ISyncStatusCacheEntry; class ISyncStatusProvider; class ISyncStatusProviderInfo; class ISyncTransferStatus; class ITEM_ENTRY; class ITEM_IMAGE_RESULT; class ITaskCondition; class ITaskHandler; class ITaskService; class ITaskbarLayoutItem; class ITelemetryCorrelationVector; class ITextTypeAheadResult; class ITfActiveLanguageProfileNotifySink; class ITfCandidateList; class ITfContext; class ITfEditRecord; class ITfRange; class ITfSource; class ITfTextEditSink; class IThreadUndoManager; class IThumbnailProvider; class ITopViewAwareItem; class ITopViewDescription; class ITrackEvents; class ITransferAdviseSink; class ITransferHelper; class ITransferSource; class ITravelEntry; class ITravelLog; class ITravelLogEntry; class ITrustedComponentForegroundControl; class ITryHarderItem; class ITypeAheadProviderEventSink; class ITypeAheadSearchSettingsCallback; class ITypeInfo; class IUASession; class IUIAutomationProxyFactory; class IUICommand; class IURLSearchHook; class IUnknown; class IUpdatableItemSet; class IUpdatableItemSetCallback; class IUpdateViewValueSet; class IUri; class IUserEventTimerCallback; class IUserNotification; class IUserNotificationCallback; class IUsersFilesDescription; class IVerbStateTaskCallBack; class IViewFilters; class IViewFrame; class IViewFrameHost; class IViewSettings; class IViewStateInfo; class IVisualProperties; class IWICBitmap; class IWICBitmapDecoder; class IWICBitmapEncoder; class IWICBitmapFrameDecode; class IWICBitmapSource; class IWICColorTransform; class IWICImagingFactory; class IWICMetadataQueryReader; class IWaitCursorManager; class IWakeOnRPCCalls; class IWallpaperHost; class IWallpaperWindow; class IWeakReference; class IWebBrowser2; class IWinEventHandler; class IWizardExtension; class IWordSink; class IXMLDOMDocument; class IXMLDOMElement; class IXMLDOMNodeList; class IXmlReader; class IXmlWriter; class IZoneIdentifier; class IconCacheLogging; class IconCacheTelemetry; class IconGridItem; class IconGridItemWorker; class IconGridPosition; class IconLayoutEngine; class IconNameTable; class IdElement; class ImmersiveContextMenuHelper; class IndividualConflictTelemetry; class IndividualConflictTileElement; class IndividualConflictsDialogHWNDElement; class InterruptButton; class InterruptResponseButton3d; class ItemsUnavailableDialog; class KeyboardPaneResizer; class LINKPROP_DATA; class LOCATIONDISPLAYINFO; class LOOKUP_ENTRY; class LaunchSettingsPageHandler; class LaunchSpotlightHotspotHandler; class LauncherNotifyHelper; class LauncherViewOptions; class LeaveCriticalSection; class LibraryLogging; class LibraryQueryFolder; class LibraryQueryFolderTelemetry; class LocalFree; class LocalSTAServerWrapper; class LocalServerWrapper; class LoggingUtil; class LowDiskNotificationActivationCallback; class MATRIXDATA; class MENU_COMMAND_MATCH; class MINST; class MNITEM; class MN_BKGDENUMDONEDATA; class MODULECPLINFO; class MODULEENTRY; class MVPTOKENDATA; class MaliciousTextScanning; class MatchingWorkspaceMapping; class MessageBoxConfirmation; class MetadataLayout; class MountPointTelemetry; class NEWFILEINFO; class NEWOBJECTINFO; class NOTIFICATION_USER_INPUT_DATA; class NRWINFO; class NSITEM; class NSTCCUSTOMDRAW; class NamedProperty; class NamespaceRestrictionHelper; class NavPanePinnedFolderOptionBase; class NavPaneShowNetworkFolderOption; class NavPaneShowThisPCFolderOption; class NavigateAsyncStateMachine; class NewMenuEntry; class NewMenuExtIterator; class NineBltter; class NotifyError; class OOBEHealthLogging; class OOBEHealthTelemetry; class OOPContextMenuWrapper; class OPERATION_INTERRUPT_RESPONSE_AGGREGATED; class ORDERINFO; class ORDERITEM; class ORDERITEM2const; class ORIGINALICONINFO; class OpenWithLogging; class OpenWithTelemetry; class OperationTileArea; class OperationTileElement; class OperationTileHeader; class OperationTileHeaderPart; class OperationTileHost; class PACKAGE_INFO; class PACKEDMETA; class PCSETTINGIDL; class PDSIZEUPDATE; class PINENTRY; class PMPolicyRetrievedInfo; class PREVIEWHANDLERFRAMEINFO; class PROGRESSINFO; class PROGRESS_DATA; class PROPLISTVIEWDATA; class PUBITEMID; class PaintBatch; class ParserForResID; class PassThroughDropTarget; class PathPiiProperties; class PathProperties; class PauseButton; class PendingThirdPartyEmit; class PiiSafeFolderList; class PiiSafeKnownFolder; class PiiSafeRegistryFolder; class PiiSafeShellitemParsingName; class PiiSafeShellitemParsingNameHelpers; class PiiSafeShellitemParsingNameProperties; class PopupInfo; class PostBootReminderLogger; class PreviewHandlerCreationContext; class PreviewPaneTelemetry; class ProcessHangGuard; class ProgressAggregratorTelemetry; class PropSheetAccAnnotation; class ProperTreeHostInternal; class PropertyThumbnailHandlerLogging; class PropertyThumbnailHandlerTelemetry; class PropsToXmlEngine; class QUERRYRUNNINGOBJECTSTRUCT; class QUERYNAMESPACEINFO; class READINGPANEHOST_UPDATE_PARAMS; class READINGPANE_UPDATE_PARAMS; class RECOVERY_ENTRY; class RECTF; class REGISTRY_VERB_ITEM; class REPLACEVERB; class RESULT_FOLDER_ITEM; class RUNASNEWUSERPARAM; class RatingValue; class RecycleBinEntry; class RecycleDataV1const; class RecycleDataV2; class RegCloseKey; class RelatedContentData; class ReleaseSRWLockExclusive; class ReleaseSRWLockShared; class RemoveIfFreeString; class RunDialogLogging; class RunDialogLoggingTelemetry; class RunDlgEditAccessible; class SAP_ITEM; class SEARCHOPTIONINFO; class SEARCH_TYPEAHEAD_ITEM; class SELECTION_DEVIRTUALIZATION_PARAMS; class SENDTOITEM; class SESSION_EVENT_METADATA; class SFVM_WEBVIEW_TASKSECTION_DATA; class SHDRAGIMAGE; class SHELLNEW_CACHE_STAMP; class SHELLSTATEW; class SIZEF; class SNMaxEntry; class SORTCOLUMN; class SP; class SP_HLOCAL; class SQM; class STR_RESULTS_PROCESSING_CONFIG; class SearchKeyIterator; class SearchMetadata; class SearchResults; class SecondaryTileIdentifierHelpers; class SecureBootToastHelper; class SelectorButton; class SetDarkModeForWindows; class ShStrW; class SharedPaintingState; class Shell32Instance; class Shell32Logging; class Shell32LoggingTelemetry; class ShellInfraCriticalFailureProvider; class ShellItemCompare; class ShellItemData; class ShellItemLink; class ShellItemLinkFitter; class ShellNewItemMenuTelemetry; class ShieldProviderServiceLogging; class ShieldProviderServiceTelemetry; class SimpleList; class SkipOwnerDisableSite; class SpotlightHotspotAttributes; class StartMenuColor; class StateRepoHelpers; class StateRepoNewMenuCache; class StatusBarModuleTelemetry; class StorageProviderBanners; class StorageUsageTelemetry; class StructuredQuery1; class SyncEngineError; class SyncEngineStatusUtils; class SyncProviderRecycleBinLinks; class SyncProviderRecycleBinsContainer; class SyncProviderTelemetryHelpers; class SysFreeString; class TASKIDL; class TASKWITHOVERRIDE; class TASK_COMBINE_STATE; class TBBUTTONINFOW; class TLV; class TOPVIEWKEY; class TRACKEDOPERATION; class TREEWALKERSTATS; class TWODWORDS; class TYPEAHEAD_LOCAL_SETTINGS; class TabletModeHelpers; class TaskbarFlexibleLayoutTelemetry; class TaskbarLogging; class TaskbarPinHelper; class TaskbarPinningTelemetry; class TaskbarTelemetryHelper; class TelemetryCorrelationVectorServiceProvider; class TipReportingInfo; class TraceLoggingCorrelationVector; class TraceLoggingCorrelationVectorV1_t; class TraceLoggingCorrelationVectorV2_t; class TranscodeCache; class TranslateResetEvent; class TrayHelpers; class UALOG_INFO; class UICOMMAND_DEF; class UID; class UIDisplayModeButtonExpandCollapseProvider; class UIDisplayModeButtonExpandCollapseProxy; class UIDisplayModeButtonProvider; class UIDisplayModeButtonProxy; class UPDATE_PROGRESS_VALUES; class URL_COMPONENTSW; class USEREVENTINFO; class UiaRect; class UnInitDeletedItem; class VIEWSTATE_POSITION; class VIEW_ITEM_ENTRY; class ValueRef; class ViewControl; class WALLPAPER_SLIDESHOW_IMAGE_ENTRY; class WORKITEMENTRY; class WRAPPED_IDLIST; class WTS_THUMBNAILID; class Wallpaper2; class WallpaperSurface; class WallpaperVisual; class WorkAreaWithDPI; class WorkspaceData; class XMLPROP_ITEM; class XP_STORAGE; class XmlToPropsEngine; class YNLIST; class ZonePreWarmWorkItem; class _ACE_HEADER; class _ACL; class _ATL_WNDCLASSINFOW; class _AdapterInfo; class _BY_HANDLE_FILE_INFORMATION; class _Buffer_view; class _CMINVOKECOMMANDINFO; class _CMINVOKECOMMANDINFOEX; class _CONTEXT; class _CSFV; class _CV_STYLE; class _DAV_HTTP_SEND_BUFFER; class _DCA; class _DDECOMMANDINFO; class _DDECONV; class _DEVICE_HARDWARE_REQUIREMENT; class _DEVPROPKEY; class _DEV_BROADCAST_HDR; class _DEV_QUERY_RESULT_ACTION_DATA; class _DOCHOSTUIINFO; class _DO_DEVINFO_DATA; class _DPA; class _DPASTREAMINFO; class _DSA; class _DTTOPTS; class _EVENT_DESCRIPTOR; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _EventHandle; class _FILEDESCRIPTORW; class _FILETIME; class _FILE_STREAM_INFO; class _GUID; class _HIDDENITEMID; class _HashTable; class _IDA; class _IDCONTROL; class _IDCONTROLW; class _IDREGITEM; class _IMAGELIST; class _ITEMIDLIST; class _ITEMIDLIST_ABSOLUTE; class _ITEMIDLIST_RELATIVE; class _ITEMID_CHILD; class _ITEMSPACING; class _LARGE_INTEGER; class _LUID; class _MARGINS; class _Mbstatet; class _PERSIST_FOLDER_TARGET_INFO; class _POINTL; class _PROPSHEETHEADERW_V2; class _PROPSHEETPAGEW; class _PSP; class _PersistedFrame; class _QCMINFO; class _RECTL; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _RTL_VERSION_RESOURCE; class _SECURITY_ATTRIBUTES; class _SECURITY_QUALITY_OF_SERVICE; class _SHDDEERR; class _SHELLDETAILS; class _SHSQM_STREAM_ENTRY; class _SID_IDENTIFIER_AUTHORITY; class _SQM_STREAM_ENTRY; class _STORAGE_DEPENDENCY_INFO_TYPE_2const; class _STRRET; class _SV2CVW2_PARAMS; class _SYSTEMTIME; class _SourceInfo; class _TASKDIALOGCONFIG; class _TBBUTTON; class _TIME_ZONE_INFORMATION; class _TOKEN_GROUPS; class _TOKEN_MANDATORY_LABEL; class _TOKEN_USER; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _TP_WORK; class _TREEITEM; class _TargetInfo; class _TlgReflectorTag_Param0IsProviderType; class _ULARGE_INTEGER; class _USB_NODE_CONNECTION_INFORMATION_EX_V2_FLAGS; class _USER_PICTURE_ELEMENT; class _USER_PICTURE_ELEMENTS; class _VIRTUAL_STORAGE_TYPE; class _WIN32_FIND_DATAW; class _WINDOWDATA; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __FC_Config_Info; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _charrange; class _openasinfo; class _reqresize; class _storageinterface; class _tagCOMPONENT; class _tagCOMPONENTSOPT; class _tagEASPolicy; class _tagOLECMD; class _tagOLECMDTEXT; class _tagPasswordPolicies; class _tagSHELLREMINDER; class _tagWALLPAPEROPT; class _tagWORKITEMCALLBACKPARAM; class _tagpropertykey; class _tip_ApplyFilterTip; class _tip_ContextMenuCreationTest; class _tip_ContextMenuE2ELoadTest; class _tip_ContextMenuInitTest; class _tip_ContextMenuSelectionTest; class _tip_CreateSavedWindowsRestoreTabsTipTest; class _tip_DiscImageMountTipTest; class _tip_DragTrayShellHostHandlerTest; class _tip_FileSystemDropTargetTest; class _tip_FolderOptionsAdvancedTabDarkModeAppliedTest; class _tip_FolderOptionsGeneralTabDarkModeAppliedTest; class _tip_FolderOptionsSearchTabDarkModeAppliedTest; class _tip_IndexerUpToDateForFolderScope; class _tip_LogDesktopBackgroundInfoTIP; class _tip_NavPaneEnumeration; class _tip_PaintWallpaperTest; class _tip_RunDialogLaunchTipTest; class _tip_SetShowFileRecommendationsTipTest; class _tip_SpotlightContextMenuFeature; class _tip_SpotlightLearnMoreInvokeTest; class _tip_SpotlightNextInvokeTest; class _tip_SpotlightOptionsInBackgroundContextMenuTestUpdated; class _tip_UnattendAutoLogonSpotlightOnboarding; class _tip_s_DesktopSpotlightNewIconTip; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperArray; class _tlgWrapperBinary; class _tlgWrapperByRef; class _tlgWrapperByVal; class _tlgWrapperPtrSize; class _tltnode; class fc_tson; class g_compatStringMapping; class g_constraintStringMapping; class g_reasonMapping; class iterator; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_0c570b952cb8c389b591980ed6d0831f; class lambda_0d865b96fce7c02641690f4c93be6806; class lambda_0e39b4e02d07fc3330b16054b36d48cc; class lambda_108610b8fcdca2bf11776ace61882788; class lambda_10d9f7bcf64fd41b6a5caabab2b5add0; class lambda_12603dae6e80c2220100b0c8836f21bd; class lambda_16e90beb890bb5a0f3e760349136ba81; class lambda_1b52db660167bef5eec98c3668c3b7b4; class lambda_251f295440a5dd0b98d959f670da1a29; class lambda_255728157cf8e92998065ff06efe801f; class lambda_2def4ccacff58dc0da180ad4b5e56bd5; class lambda_2f5ee9b9dd98e54f2a19cfdda89d5715; class lambda_3040b6273e16bc227a954e2c48899996; class lambda_3141726a9d1542b8b4b7fdb275ab3c6e; class lambda_3fdb14453883e86a37ebade6a7a0ebb0; class lambda_48f03e61741d85dde7999758d1807eca; class lambda_4bdc63e3243003e35249c1132d0c83a7; class lambda_56cad1bd7d7547da24025cf592a38db4; class lambda_585920565fc29884865af87be0fd7527; class lambda_6079ae4647c357f81573b2312ff27029; class lambda_6594cbe5ee285500ed3cb3287a723d43; class lambda_68629a2cfc93c9567073a2a3da4bf69e; class lambda_69a5828deaba8899876eb1b8b82959c1; class lambda_6b05b266a64cab3589f1350d834df7c3; class lambda_6b0cae195501e3d4c1110e22b13992c8; class lambda_6b2f0bb6bfa842853de3d2327e2d5be9; class lambda_6de01c950feb3aff80ddbbad7ede40bd; class lambda_6df25296dd1b6c0df63547afd4de28ea; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_74a77eb88c5e117184bbeb7a4649bcc7; class lambda_78d0a7b9bf3ac601a0b8f066ec5e7d3d; class lambda_7c83438facaedde0ebae8ccee0feb102; class lambda_7d151714ca0074b33c977dd82f5c8610; class lambda_7ef6cf09cd6767662dbbd6a639c92cb6; class lambda_7f96eb1dcf99da5daec8c2467d2d5499; class lambda_801389270c9f3bb6703e5b95cfa6771c; class lambda_812d43827a54948c373254447793fa85; class lambda_81c76dce45cb960f23b9a516c9535c19; class lambda_866118fd8c5e73e1c8a45e5f5f1932b5; class lambda_8b52c731a89aac87383af9b49929425d; class lambda_8b697f11f38777b09329b6b574197e70; class lambda_8d34597b8e7fa8f80deeb729e346dfc1; class lambda_9821f77c8078defda8eb326c50a5516d; class lambda_9fec01534af9ff4a148394775f408578; class lambda_a0954c30a2483de78b0e4cd1ea84ebb1; class lambda_aedaab339d8e0eb587b5cf9f184a02cf; class lambda_afe97157cc2037e40854e4b5dc10abee; class lambda_b1d3d5239cf9cb1f39a745a48be3e17c; class lambda_b2d34ea2af6b6ebec0d83e963ec319fb; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_bd25f92f57fa1fc91e904174f91d3684; class lambda_c64cf85db19960042912251fc75bc007; class lambda_e117d82d43412a9c0c2e4cf3c5211455; class lambda_e7b0eda57dec3d6b13b17f5a31e7eb5e; class lambda_ec9250a35a9c155c1bc96b027d736634; class lambda_ef7be547338e12b5ef1f168ffcb92f03; class lambda_f0b0058c35c91142d2603957657c1ded; class lambda_f3fea9029d3a99ac4719cc293edb341b; class lambda_f7b635380627b618499f66d304958878; class nt_path_segment_tokenizer; class promise_type; class semanticSearchQueryMinLength_props; class serialize_config; class serialize_proxy; class size_address_ptr; class tagBANDSITEINFO; class tagBITMAP; class tagBLOB; class tagCHECKED_ITEM_ENTRY; class tagCONNECTDATA; class tagCONTROLINFO; class tagCREATESTRUCTW; class tagControlPanelCategoryInfo; class tagDELETEDITEM; class tagDISPPARAMS; class tagDLGINFO; class tagDRAWITEMSTRUCT; class tagDVTARGETDEVICE; class tagENUMHINTINFO; class tagEXCEPINFO; class tagFORMATETC; class tagGMSG; class tagHWDEVICEINFO; class tagITEMKEY; class tagLCITEM; class tagLIMITINPUT; class tagLOGFONTW; class tagLOGPALETTE; class tagLVDISPINFOW; class tagLVITEMINDEX; class tagLVITEMW; class tagLVKEYDOWN; class tagLVWORKAREAWITHDPI; class tagMENUITEMINFOW; class tagMINMAXINFO; class tagMOUSEHOOKSTRUCTEX; class tagMSG; class tagNC_ADDRESS; class tagNMCHAR; class tagNMCUSTOMDRAWINFO; class tagNMHDR; class tagNMHEADERW; class tagNMITEMACTIVATE; class tagNMLISTVIEW; class tagNMLVASYNCDRAWN; class tagNMLVGETINFOTIPW; class tagNMTBDUPACCELERATOR; class tagNMTBHOTITEM; class tagNMTBWRAPACCELERATOR; class tagNMTBWRAPHOTITEM; class tagNMTOOLBARW; class tagNMTOOLTIPSCREATED; class tagNMTREEVIEWW; class tagNMTTDISPINFOW; class tagOIFI; class tagOISTREAMITEM; class tagOleMenuGroupWidths; class tagPAINTSTRUCT; class tagPOINT; class tagPOINTF; class tagPROPSPEC; class tagPROPVARIANT; class tagRECT; class tagRGBQUAD; class tagSAFEARRAY; class tagSELECTED_ITEM_ENTRY; class tagSERIALIZEDPROPSTORAGE; class tagSIZE; class tagSMDATA; class tagSMINFO; class tagSTATPROPSETSTG; class tagSTATPROPSTG; class tagSTATSTG; class tagSTAT_CHUNK; class tagSTGMEDIUM; class tagSTYLESTRUCT; class tagTEXT_SOURCE; class tagTPMPARAMS; class tagTVDISPINFOW; class tagUEMINFO; class tagVARIANT; class tagVERGRAPH; class tagVOLUMEINFO; class tagVOLUMEINFO2; class tagVOLUMEINFO2const; class tagWVTASKITEM; class thunk; class tip2; class tson; class type; class type_info; class unnamed; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class wil_details_RecordUsageResult; class winrt; 
namespace ARI { namespace ProcessToken { class SysAppId; } } 
namespace AppBarTelemetry { class AddRemoveAppBar; } 
namespace BrowserChannels { class Info; class Private; } 
namespace BrowserReplacementVariant { class Private; } 
namespace ConfirmationUIUtils { class CConfirmItemInfo; } 
namespace ContentManagement { class ITaskBarAppProperties; } 
namespace CopyEngineDialogTip { class _tip_ConfirmationDialogTipTest; class _tip_IndividualConflictsDialogTipTest; class _tip_Shell32InfoTest; } 
namespace DefViewTip { class _tip_AsyncRenameLatencyTip; } 
namespace DirectUI { class AccessibleButton; class AutoDefer; class AutoLock; class Button; class ClassInfo; class ClassInfoBase; class CritSecLock; class DCSurface; class DUIXmlParser; class DoubleAllocationPolicy; class DynamicArray; class DynamicArrayBase; class Element; class ElementProvider; class ElementWithHWND; class Event; class FontCache; class HWNDElement; class HWNDHost; class IClassInfo; class IDialogElement; class InputEvent; class InvokeHelper; class KeyboardEvent; class KeyboardNavigateEvent; class Layout; class MARGINFLAGS; class MouseEvent; class NativeHWNDHost; class NavReference; class OverflowLayout; class PropNotify; class PropertyInfo; class ProviderProxy; class ScrollViewer; class SimpleTimer; class StandardCreator; class Surface; class ThemeChangedEvent; class Value; } 
namespace Gdiplus { class Bitmap; class Brush; class Color; class EncoderParameters; class Graphics; class Image; class ImageAttributes; class Pen; class PropertyItem; class Rect; class SolidBrush; } 
namespace Geometry { class CRect; } 
namespace GraphFilesTip { class _tip_GraphHomeCreationTip; } 
namespace HashAlgorithms { class HASH_BUFFER; class HASH_RESULT; class PatentHash; class PatentHashBase; } 
namespace Interpolators { class CCubicBezierLinearInterpolator; class CIncreasingCubicPolynomialSegment; class CLinearInterpolator; class CTileAnimationInterpolator; } 
namespace LibraryTelemetry { class AddLibraryLocation; class RemoveLibraryLocation; } 
namespace Microsoft { namespace Internal { namespace UI { namespace Composition { namespace Effects { class CrossFadeEffect; class EffectBase; class GaussianBlurEffect; class ICrossFadeEffect; class IGaussianBlurEffect; } } } } } 
namespace Microsoft { namespace WRL { class AgileRef; class ChainInterfaces; class CloakedIid; class ComPtr; class Details; class EventSource; class FtmBase; class Implements; class InvokeModeOptions; class RuntimeClassFlags; class SimpleClassFactory; class SimpleSealedActivationFactory; class WeakRef; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class ClientDC; class CompatibleDC; class HString; class HStringReference; class Mutex; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockCriticalSection; class SyncLockExclusive; class SyncLockShared; class SyncLockWithStatusT; } } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace HandleTraits { class HANDLENullTraits; class MutexTraits; } } } } 
namespace Microsoft { namespace Windows { namespace FileExplorer { namespace Banners { class BannerBase; class BannerContainer; class BannerData; class BannerDataModel; class BannerKFM; class BannerMetaData; class BannerSettings; class BannerV1; } } } } 
namespace MobilityExperience { namespace Telemetry { class MobilityExperienceLogging; class MobilityExperienceTelemetry; } } 
namespace OOBE { namespace Health { namespace details { class HealthEvaluationInfo; class HealthInfoHeader; class HealthTrackingInfo; class OOBEHealthTracker; class OOBEScenarioEvents; } } } 
namespace PostBootReminderTelemetry { class TempProfileWarningActivity; } 
namespace PreviewPaneTip { class _tip_PreviewPaneTest; } 
namespace ProgrammableTaskbarTelemetry { class ProgrammableTaskbarTelemetryProvider; } 
namespace PropertySheetLaunchTip { class _tip_ModernPropertySheetLaunchTest; } 
namespace RecycleBinVerbTip { class _tip_DeletedFileVerbRegistrationTest_attributes; } 
namespace Settings { namespace Internal { class UnsupportedHardwareNotificationCache; } } 
namespace ShellMRTHelper { class Common; class MRTHelperBase; } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace Windows { class FileHelpers; } 
namespace Windows { namespace ApplicationModel { namespace Activation { class IActivatedEventArgs; class ISplashScreen; class ITileActivatedInfo; class MultiviewActivationProperties; } } } 
namespace Windows { namespace ApplicationModel { namespace DataTransfer { class IDataPackageView; } } } 
namespace Windows { namespace Data { namespace Xml { namespace Dom { class IXmlDocument; class IXmlElement; class IXmlNode; } } } } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class detail; } } } } 
namespace Windows { namespace Graphics { namespace Display { class DisplayInformation; class IDisplayInformation; class IDisplayInformation5; } } } 
namespace Windows { namespace Graphics { namespace Effects { class IGraphicsEffect; class IGraphicsEffectD2D1Interop; class IGraphicsEffectSource; } } } 
namespace Windows { namespace Internal { class CoTaskMemPolicy; class ComTaskPool; class DeviceCapabilitiesW; class NativeString; class ResourceString; class String; class StringReference; class SyncRootHelpers; } } 
namespace Windows { namespace Internal { namespace ApplicationModel { namespace WindowManagement { class WindowId; } } } } 
namespace Windows { namespace Internal { namespace StateRepository { class IFileTypeAssociation; class IFileTypeAssociationStatics; } } } 
namespace Windows { namespace Internal { namespace Storage { class IBindingPhaseHandler; class ICustomPropertyProviderFactory; class IItemCommand; class IItemCommandServices; class IItemValueProvider; class IItemValueProviderFactory; class IPropertyValueProvider; class ISetCustomPropertyProvider; class ISetItemValueProvider; class IVirtualizedVector; } } } 
namespace Windows { namespace Internal { namespace Tiles { class ITileQueryFilter; } } } 
namespace Windows { namespace Services { namespace TargetedContent { class ITargetedContentValue; class TargetedContentContainer; } } } 
namespace Windows { namespace Shell { namespace SyncStatus { class CCacheEntry; class CIdListContainer_Policy; class CIdListPtr; } } } 
namespace Windows { namespace Storage { namespace Search { class IStorageFileQueryResult; } } } 
namespace Windows { namespace Storage { namespace Streams { class IRandomAccessStream; class IRandomAccessStreamWithContentType; } } } 
namespace Windows { namespace System { class ILauncherOptions; class ILauncherOptions2; class ILauncherOptions3; class ILauncherOptions4; class ILauncherStatics; class ILauncherUIOptions; class IUser; } } 
namespace Windows { namespace System { namespace Private { class ILauncherOptionsInternal; class ILauncherUIOptionsInternal; } } } 
namespace Windows { namespace UI { namespace Composition { class ICompositionDrawingSurfaceInterop; class ICompositionGraphicsDeviceInterop; class ICompositorInterop; } } } 
namespace Windows { namespace UI { namespace Composition { namespace Desktop { class ICompositorDesktopInterop; } } } } 
namespace Windows { namespace UI { namespace Composition { namespace Internal { class ISharedD3DDeviceInterop; } } } } 
namespace Windows { namespace UI { namespace Core { class ICoreWindowFactory; } } } 
namespace Windows { namespace UI { namespace Notifications { class IToastNotification; class IToastNotificationFactory; class IToastNotificationManagerStatics; } } } 
namespace Windows { namespace UI { namespace Popups { class IUICommand; class IUICommandInvokedHandler; } } } 
namespace Windows { namespace UI { namespace ViewManagement { class IActivationViewSwitcher; } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Data { class ICustomProperty; class ICustomPropertyProvider; class INotifyPropertyChanged; class IPropertyChangedEventArgs; class IPropertyChangedEventHandler; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Input { class ICommand; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Interop { class IBindableIterable; class IBindableIterator; class IBindableObservableVector; class IBindableVector; class IBindableVectorChangedEventHandler; class IBindableVectorView; class TypeName; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { namespace Imaging { class IBitmapImage; } } } } } 
namespace WindowsStorage { namespace Utilities { class NamespaceMap; } } 
namespace details { class ObjectArrayAdapterImpl; } 
namespace fc { class change_profile; class config_property_base; class config_props; class config_vector; class details; class fc_string_base; class key_value; class validate_result; } 
namespace inverted { class CSimple256Compressor; } 
namespace std { class _Hash; class _Hash_find_last_result; class _Iterator_base0; class _List_const_iterator; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class _Simple_types; class _String_constructor_concat_tag; class _String_iterator; class _String_val; class _Tree_const_iterator; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_val; class _Uhash_compare; class _Uset_traits; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class __floating_decimal_32; class allocator; class array; class atomic; class bad_alloc; class bad_array_new_length; class bad_optional_access; class bad_weak_ptr; class basic_ostream; class basic_streambuf; class basic_string; class basic_string_view; class basic_stringbuf; class char_traits; class default_delete; class equal_to; class exception; class exception_ptr; class fpos; class hash; class initializer_list; class invalid_argument; class locale; class logic_error; class nothrow_t; class nullptr_t; class once_flag; class optional; class pair; class piecewise_construct_t; class random_access_iterator_tag; class ratio; class set; class shared_ptr; class to_chars_result; class tuple; class unique_ptr; class unordered_set; class vector; class weak_ptr; } 
namespace std { namespace chrono { class duration; } } 
namespace std { namespace experimental { class coroutine_handle; class coroutine_traits; class generator; } } 
namespace std { namespace filesystem { class _Normal_conversion; class path; } } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class DiagnosticsInfo; class FailureInfo; class PropVariant; class PropertyStoreHelper; class ResultException; class StoredFailureInfo; class ThreadErrorContext; class WNF_CHANGE_STAMP_STRUCT; class com_ptr_t; class empty_deleter; class err_exception_policy; class err_returncode_policy; class function_deleter; class process_heap_deleter; class registry_watcher_t; class srwlock; class unique_any_array_ptr; class unique_any_t; class unique_call; class unique_com_call; class unique_struct; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class DummyUnknown; class FeatureLogging; class FeatureStateManager; class FreeProcessHeap; class IFailureCallback; class IFunctor; class IFunctorHost; class ResultStatus; class SetSiteNull; class StoredCallContextInfo; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class com_unknown_deleter; class delete_registry_watcher_state; class delete_wnf_subscription_state; class empty_wnf_state; class registry_watcher_state; class resource_policy; class shared_object; class tag_return_other; class token_info_deleter; class unique_any_array_deleter; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class __compressed_pair; class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from shell32.dll by Windissect. 693 member(s).
class CDefView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@PEAI@Z
    virtual long AddObject(_ITEMID_CHILD & const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertySheetPages@CDefView@@UEAAJKP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPropertySheetPages(unsigned long, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToCache@CDefView@@UEAAJPEAUIShellItem@@PEAUIFileOperation@@@Z
    virtual long AddToCache(IShellItem *, IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlterEffect@CDefView@@UEAAXKPEAKI@Z
    virtual void AlterEffect(unsigned long, unsigned long *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeByColumn@CDefView@@UEAAXW4ARRANGEMENT_TYPE@@AEBU_tagpropertykey@@@Z
    virtual void ArrangeByColumn(int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeGrid@CDefView@@UEAAJXZ
    virtual long ArrangeGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoArrange@CDefView@@UEAAJXZ
    virtual long AutoArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeAllColumns@CDefView@@UEAAXXZ
    virtual void AutoSizeAllColumns();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefView@@QEAA@PEAUIShellFolderViewCB@@PEAUIShellView@@@Z
    CDefView(IShellFolderViewCB *, IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDesktopUseSolidBackgroundColorHelper@CDefView@@SAHXZ
    static int CanDesktopUseSolidBackgroundColorHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDisplayXamlView@CDefView@@UEAAHXZ
    virtual int CanDisplayXamlView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanGroupView@CDefView@@UEAAHXZ
    virtual int CanGroupView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSortView@CDefView@@UEAAHXZ
    virtual int CanSortView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDelayActivation@CDefView@@UEAAJXZ
    virtual long CancelDelayActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCache@CDefView@@UEAAJPEAUIShellItem@@@Z
    virtual long CheckCache(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteContextMenu@CDefView@@UEAAXXZ
    virtual void CompleteContextMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CDefView@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnumIDListFromContents@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@KPEAPEAUIEnumIDList@@@Z
    virtual long CreateEnumIDListFromContents(_ITEMIDLIST_ABSOLUTE const *, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateItemCollection@CDefView@@UEAAJPEAPEAUIItemCollection@@@Z
    virtual long CreateItemCollection(IItemCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow@CDefView@@UEAAJPEAUIShellView@@PEBUFOLDERSETTINGS@@PEAUIShellBrowser@@PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellView *, FOLDERSETTINGS const *, IShellBrowser *, tagRECT *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow2@CDefView@@UEAAJPEAU_SV2CVW2_PARAMS@@@Z
    virtual long CreateViewWindow2(_SV2CVW2_PARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow3@CDefView@@UEAAJPEAUIShellBrowser@@PEAUIShellView@@KW4FOLDERFLAGS@@2W4FOLDERVIEWMODE@@PEBU_GUID@@PEBUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow3(IShellBrowser *, IShellView *, unsigned long, int, int, int, _GUID const *, tagRECT const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayActivation@CDefView@@UEAAJXZ
    virtual long DelayActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyViewWindow@CDefView@@UEAAJXZ
    virtual long DestroyViewWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoContextMenuPopup@CDefView@@UEAAJPEAUIUnknown@@IUtagPOINT@@@Z
    virtual long DoContextMenuPopup(IUnknown *, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExpandedContextMenu@CDefView@@UEAAXUtagPOINT@@HPEAU_GUID@@PEAU2@H@Z
    virtual void DoExpandedContextMenu(tagPOINT, int, _GUID *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRename@CDefView@@UEAAJXZ
    virtual long DoRename();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CDefView@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CDefView@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CDefView@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Draw@CDefView@@UEAAJKJPEAXPEAUtagDVTARGETDEVICE@@PEAUHDC__@@2PEBU_RECTL@@3P6AH_K@Z4@Z
    virtual long Draw(unsigned long, long, void *, tagDVTARGETDEVICE *, HDC__*, HDC__*, _RECTL const *, _RECTL const *, int ( *)(uint64_t), uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CDefView@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropCompleted@CDefView@@UEAAKPEAUIDataObject@@K@Z
    virtual unsigned long DropCompleted(IDataObject *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpContents@CDefView@@UEAAJHPEAUIDebugOutput@@PEA_K@Z
    virtual long DumpContents(int, IDebugOutput *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAlphaShadow@CDefView@@UEAAJH@Z
    virtual long EnableAlphaShadow(int);
    // Category: Method | Source: PE Export
    // Symbol: ?EnableModeless@CDefView@@UEAAJH@Z
    virtual long EnableModeless(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsViewIDList@CDefView@@UEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual int EqualsViewIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CDefView@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterByCondition@CDefView@@UEAAJPEAUIFilterCondition@@@Z
    virtual long FilterByCondition(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterByText@CDefView@@UEAAJPEBG0@Z
    virtual long FilterByText(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterContent@CDefView@@UEAAJXZ
    virtual long FilterContent();
    // Category: Method | Source: PE Export
    // Symbol: ?Freeze@CDefView@@UEAAJKJPEAXPEAK@Z
    virtual long Freeze(unsigned long, long, void *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdvise@CDefView@@UEAAJPEAK0PEAPEAUIAdviseSink@@@Z
    virtual long GetAdvise(unsigned long *, unsigned long *, IAdviseSink * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangeParam@CDefView@@UEAAJPEA_J@Z
    virtual long GetArrangeParam(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoArrange@CDefView@@UEAAJXZ
    virtual long GetAutoArrange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CDefView@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CDefView@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSet@CDefView@@UEAAJKJPEAXPEAUtagDVTARGETDEVICE@@PEAUHDC__@@PEAPEAUtagLOGPALETTE@@@Z
    virtual long GetColorSet(unsigned long, long, void *, tagDVTARGETDEVICE *, HDC__*, tagLOGPALETTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnCount@CDefView@@UEAAJW4CM_ENUM_FLAGS@@PEAI@Z
    virtual long GetColumnCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnInfo@CDefView@@UEAAJAEBU_tagpropertykey@@PEAUCM_COLUMNINFO@@@Z
    virtual long GetColumnInfo(_tagpropertykey const &, CM_COLUMNINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumns@CDefView@@UEAAJW4CM_ENUM_FLAGS@@PEAU_tagpropertykey@@I@Z
    virtual long GetColumns(int, _tagpropertykey *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFolderFlags@CDefView@@UEAAJPEAK@Z
    virtual long GetCurrentFolderFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentInfo@CDefView@@UEAAJPEAUFOLDERSETTINGS@@@Z
    virtual long GetCurrentInfo(FOLDERSETTINGS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPropertyKey@CDefView@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetCurrentPropertyKey(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentValue@CDefView@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetCurrentValue(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViewMode@CDefView@@UEAAJPEAI@Z
    virtual long GetCurrentViewMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSpacing@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDefaultSpacing(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragPoint@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDragPoint(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropPoint@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDropPoint(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSortColumn@CDefView@@UEAAJPEAUSORTCOLUMN@@@Z
    virtual long GetFirstSortColumn(SORTCOLUMN *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CDefView@@UEAAJPEAH@Z
    virtual long GetFocusedItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolder@CDefView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetFolder(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderType@CDefView@@UEAAJPEAU_GUID@@@Z
    virtual long GetFolderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderViewOptions@CDefView@@UEAAJPEAW4FOLDERVIEWOPTIONS@@@Z
    virtual long GetFolderViewOptions(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFont@CDefView@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupBy@CDefView@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupBy(_tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupSubsetCount@CDefView@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CDefView@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CDefView@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritFlags@CDefView@@UEAAJPEAW4IHVS_FLAGS@@@Z
    virtual long GetInheritFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMark@CDefView@@UEAAJPEAH@Z
    virtual long GetInsertMark(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvocationLocation@CDefView@@UEAAJPEAW4EXPLORER_COMMAND_SQM_INVOCATION_LOCATION@@@Z
    virtual long GetInvocationLocation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CDefView@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(int, _GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemHeight@CDefView@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemIndex@CDefView@@UEAAHPEFBU_ITEMID_CHILD@@@Z
    virtual int GetItemIndex(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemObject@CDefView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetItemObject(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEAUtagPOINT@@@Z
    virtual long GetItemPosition(_ITEMID_CHILD & volatile *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CDefView@@UEAAJHPEAUtagRECT@@@Z
    virtual long GetItemRect(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSpacing@CDefView@@UEAAJPEAU_ITEMSPACING@@@Z
    virtual long GetItemSpacing(_ITEMSPACING *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemToTranslate@CDefView@@UEAAJPEAPEAUIItem@@@Z
    virtual long GetItemToTranslate(IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxItemCount@CDefView@@UEAAJPEAI@Z
    virtual long GetMaxItemCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenu@CDefView@@UEAAJPEAPEAUHMENU__@@@Z
    virtual long GetMenu(HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCount@CDefView@@UEAAJPEAI@Z
    virtual long GetObjectCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@CDefView@@UEAAJPEAPEAU_ITEMID_CHILD@@I@Z
    virtual long GetObjectW(_ITEMID_CHILD * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationID@CDefView@@UEAAJPEAK@Z
    virtual long GetOperationID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPromptText@CDefView@@UEAAJPEAGI@Z
    virtual long GetPromptText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchText@CDefView@@UEAAJPEAGI@Z
    virtual long GetSearchText(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedCount@CDefView@@UEAAJPEAI@Z
    virtual long GetSelectedCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItem@CDefView@@UEAAJHPEAH@Z
    virtual long GetSelectedItem(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedObjects@CDefView@@UEAAJPEAPEAPEFBU_ITEMID_CHILD@@PEAI@Z
    virtual long GetSelectedObjects(_ITEMID_CHILD & volatile * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CDefView@@UEAAJHPEAPEAUIShellItemArray@@@Z
    virtual long GetSelection(int, IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionMarkedItem@CDefView@@UEAAJPEAH@Z
    virtual long GetSelectionMarkedItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionState@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetSelectionState(_ITEMID_CHILD & volatile *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSemanticMinLength@CDefView@@QEAA_KPEBG@Z
    uint64_t GetSemanticMinLength(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumnCount@CDefView@@UEAAJPEAH@Z
    virtual long GetSortColumnCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CDefView@@UEAAJPEAUSORTCOLUMN@@H@Z
    virtual long GetSortColumns(SORTCOLUMN *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpacing@CDefView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetSpacing(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CDefView@@UEAAJPEAW4DEFVIEWSTATUS@@@Z
    virtual long GetStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedLogicalViews@CDefView@@QEAA?AW4SUPPORTS_FOLDER_LOGICAL_VIEW_MODE@@XZ
    int GetSupportedLogicalViews();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CDefView@@UEAAJPEAU_GUID@@K@Z
    virtual long GetView(_GUID *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewModeAndIconSize@CDefView@@UEAAJPEAW4FOLDERVIEWMODE@@PEAH@Z
    virtual long GetViewModeAndIconSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewProperty@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetViewProperty(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleItem@CDefView@@UEAAJHHPEAH@Z
    virtual long GetVisibleItem(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CDefView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRename@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@@Z
    virtual long HandleRename(_ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CDefView@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CDefView@@UEAAJUtagPOINT@@PEAH@Z
    virtual long HitTestItem(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItem@CDefView@@UEAAJPEAUIChildId@@PEAH@Z
    virtual long IncludeItem(IChildId *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItems@CDefView@@UEAAJPEAH@Z
    virtual long IncludeItems(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDefView@@QEAAJPEAUIShellFolder@@@Z
    long Init(IShellFolder *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitMenuPopup@CDefView@@UEAAJPEAUHMENU__@@@Z
    virtual long InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDefView@@UEAAXPEAUIContextMenu@@PEAUIShellItemArray@@PEAUHMENU__@@IUtagPOINT@@@Z
    virtual void Invoke(IContextMenu *, IShellItemArray *, HMENU__*, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbOnSelection@CDefView@@UEAAJPEBD@Z
    virtual long InvokeVerbOnSelection(char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBkDropTarget@CDefView@@UEAAJPEAUIDropTarget@@@Z
    virtual long IsBkDropTarget(IDropTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropOnSource@CDefView@@UEAAJPEAUIDropTarget@@@Z
    virtual long IsDropOnSource(IDropTarget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropOnSource@CDefView@@UEAAJXZ
    virtual long IsDropOnSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CDefView@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusOnPopup@CDefView@@UEAAHXZ
    virtual int IsFocusOnPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupView@CDefView@@UEAAHXZ
    virtual int IsGroupView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemInDeferredQueue@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long IsItemInDeferredQueue(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMoveInSameFolder@CDefView@@UEAAJXZ
    virtual long IsMoveInSameFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSafeToDrop@CDefView@@UEAAHPEAUIDataObject@@H@Z
    virtual int IsSafeToDrop(IDataObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchResultsFolder@CDefView@@QEAA_NXZ
    bool IsSearchResultsFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDropTarget@CDefView@@UEAAHPEAUIItem@@@Z
    virtual int IsValidDropTarget(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewSorted@CDefView@@UEAAHXZ
    virtual int IsViewSorted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewStacked@CDefView@@UEAAHXZ
    virtual int IsViewStacked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CDefView@@UEAAJHPEAPEAU_ITEMID_CHILD@@@Z
    virtual long Item(int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCount@CDefView@@UEAAJIPEAH@Z
    virtual long ItemCount(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Items@CDefView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long Items(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LimitItemsToVisibleCount@CDefView@@UEAAJH@Z
    virtual long LimitItemsToVisibleCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAndRemoveFromCache@CDefView@@UEAAJPEAUIShellItem@@PEAPEAUIFileOperation@@@Z
    virtual long LookupAndRemoveFromCache(IShellItem *, IFileOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRect@CDefView@@UEAAJHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long MapRect(int, HWND__*, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?MoveIcons@CDefView@@UEAAJPEAUIDataObject@@@Z
    virtual long MoveIcons(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveObjects@CDefView@@UEAAJPEBQEFBU_ITEMID_CHILD@@IH@Z
    virtual long MoveObjects(_ITEMID_CHILD & volatile * const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToIDList@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigateToIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDispatchEvent@CDefView@@QEAAJJPEAUtagVARIANT@@@Z
    long NotifyDispatchEvent(long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateSelection@CDefView@@UEAAJK@Z
    virtual long OnActivateSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundContextMenu@CDefView@@UEAAJPEBUtagPOINT@@@Z
    virtual long OnBackgroundContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginDrag@CDefView@@UEAAJPEBUtagPOINT@@@Z
    virtual long OnBeginDrag(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginLabelEdit@CDefView@@UEAAJPEAUIItem@@PEAUHWND__@@@Z
    virtual long OnBeginLabelEdit(IItem *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelAsyncFilters@CDefView@@UEAAJI@Z
    virtual long OnCancelAsyncFilters(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearFilterPreview@CDefView@@UEAAJI@Z
    virtual long OnClearFilterPreview(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnAction@CDefView@@UEAAJHAEBU_tagpropertykey@@PEBUtagPOINT@@H@Z
    virtual long OnColumnAction(int, _tagpropertykey const &, tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnClicked@CDefView@@UEAAJHAEBU_tagpropertykey@@PEBUtagPOINT@@@Z
    virtual long OnColumnClicked(int, _tagpropertykey const &, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnsChanged@CDefView@@UEAAJXZ
    virtual long OnColumnsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommit@CDefView@@UEAAJIAEBU_tagpropertykey@@W4tagARRANGE_MODE@@@Z
    virtual long OnCommit(unsigned int, _tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CDefView@@UEAAJH@Z
    virtual long OnContentsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CDefView@@UEAAXXZ
    virtual void OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyFilterControl@CDefView@@UEAAJI@Z
    virtual long OnDestroyFilterControl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoCollapseColumn@CDefView@@UEAAJXZ
    virtual long OnDoCollapseColumn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndLabelEdit@CDefView@@UEAAJPEAUIItem@@PEBGW4RenameOperationStatus@@@Z
    virtual long OnEndLabelEdit(IItem *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerWindowReady@CDefView@@UEAAJXZ
    virtual long OnExplorerWindowReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFilterChanged@CDefView@@UEAAJIAEBU_tagpropertykey@@PEAUIFilterCondition@@@Z
    virtual long OnFilterChanged(unsigned int, _tagpropertykey const &, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFiltersCreated@CDefView@@UEAAJPEAUIObjectCollection@@AEBU_tagpropertykey@@@Z
    virtual long OnFiltersCreated(IObjectCollection *, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CDefView@@UEAAJH@Z
    virtual long OnFocusChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetColumnHeaderFilterVisible@CDefView@@UEAAJXZ
    virtual long OnGetColumnHeaderFilterVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetEmptyText@CDefView@@UEAAJPEAGI@Z
    virtual long OnGetEmptyText(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetSortColumn@CDefView@@UEAAJW4GETSORTCOLUMN@@PEAUSORTCOLUMN@@@Z
    virtual long OnGetSortColumn(int, SORTCOLUMN *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetTryHarderArray@CDefView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long OnGetTryHarderArray(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupZoom@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long OnGroupZoom(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialEnumerationDone@CDefView@@UEAAJXZ
    virtual long OnInitialEnumerationDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeTryHarder@CDefView@@UEAAJPEAUITryHarderItem@@@Z
    virtual long OnInvokeTryHarder(ITryHarderItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CDefView@@UEAAJAEBUtagLCITEM@@PEBG@Z
    virtual long OnInvokeVerb(tagLCITEM const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long OnItemMoved(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemStateChanged@CDefView@@UEAAJW4LC_ITEM_FLAGS@@0@Z
    virtual long OnItemStateChanged(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CDefView@@UEAAJI@Z
    virtual long OnKeyDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuCommand@CDefView@@UEAAJK@Z
    virtual long OnMenuCommand(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaintDone@CDefView@@UEAAJXZ
    virtual long OnPaintDone();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRequestReposition@CDefView@@UEAAJIPEBUtagRECT@@@Z
    virtual long OnRequestReposition(unsigned int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollImageSize@CDefView@@UEAAJF@Z
    virtual long OnScrollImageSize(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextNotify@CDefView@@UEAAJPEBG0W4SHELLSEARCHNOTIFY@@@Z
    virtual long OnSearchTextNotify(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionContextMenu@CDefView@@UEAAJPEBUtagPOINT@@@Z
    virtual long OnSelectionContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionSpotlightContextMenu@CDefView@@UEAAJPEBUtagPOINT@@H@Z
    virtual long OnSelectionSpotlightContextMenu(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@CDefView@@UEAAJXZ
    virtual long OnSetFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSetTitle@CDefView@@UEAAJPEAUtagVARIANT@@@Z
    virtual long OnSetTitle(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@CDefView@@UEAAJK@Z
    virtual long OnSettingsChanged(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSettingsLoad@CDefView@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsLoad(IPropertyBag *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSettingsSave@CDefView@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsSave(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleColumnMenu@CDefView@@UEAAJU_tagpropertykey@@PEBUtagPOINT@@@Z
    virtual long OnVisibleColumnMenu(_tagpropertykey, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintComplete@CDefView@@UEAAXH@Z
    virtual void PaintComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDragEnter@CDefView@@UEAAJPEAUIItem@@PEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long PassThroughDragEnter(IItem *, IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDragLeave@CDefView@@UEAAJPEAUIItem@@@Z
    virtual long PassThroughDragLeave(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDragOver@CDefView@@UEAAJPEAUIItem@@KU_POINTL@@PEAK@Z
    virtual long PassThroughDragOver(IItem *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassThroughDrop@CDefView@@UEAAJPEAUIItem@@PEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long PassThroughDrop(IItem *, IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForContextMenu@CDefView@@UEAAXW4CONTEXT_MENU_PRESENTER_FLAGS@@PEBUtagPOINT@@@Z
    virtual void PrepareForContextMenu(int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForDragOperation@CDefView@@UEAAJPEAKPEAPEAUIDataObject@@@Z
    virtual long PrepareForDragOperation(unsigned long *, IDataObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDelayActivation@CDefView@@UEAAJXZ
    virtual long ProcessDelayActivation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CDefView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDefView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStatus@CDefView@@UEAAJPEBU_GUID@@KQEAU_tagOLECMD@@PEAU_tagOLECMDTEXT@@@Z
    virtual long QueryStatus(_GUID const *, unsigned long, _tagOLECMD * const, _tagOLECMDTEXT *);
    // Category: Method | Source: PE Export
    // Symbol: ?QuerySupport@CDefView@@UEAAJPEAI@Z
    virtual long QuerySupport(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rearrange@CDefView@@UEAAJ_J@Z
    virtual long Rearrange(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CDefView@@UEAAJXZ
    virtual long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@PEAI@Z
    virtual long RefreshObject(_ITEMID_CHILD & const *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@PEAI@Z
    virtual long RemoveObject(_ITEMID_CHILD & const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveViewState@CDefView@@UEAAJXZ
    virtual long SaveViewState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search@CDefView@@UEAAJPEBGK@Z
    virtual long Search(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CDefView@@UEAAJI@Z
    virtual long Select(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndEditItem@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    virtual long SelectAndEditItem(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndPositionItem@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@IPEAUtagPOINT@@@Z
    virtual long SelectAndPositionItem(_ITEMID_CHILD & volatile *, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndPositionItems@CDefView@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAUtagPOINT@@K@Z
    virtual long SelectAndPositionItems(unsigned int, _ITEMID_CHILD & volatile * const *, tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@I@Z
    virtual long SelectItem(_ITEMID_CHILD & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CDefView@@UEAAJHK@Z
    virtual long SelectItem(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibleName@CDefView@@UEAAJPEBG@Z
    virtual long SetAccessibleName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdvise@CDefView@@UEAAJKKPEAUIAdviseSink@@@Z
    virtual long SetAdvise(unsigned long, unsigned long, IAdviseSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationObject@CDefView@@UEAAJPEAUIDispatch@@@Z
    virtual long SetAutomationObject(IDispatch *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@CDefView@@UEAAJPEAUIShellFolderViewCB@@PEAPEAU2@@Z
    virtual long SetCallback(IShellFolderViewCB *, IShellFolderViewCB * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipboard@CDefView@@UEAAJH@Z
    virtual long SetClipboard(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CDefView@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnInfo@CDefView@@UEAAJAEBU_tagpropertykey@@PEBUCM_COLUMNINFO@@@Z
    virtual long SetColumnInfo(_tagpropertykey const &, CM_COLUMNINFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumns@CDefView@@UEAAJPEBU_tagpropertykey@@I@Z
    virtual long SetColumns(_tagpropertykey const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCondition@CDefView@@UEAAJPEAUICondition@@@Z
    virtual long SetCondition(ICondition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentFolderFlags@CDefView@@UEAAJKK@Z
    virtual long SetCurrentFolderFlags(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentViewMode@CDefView@@UEAAJI@Z
    virtual long SetCurrentViewMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropAnchor@CDefView@@UEAAXH@Z
    virtual void SetDropAnchor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CDefView@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnumReadyCallback@CDefView@@UEAAJPEAUIEnumReadyCallback@@@Z
    virtual long SetEnumReadyCallback(IEnumReadyCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedTileViewProperties@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetExtendedTileViewProperties(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CDefView@@UEAAXXZ
    virtual void SetFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFolderViewOptions@CDefView@@UEAAJW4FOLDERVIEWOPTIONS@@0@Z
    virtual long SetFolderViewOptions(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CDefView@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupBy@CDefView@@UEAAJAEBU_tagpropertykey@@H@Z
    virtual long SetGroupBy(_tagpropertykey const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupSubsetCount@CDefView@@UEAAJI@Z
    virtual long SetGroupSubsetCount(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIDList@CDefView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvocationLocation@CDefView@@UEAAJW4EXPLORER_COMMAND_SQM_INVOCATION_LOCATION@@@Z
    virtual long SetInvocationLocation(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemHeight@CDefView@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPos@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEAUtagPOINT@@@Z
    virtual long SetItemPos(_ITEMID_CHILD & volatile *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxItemCount@CDefView@@UEAAJI@Z
    virtual long SetMaxItemCount(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetObjectCount@CDefView@@UEAAJII@Z
    virtual long SetObjectCount(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoints@CDefView@@UEAAJPEAUIDataObject@@@Z
    virtual long SetPoints(IDataObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedraw@CDefView@@UEAAJH@Z
    virtual long SetRedraw(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResultShape@CDefView@@UEAAJPEAUIResultShape@@@Z
    virtual long SetResultShape(IResultShape *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSortColumns@CDefView@@UEAAJPEBUSORTCOLUMN@@H@Z
    virtual long SetSortColumns(SORTCOLUMN const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CDefView@@UEAAJW4FVTEXTTYPE@@PEBG@Z
    virtual long SetText(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CDefView@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileViewProperties@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetTileViewProperties(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileWidth@CDefView@@UEAAJH@Z
    virtual long SetTileWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewModeAndIconSize@CDefView@@UEAAJW4FOLDERVIEWMODE@@H@Z
    virtual long SetViewModeAndIconSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewProperty@CDefView@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetViewProperty(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetViewSQMInfo@CDefView@@UEAAJK@Z
    virtual long SetViewSQMInfo(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CDefView@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowIsHidden@CDefView@@UEAAXH@Z
    virtual void SetWindowIsHidden(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StackByProperty@CDefView@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long StackByProperty(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleVisibleColumn@CDefView@@UEAAXAEBU_tagpropertykey@@@Z
    virtual void ToggleVisibleColumn(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CDefView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CDefView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateViewAccelerator@CDefView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateViewAccelerator(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDropTargetForIItem@CDefView@@UEAAJPEAUIItem@@PEAUIDataObject@@PEAPEAUIDropTarget@@@Z
    virtual long TryGetDropTargetForIItem(IItem *, IDataObject *, IDropTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivate@CDefView@@UEAAJI@Z
    virtual long UIActivate(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CDefView@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?Unfreeze@CDefView@@UEAAJK@Z
    virtual long Unfreeze(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateObject@CDefView@@UEAAJPEFAU_ITEMID_CHILD@@0PEAI@Z
    virtual long UpdateObject(_ITEMID_CHILD & const *, _ITEMID_CHILD & const *, unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsRootEntryAutoNavigated@CDefView@@MEAAHXZ
    virtual int v_IsRootEntryAutoNavigated();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDarkModeContextMenu@CDefView@@AEAAJPEAVSetDarkModeForWindows@@PEAW4PreferredAppMode@@@Z
    long AllowDarkModeContextMenu(SetDarkModeForWindows *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAfterContextMenu@CDefView@@AEAAXXZ
    void CleanupAfterContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoBackgroundContextMenu@CDefView@@AEAAXAEBUtagPOINT@@W4Mode@FileExplorerContextMenu@@@Z
    void DoBackgroundContextMenu(tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoClassicMenu@CDefView@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@AEBUtagPOINT@@PEAUIShellItemArray@@@Z
    void DoClassicMenu(IContextMenu *, HMENU__*, tagPOINT const &, IShellItemArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCuratedContextMenu@CDefView@@AEAAXPEAUIContextMenu@@PEAUHMENU__@@IAEBUtagPOINT@@@Z
    void DoCuratedContextMenu(IContextMenu *, HMENU__*, unsigned int, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoSelectionContextMenu@CDefView@@AEAAXAEBUtagPOINT@@W4Mode@FileExplorerContextMenu@@@Z
    void DoSelectionContextMenu(tagPOINT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireColumnHeaderClickedEvent@CDefView@@AEAAXAEBU_tagpropertykey@@@Z
    void FireColumnHeaderClickedEvent(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuTelemetryEvent@CDefView@@AEAAXPEAUHMENU__@@IPEAUIContextMenu@@PEAUIShellItemArray@@W4ContextMenuType@FileExplorerTelemetryCommon@@@Z
    void FireContextMenuTelemetryEvent(HMENU__*, unsigned int, IContextMenu *, IShellItemArray *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireViewFinishedDisplayingEvent@CDefView@@AEAAX_N@Z
    void FireViewFinishedDisplayingEvent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetFromIItem@CDefView@@AEAAJPEAUIItem@@PEAUHWND__@@PEAPEAUIDropTarget@@@Z
    long GetDropTargetFromIItem(IItem *, HWND__*, IDropTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationContext@CDefView@@AEAA?AW4LOCATION_CONTEXT_FLAGS@@PEAUIShellItemArray@@@Z
    int GetLocationContext(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMenuIDFromViewModeAndIconSize@CDefView@@AEAAIIIH@Z
    unsigned int GetMenuIDFromViewModeAndIconSize(unsigned int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkingDirectory@CDefView@@AEAAJPEAPEAG@Z
    long GetWorkingDirectory(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRenameComplete@CDefView@@AEAAX_J@Z
    void HandleRenameComplete(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFolderViewCapabilitySupported@CDefView@@AEAAHW4FOLDER_VIEW_CAPABILITY@@@Z
    int IsFolderViewCapabilitySupported(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSafeToDefaultVerb@CDefView@@AEAAHXZ
    int IsSafeToDefaultVerb();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXAMLView@CDefView@@EEAAHXZ
    virtual int IsXAMLView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CDefView@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreWarmZoneCheckAsync@CDefView@@AEAAXXZ
    void PreWarmZoneCheckAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextMenuCapability@CDefView@@AEAAJPEAUHMENU__@@@Z
    long SetContextMenuCapability(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowMiniMenu@CDefView@@AEAA_NI@Z
    bool ShouldShowMiniMenu(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleHideFilenames@CDefView@@AEAAXXZ
    void ToggleHideFilenames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetContextMenuPresenter@CDefView@@AEAA?AV?$ComPtr@UIContextMenuPresenter@@@WRL@Microsoft@@XZ
    WindissectOpaque TryGetContextMenuPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CDefView@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumnVerbsToMenu@CDefView@@AEAAJAEBU_tagpropertykey@@PEAUHMENU__@@K@Z
    long _AddColumnVerbsToMenu(_tagpropertykey const &, HMENU__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumnsToMenu@CDefView@@AEAAHPEAUHMENU__@@HK@Z
    int _AddColumnsToMenu(HMENU__*, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddConditionToDPA@CDefView@@AEAAJPEAV?$CDPA@UICondition@@V?$CTContainer_PolicyUnOwned@UICondition@@@@@@PEAUIFilterCondition@@@Z
    long _AddConditionToDPA(WindissectOpaque *, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCopyHook@CDefView@@AEAAXXZ
    void _AddCopyHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddEnumFlagsCondition@CDefView@@AEAAJPEAV?$CDPA@UICondition@@V?$CTContainer_PolicyUnOwned@UICondition@@@@@@@Z
    long _AddEnumFlagsCondition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSubfolderTryHarderItem@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddSubfolderTryHarderItem(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTextFilterToLocation@CDefView@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long _AddTextFilterToLocation(_ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToRecentDocs@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@@Z
    long _AddToRecentDocs(_ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderCustom@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderCustom(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForAllLibraries@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderForAllLibraries(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForCurrentLibrary@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderForCurrentLibrary(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForHomeGroup@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderForHomeGroup(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderForLibraryItem@CDefView@@AEAAJPEAUIShellItem@@PEAUIObjectCollection@@@Z
    long _AddTryHarderForLibraryItem(IShellItem *, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderFullText@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderFullText(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderInternetSearch@CDefView@@AEAAJPEAUIObjectCollection@@PEBG@Z
    long _AddTryHarderInternetSearch(IObjectCollection *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderItemForComputer@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderItemForComputer(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderItemsFromFolder@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderItemsFromFolder(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderItemsFromView@CDefView@@AEAAJPEAUIObjectCollection@@@Z
    long _AddTryHarderItemsFromView(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTryHarderPinnedItems@CDefView@@AEAAJPEAUIObjectCollection@@PEBG@Z
    long _AddTryHarderPinnedItems(IObjectCollection *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddZoneToDataObject@CDefView@@AEAAXPEAUIDataObject@@@Z
    void _AddZoneToDataObject(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowCommand@CDefView@@AEAAHI@Z
    int _AllowCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowEditCommand@CDefView@@AEAAHI@Z
    int _AllowEditCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AlterEffect@CDefView@@AEAAXKPEAKI@Z
    void _AlterEffect(unsigned long, unsigned long *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendSortBuddies@CDefView@@AEAAXAEBU_tagpropertykey@@PEAUSORTCOLUMN@@IPEAI@Z
    void _AppendSortBuddies(_tagpropertykey const &, SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyArrangeBy@CDefView@@AEAAXPEAUISortColumnArray@@AEBU_tagpropertykey@@H1@Z
    void _ApplyArrangeBy(ISortColumnArray *, _tagpropertykey const &, int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySettings@CDefView@@AEAAXHH@Z
    void _ApplySettings(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplySniffedFolderType@CDefView@@AEAAXXZ
    void _ApplySniffedFolderType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ArrangeByCommandId@CDefView@@AEAAXI@Z
    void _ArrangeByCommandId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ArrangeByMode@CDefView@@AEAAXHAEBU_tagpropertykey@@W4VIEW_ARRANGEMENT_MODE@@@Z
    void _ArrangeByMode(int, _tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Attributes@CDefView@@AEAAKPEAUIItem@@K@Z
    unsigned long _Attributes(IItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttributesFromSelection@CDefView@@AEAAKK@Z
    unsigned long _AttributesFromSelection(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrowseToIDList@CDefView@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@K@Z
    long _BrowseToIDList(_ITEMIDLIST_ABSOLUTE const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildConditionForCollection@CDefView@@AEAAJPEAUIItemFilter@@PEAPEAUICondition@@PEAU_tagpropertykey@@@Z
    long _BuildConditionForCollection(IItemFilter *, ICondition * *, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CBackgrndMenu_CreateInstance@CDefView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _CBackgrndMenu_CreateInstance(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CachedIsCustomizable@CDefView@@AEAAHXZ
    int _CachedIsCustomizable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallCBWithFolderTypeFallback@CDefView@@AEAAJI_K_J@Z
    long _CallCBWithFolderTypeFallback(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CallRefresh@CDefView@@AEAAXH@Z
    void _CallRefresh(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanGroupBy@CDefView@@AEAAHAEBU_tagpropertykey@@@Z
    int _CanGroupBy(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanPositionByAnchor@CDefView@@AEAAHXZ
    int _CanPositionByAnchor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelTryHarderInvoke@CDefView@@AEAAXXZ
    void _CancelTryHarderInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckCurrentViewMenuItem@CDefView@@AEAAIPEAUHMENU__@@@Z
    unsigned int _CheckCurrentViewMenuItem(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearCachedSelection@CDefView@@AEAAXXZ
    void _ClearCachedSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDelaySelectedItems@CDefView@@AEAAXXZ
    void _ClearDelaySelectedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearDelayedViewInsertedItems@CDefView@@AEAAXXZ
    void _ClearDelayedViewInsertedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearSelectionIfChangePending@CDefView@@AEAAXXZ
    void _ClearSelectionIfChangePending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAttribCondition@CDefView@@AEAAJPEAUIConditionFactory2@@KW4ATTRIB_CONDITION_TYPE@1@AEBU_GUID@@PEAPEAX@Z
    long _CreateAttribCondition(IConditionFactory2*, unsigned long, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCollection@CDefView@@AEAAJW4UPDATE_FLAGS@@HW4FILTER_OPERATION_FLAGS@@PEAPEAUIItemCollection@@PEAI@Z
    long _CreateCollection(int, int, int, IItemCollection * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCollectionFactory@CDefView@@AEAAJW4UPDATE_FLAGS@@HW4FILTER_OPERATION_FLAGS@@PEAPEAUIItemCollectionFactory@@@Z
    long _CreateCollectionFactory(int, int, int, IItemCollectionFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateGroupFolderSearchItem@CDefView@@AEAAJPEAUIItem@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateGroupFolderSearchItem(IItem *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateInitialCollection@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _CreateInitialCollection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewCollection@CDefView@@AEAAJW4UPDATE_FLAGS@@HW4FILTER_OPERATION_FLAGS@@@Z
    long _CreateNewCollection(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSearchOnAnyFolder@CDefView@@AEAAJPEAUIShellItem@@U_GUID@@AEBU_tagpropertykey@@W4SCOPE_ITEM_DEPTH@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateSearchOnAnyFolder(IShellItem *, _GUID, _tagpropertykey const &, int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSelectionContextMenu@CDefView@@AEAAJHAEBU_GUID@@PEAPEAX@Z
    long _CreateSelectionContextMenu(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSortColumnArray@CDefView@@AEAAJAEBU_tagpropertykey@@HPEAPEAUISortColumnArray@@@Z
    long _CreateSortColumnArray(_tagpropertykey const &, int, ISortColumnArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSortColumnArrayWithSecondaryColumn@CDefView@@AEAAJAEBU_tagpropertykey@@PEAPEAUISortColumnArray@@@Z
    long _CreateSortColumnArrayWithSecondaryColumn(_tagpropertykey const &, ISortColumnArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStackedIDList@CDefView@@AEAAJAEBU_tagpropertykey@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateStackedIDList(_tagpropertykey const &, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create_BackgrndHMENU@CDefView@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _Create_BackgrndHMENU(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CurrentAutolistHasSameDisplayNameAsKnownFolder@CDefView@@AEAAHU_GUID@@@Z
    int _CurrentAutolistHasSameDisplayNameAsKnownFolder(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelaySelectAndPositionItem@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@IHPEAUtagPOINT@@@Z
    long _DelaySelectAndPositionItem(_ITEMID_CHILD & volatile *, unsigned int, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteMenuItems@CDefView@@AEAAHPEAUHMENU__@@KK@Z
    int _DeleteMenuItems(HMENU__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyView@CDefView@@AEAAJH@Z
    long _DestroyView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnClicked@CDefView@@AEAAXAEBU_tagpropertykey@@@Z
    void _DoColumnClicked(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnDropDownMenu@CDefView@@AEAAXPEAUHWND__@@AEBU_tagpropertykey@@PEBUtagPOINT@@_N@Z
    void _DoColumnDropDownMenu(HWND__*, _tagpropertykey const &, tagPOINT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoContextMenu@CDefView@@AEAAXK@Z
    void _DoContextMenu(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoContextMenuPopup@CDefView@@AEAAJPEAUIUnknown@@IUtagPOINT@@W4Mode@FileExplorerContextMenu@@@Z
    long _DoContextMenuPopup(IUnknown *, unsigned int, tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLocationTextFilter@CDefView@@AEAAXPEAPEAUIFilterCondition@@@Z
    void _EnsureLocationTextFilter(IFilterCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Exec@CDefView@@AEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    long _Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteRename@CDefView@@AEAAJPEAUIItem@@PEBGKPEAPEAU_ITEMID_CHILD@@@Z
    long _ExecuteRename(IItem *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExplorerCommand@CDefView@@AEAAJI@Z
    long _ExplorerCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillDone@CDefView@@AEAAXXZ
    void _FillDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItem@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@PEAUtagLCITEM@@@Z
    long _FindItem(_ITEMID_CHILD & volatile *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindItemAndIndex@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@PEAUtagLCITEM@@@Z
    long _FindItemAndIndex(_ITEMID_CHILD & volatile *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireCountDoneEnd@CDefView@@AEAAXXZ
    void _FireCountDoneEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireEvent@CDefView@@AEAAJJPEAUtagVARIANT@@@Z
    long _FireEvent(long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireFilterInvoked@CDefView@@AEAAXXZ
    void _FireFilterInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireFolderTypeKnownEvent@CDefView@@AEAAJXZ
    long _FireFolderTypeKnownEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireTrackEvent@CDefView@@AEAAXHH@Z
    void _FireTrackEvent(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForwardMenuMessages@CDefView@@AEAAJKI_K_JPEA_JPEAH@Z
    long _ForwardMenuMessages(unsigned long, unsigned int, uint64_t, int64_t, int64_t *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetArrangeMode@CDefView@@AEAA?AW4VIEW_ARRANGEMENT_MODE@@XZ
    int _GetArrangeMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCBText@CDefView@@AEAAX_KIIIPEAGI@Z
    void _GetCBText(uint64_t, unsigned int, unsigned int, unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildId@CDefView@@AEAAJHPEAPEAUIChildId@@@Z
    long _GetChildId(int, IChildId * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildIdArray@CDefView@@AEAAJPEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _GetChildIdArray(IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildIdArrayFromItemArray@CDefView@@AEAAJPEAUIObjectCollection@@PEAV?$CDPARelease@UIChildId@@V?$CTContainer_PolicyRelease@UIChildId@@@@@@PEAIPEAPEAPEFBU_ITEMID_CHILD@@@Z
    long _GetChildIdArrayFromItemArray(IObjectCollection *, WindissectOpaque *, unsigned int *, _ITEMID_CHILD & volatile * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommandString@CDefView@@AEAAJ_KPEAGI@Z
    long _GetCommandString(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommonDialogViewFlags@CDefView@@AEAAKXZ
    unsigned long _GetCommonDialogViewFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenuFromObjectCollection@CDefView@@AEAAJPEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _GetContextMenuFromObjectCollection(IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentSortColumnArray@CDefView@@AEAAXPEAUSORTCOLUMN@@IPEAI@Z
    void _GetCurrentSortColumnArray(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDragHelper@CDefView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetDragHelper(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDragPoint@CDefView@@AEAAHPEAUtagPOINT@@@Z
    int _GetDragPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDropPoint@CDefView@@AEAAHPEAUtagPOINT@@@Z
    int _GetDropPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEnumFlags@CDefView@@AEAAKXZ
    unsigned long _GetEnumFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExplorerFlag@CDefView@@AEAAIXZ
    unsigned int _GetExplorerFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileSystemFolderPath@CDefView@@AEAAJPEAPEAGPEA_N@Z
    long _GetFileSystemFolderPath(unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolder@CDefView@@AEAAJPEAPEAUIShellItemArray@@@Z
    long _GetFolder(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderTypeDescription@CDefView@@AEAAJPEAPEAUIFolderTypeDescription@@@Z
    long _GetFolderTypeDescription(IFolderTypeDescription * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolderViewOptions@CDefView@@AEAA?AW4FOLDERVIEWOPTIONS@@XZ
    int _GetFolderViewOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullTextKey@CDefView@@AEAAXPEAU_tagpropertykey@@@Z
    void _GetFullTextKey(_tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInsertPoint@CDefView@@AEAAHPEAUtagPOINT@@@Z
    int _GetInsertPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CDefView@@AEAAJHPEAPEAUIItem@@@Z
    long _GetItem(int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemArray@CDefView@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _GetItemArray(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemFromPidl@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@PEAPEAUIItem@@@Z
    long _GetItemFromPidl(_ITEMID_CHILD & volatile *, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItems@CDefView@@AEAAJIHAEBU_GUID@@PEAPEAX@Z
    long _GetItems(unsigned int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemsWorker@CDefView@@AEAAJIHAEBU_GUID@@PEAPEAX@Z
    long _GetItemsWorker(unsigned int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaxItemCount@CDefView@@AEAAIXZ
    unsigned int _GetMaxItemCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuHelpText@CDefView@@AEAAX_KPEAGI@Z
    void _GetMenuHelpText(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNeededSecurityAction@CDefView@@AEAAKH@Z
    unsigned long _GetNeededSecurityAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyKeysForTextFilter@CDefView@@AEAAJPEAPEAU_tagpropertykey@@PEAI@Z
    long _GetPropertyKeysForTextFilter(_tagpropertykey * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProviderAttributes@CDefView@@AEAAHPEAW4PROVIDER_ATTRIBUTES@@@Z
    int _GetProviderAttributes(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResultShape@CDefView@@AEAAJPEAPEAUIResultShape@@@Z
    long _GetResultShape(IResultShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItemsArray@CDefView@@AEAAHPEAPEAHPEAH@Z
    int _GetSelectedItemsArray(int * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelection@CDefView@@AEAAJHPEAPEAUIShellItemArray@@@Z
    long _GetSelection(int, IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItemArrayFromObjectCollection@CDefView@@AEAAJPEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _GetShellItemArrayFromObjectCollection(IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTryHarderItems@CDefView@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetTryHarderItems(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIObjectFromItemArray@CDefView@@AEAAJPEAUIObjectCollection@@HAEBU_GUID@@PEAPEAX@Z
    long _GetUIObjectFromItemArray(IObjectCollection *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewFlags@CDefView@@AEAA?AW4BROWSER_VIEW_FLAGS@@XZ
    int _GetViewFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleSlotCount@CDefView@@AEAAHXZ
    int _GetVisibleSlotCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleNM_SETFOCUS@CDefView@@AEAAXXZ
    void _HandleNM_SETFOCUS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitArrangeByMenu@CDefView@@AEAAHPEAUHMENU__@@@Z
    int _InitArrangeByMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromPreviousView@CDefView@@AEAAXPEAUIShellView@@@Z
    void _InitFromPreviousView(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitGroupByMenu@CDefView@@AEAAHPEAUHMENU__@@@Z
    int _InitGroupByMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSortByMenu@CDefView@@AEAAHPEAUHMENU__@@@Z
    int _InitSortByMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitViewMenu@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _InitViewMenu(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitViewMenuViews@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _InitViewMenuViews(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenu@CDefView@@AEAAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFOEX@@@Z
    long _InvokeContextMenu(IContextMenu *, _CMINVOKECOMMANDINFOEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenuVerbOnSelection@CDefView@@AEAAJPEBDI@Z
    long _InvokeContextMenuVerbOnSelection(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenuVerbOnSelectionWorker@CDefView@@AEAAJPEBDI@Z
    long _InvokeContextMenuVerbOnSelectionWorker(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeCustomization@CDefView@@AEAAHXZ
    int _InvokeCustomization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeFilterOperation@CDefView@@AEAAJHW4FILTER_OPERATION_FLAGS@@@Z
    long _InvokeFilterOperation(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAutoArrange@CDefView@@AEAAHXZ
    int _IsAutoArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCollectionProvider@CDefView@@AEAAHXZ
    int _IsCollectionProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsGroupedAndSortedByItemDateSpecialCase@CDefView@@AEAAHPEAH@Z
    int _IsGroupedAndSortedByItemDateSpecialCase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHostedInFrame@CDefView@@AEAAHXZ
    int _IsHostedInFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInsertMarkView@CDefView@@AEAAHXZ
    int _IsInsertMarkView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemCountPending@CDefView@@AEAAHXZ
    int _IsItemCountPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPositionableView@CDefView@@AEAAHXZ
    int _IsPositionableView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPositionedView@CDefView@@AEAAHXZ
    int _IsPositionedView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSearchOnTextFilter@CDefView@@AEAAHXZ
    int _IsSearchOnTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUserLibraryRoot@CDefView@@AEAAHXZ
    int _IsUserLibraryRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsViewStacked@CDefView@@AEAAHXZ
    int _IsViewStacked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadPersistedHistory@CDefView@@AEAAJXZ
    long _LoadPersistedHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeViewMenu@CDefView@@AEAAXPEAUHMENU__@@0@Z
    void _MergeViewMenu(HMENU__*, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveItems@CDefView@@AEAAJHPEBHHPEAH@Z
    long _MoveItems(int, int const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateTextFilter@CDefView@@AEAAJXZ
    long _NavigateTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateTextFilterWorker@CDefView@@AEAAJPEAU_ITEMIDLIST_ABSOLUTE@@K@Z
    long _NavigateTextFilterWorker(_ITEMIDLIST_ABSOLUTE *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NavigateToColumnFilter@CDefView@@AEAAJAEBU_tagpropertykey@@PEAUIFilterCondition@@W4tagARRANGE_MODE@@H@Z
    long _NavigateToColumnFilter(_tagpropertykey const &, IFilterCondition *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnActivate@CDefView@@AEAAHI@Z
    int _OnActivate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClipboardChange@CDefView@@AEAA_JXZ
    int64_t _OnClipboardChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionCreated@CDefView@@AEAAJXZ
    long _OnCollectionCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionStarted@CDefView@@AEAAJXZ
    long _OnCollectionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnColumnsChanged@CDefView@@AEAAXW4COLUMN_CHANGED_FLAGS@@@Z
    void _OnColumnsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CDefView@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContentsChanged@CDefView@@AEAAXW4CONTENTS_CHANGED_FLAGS@@@Z
    void _OnContentsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnContextMenu@CDefView@@AEAAX_J@Z
    void _OnContextMenu(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CDefView@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnCreate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDeactivate@CDefView@@AEAAHXZ
    int _OnDeactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDefaultCommand@CDefView@@AEAAJXZ
    long _OnDefaultCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedColumnsChanged@CDefView@@AEAAXW4COLUMN_CHANGED_FLAGS@@@Z
    void _OnDelayedColumnsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedContentsChanged@CDefView@@AEAAXXZ
    void _OnDelayedContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedFilterContents@CDefView@@AEAAXH@Z
    void _OnDelayedFilterContents(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedSelectionChange@CDefView@@AEAAXXZ
    void _OnDelayedSelectionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEnumDoneMessage@CDefView@@AEAAXXZ
    void _OnEnumDoneMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFolderFlagsChanged@CDefView@@AEAAHW4FOLDERFLAGS@@@Z
    int _OnFolderFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitMenuPopup@CDefView@@AEAA_JPEAUHMENU__@@HH@Z
    int64_t _OnInitMenuPopup(HMENU__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemCountChanged@CDefView@@AEAAJXZ
    long _OnItemCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemCountDone@CDefView@@AEAAXXZ
    void _OnItemCountDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemMoved@CDefView@@AEAAXXZ
    void _OnItemMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMenuMessage@CDefView@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OnMenuMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelectionOrFocusChanged@CDefView@@AEAAXXZ
    void _OnSelectionOrFocusChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSizeChanged@CDefView@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnSizeChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnStateChange@CDefView@@AEAAJI@Z
    long _OnStateChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnThemeChange@CDefView@@AEAAXXZ
    void _OnThemeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinIniChange@CDefView@@AEAAX_KPEBG@Z
    void _OnWinIniChange(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinIniChangeDesktop@CDefView@@AEAAX_KPEBG@Z
    void _OnWinIniChangeDesktop(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintErrMsg@CDefView@@AEAAXPEAUHWND__@@@Z
    void _PaintErrMsg(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistSingleSelection@CDefView@@AEAAXXZ
    void _PersistSingleSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionSelectedItems@CDefView@@AEAAXHHH@Z
    void _PositionSelectedItems(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessDelayActivationWorker@CDefView@@AEAAXXZ
    void _ProcessDelayActivationWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateOnViewChange@CDefView@@AEAAXKJ@Z
    void _PropagateOnViewChange(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReInitialize@CDefView@@AEAAJXZ
    long _ReInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshView@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _RefreshView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindow@CDefView@@AEAAXXZ
    void _RegisterWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCurrentCollection@CDefView@@AEAAXXZ
    void _ReleaseCurrentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadItems@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _ReloadItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadSettings@CDefView@@AEAAXW4UPDATE_FLAGS@@@Z
    void _ReloadSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReloadView@CDefView@@AEAAJW4UPDATE_FLAGS@@@Z
    long _ReloadView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCopyHook@CDefView@@AEAAXXZ
    void _RemoveCopyHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RenameSelection@CDefView@@AEAAJPEAUIShellItemArray@@PEBG@Z
    long _RenameSelection(IShellItemArray *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportDevirtualizationSQMData@CDefView@@AEAAXW4SQM_DEVIRTUALIZATION_SOURCE@@@Z
    void _ReportDevirtualizationSQMData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SameViewMoveIcons@CDefView@@AEAAXXZ
    void _SameViewMoveIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchOnTextFilter@CDefView@@AEAAJXZ
    long _SearchOnTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchTargetNavigatesToSearch@CDefView@@AEAAHXZ
    int _SearchTargetNavigatesToSearch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectAndPosition@CDefView@@AEAAJPEBUtagLCITEM@@IPEAUtagPOINT@@@Z
    long _SelectAndPosition(tagLCITEM const *, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectDelaySelectedItems@CDefView@@AEAAXH@Z
    void _SelectDelaySelectedItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectFromPreviousView@CDefView@@AEAAJPEAUIShellView@@@Z
    long _SelectFromPreviousView(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectionHasFolderJunction@CDefView@@AEAAHXZ
    int _SelectionHasFolderJunction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendPerfTrackFilters@CDefView@@AEAAXHAEBU_tagpropertykey@@@Z
    void _SendPerfTrackFilters(int, _tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBusyState@CDefView@@AEAAJH@Z
    long _SetBusyState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEditMenus@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _SetEditMenus(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocus@CDefView@@AEAAXXZ
    void _SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemCollection@CDefView@@AEAAJPEAUIItemCollection@@IW4UPDATE_FLAGS@@PEAVCEventResult@@@Z
    long _SetItemCollection(IItemCollection *, unsigned int, int, CEventResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemPosition@CDefView@@AEAAXAEBUtagLCITEM@@HH@Z
    void _SetItemPosition(tagLCITEM const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenusForShowingView@CDefView@@AEAAXPEAUHMENU__@@PEBIIH@Z
    void _SetMenusForShowingView(HMENU__*, unsigned int const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPoints@CDefView@@AEAAXIPEBQEFBU_ITEMID_CHILD@@PEAUIDataObject@@@Z
    void _SetPoints(unsigned int, _ITEMID_CHILD & volatile * const *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTextFilter@CDefView@@AEAAJPEBG0W4SET_TEXT_FILTER_FLAGS@@@Z
    long _SetTextFilter(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTileViewProperties@CDefView@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@PEBG@Z
    long _SetTileViewProperties(_ITEMID_CHILD & volatile *, _tagpropertykey const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpMenus@CDefView@@AEAAXI@Z
    void _SetUpMenus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewColors@CDefView@@AEAAXXZ
    void _SetViewColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAddKnownFolder@CDefView@@AEAAHAEBU_GUID@@@Z
    int _ShouldAddKnownFolder(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAddTextFilterToLocation@CDefView@@AEAAHXZ
    int _ShouldAddTextFilterToLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldReparentItem@CDefView@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _ShouldReparentItem(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldSuppressCollection@CDefView@@AEAAHXZ
    int _ShouldSuppressCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideListView@CDefView@@AEAAJXZ
    long _ShowHideListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowingView@CDefView@@AEAAHXZ
    int _ShowingView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopCollection@CDefView@@AEAAXXZ
    void _StopCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToViewModeAndIconSize@CDefView@@AEAAXW4FOLDERVIEWMODE@@H@Z
    void _SwitchToViewModeAndIconSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryModifyMenu@CDefView@@AEAAJPEAUIContextMenu@@HAEBU_GUID@@PEAPEAX@Z
    long _TryModifyMenu(IContextMenu *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnCheckMenuItems@CDefView@@AEAAXPEAUHMENU__@@@Z
    void _UnCheckMenuItems(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCollectionPriority@CDefView@@AEAAXXZ
    void _UpdateCollectionPriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateColors@CDefView@@AEAAXXZ
    void _UpdateColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateEnumerationFlags@CDefView@@AEAAXXZ
    void _UpdateEnumerationFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSortColumnArray@CDefView@@AEAAJAEBU_tagpropertykey@@HPEAUSORTCOLUMN@@IPEAI@Z
    long _UpdateSortColumnArray(_tagpropertykey const &, int, SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTextFilter@CDefView@@AEAAXXZ
    void _UpdateTextFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UseItemsView@CDefView@@AEAAHXZ
    int _UseItemsView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewHasSubfolders@CDefView@@AEAAHXZ
    int _ViewHasSubfolders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewWindowSetFocus@CDefView@@AEAAXXZ
    void _ViewWindowSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WordwheelHasMeaningfullyChanged@CDefView@@AEAAHPEBG0@Z
    int _WordwheelHasMeaningfullyChanged(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ZoneCheck@CDefView@@AEAAJKK@Z
    long _ZoneCheck(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ZoneCheckFrame@CDefView@@AEAAJKH@Z
    long _ZoneCheckFrame(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DSAFreeDelaySelectCB@CDefView@@CAHPEAUSAP_ITEM@@PEAX@Z
    static int s_DSAFreeDelaySelectCB(SAP_ITEM *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CDefView@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ZonePreWarmCallback@CDefView@@CAKPEAX@Z
    static unsigned long s_ZonePreWarmCallback(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDefView@@EEAA@XZ
    virtual ~CDefView();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `DoSelectionContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `SelectItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsSafeToDrop` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_DelaySelectAndPositionItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetGroupBy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_ProcessDelayActivationWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessDelayActivation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReportDevirtualizationSQMData` | `void` | `Method` | `Pdb` | No (PDB) |
| `_InvokeContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWorkingDirectory` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnInitialEnumerationDone` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetProviderAttributes` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnDelayedSelectionChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnItemCountChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FireTrackEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ApplySniffedFolderType` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FireFolderTypeKnownEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnDelayedColumnsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnItemStateChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContentsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SelectDelaySelectedItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnContentsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReleaseCurrentCollection` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnPaintDone` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnDelayedContentsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ClearCachedSelection` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnExplorerWindowReady` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FireEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FireCountDoneEnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnGetSortColumn` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetArrangeMode` | `enum VIEW_ARRANGEMENT_MODE` | `Method` | `Pdb` | No (PDB) |
| `_IsInsertMarkView` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsGroupView` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetViewColors` | `void` | `Method` | `Pdb` | No (PDB) |
| `CanSortView` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsViewStacked` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewModeAndIconSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFirstSortColumn` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_IsGroupedAndSortedByItemDateSpecialCase` | `int` | `Method` | `Pdb` | No (PDB) |
| `CanGroupView` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsFolderViewCapabilitySupported` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsViewSorted` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_IsAutoArrange` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InitSortByMenu` | `int` | `Method` | `Pdb` | No (PDB) |
| `_DeleteMenuItems` | `int` | `Method` | `Pdb` | No (PDB) |
| `_AddColumnsToMenu` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InitViewMenuViews` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CheckCurrentViewMenuItem` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `GetMenuIDFromViewModeAndIconSize` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `_ShowHideListView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitArrangeByMenu` | `int` | `Method` | `Pdb` | No (PDB) |
| `_UseItemsView` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetFolderViewOptions` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetFolderViewOptions` | `enum FOLDERVIEWOPTIONS` | `Method` | `Pdb` | No (PDB) |
| `_IsCollectionProvider` | `int` | `Method` | `Pdb` | No (PDB) |
| `OnGetTryHarderArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetViewFlags` | `enum BROWSER_VIEW_FLAGS` | `Method` | `Pdb` | No (PDB) |
| `_InitViewMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShowingView` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsPositionedView` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CreateCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateCollectionFactory` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateEnumerationFlags` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetEnumFlags` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_CachedIsCustomizable` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InitGroupByMenu` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetResultShape` | `long` | `Method` | `Pdb` | No (PDB) |
| `_BuildConditionForCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddConditionToDPA` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `CDefView` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Init` | `long` | `Method` | `Pdb` | No (PDB) |
| `Exec` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `_Exec` | `long` | `Method` | `Pdb` | No (PDB) |
| `_StopCollection` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `_CancelTryHarderInvoke` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PersistSingleSelection` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnSelectionContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsSafeToDefaultVerb` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_ZoneCheckFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetNeededSecurityAction` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_GetFileSystemFolderPath` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SelectionHasFolderJunction` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetSelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ClearSelectionIfChangePending` | `void` | `Method` | `Pdb` | No (PDB) |
| `Items` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetItemsWorker` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetShellItemArrayFromObjectCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `TryGetContextMenuPresenter` | `class Microsoft::WRL::ComPtr<struct IContextMenuPresenter>` | `Method` | `Pdb` | No (PDB) |
| `s_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_CanGroupBy` | `int` | `Method` | `Pdb` | No (PDB) |
| `QueryObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `GetFolder` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetCommandString` | `long` | `Method` | `Pdb` | No (PDB) |
| `IncludeItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetItemArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnMenuMessage` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `DoBackgroundContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetItemObject` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_CBackgrndMenu_CreateInstance` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetAutomationObject` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_Create_BackgrndHMENU` | `long` | `Method` | `Pdb` | No (PDB) |
| `_TryModifyMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `Item` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExecuteRename` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnFocusChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleNM_SETFOCUS` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnStateChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnActivate` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetUpMenus` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnDeactivate` | `int` | `Method` | `Pdb` | No (PDB) |
| `_MergeViewMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetSearchText` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetChildId` | `long` | `Method` | `Pdb` | No (PDB) |
| `ItemCount` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetStatus` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ApplySettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FindItemAndIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FindItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetItemFromPidl` | `long` | `Method` | `Pdb` | No (PDB) |
| `IncludeItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnThemeChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetTheme` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateCollectionPriority` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnSettingsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateInitialCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateNewCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetIDList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetWatermark` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_ShouldSuppressCollection` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetPromptText` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnSizeChanged` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_ReloadItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetView` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `FilterByCondition` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnCommand` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_ArrangeByCommandId` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetMenusForShowingView` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetAdvise` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPoints` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelectedObjects` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetPoints` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetUIObjectFromItemArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetChildIdArrayFromItemArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `NavigateToIDList` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnColumnsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnColumnsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_LoadPersistedHistory` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetColumns` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_SetBusyState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SelectFromPreviousView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetCommonDialogViewFlags` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `CancelDelayActivation` | `long` | `Method` | `Pdb` | No (PDB) |
| `AllowDarkModeContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `SaveViewState` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetMaxItemCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetMaxItemCount` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `SetInvocationLocation` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_InvokeContextMenuVerbOnSelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InvokeContextMenuVerbOnSelectionWorker` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetLocationContext` | `enum LOCATION_CONTEXT_FLAGS` | `Accessor` | `Pdb` | No (PDB) |
| `_UpdateColors` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReloadView` | `long` | `Method` | `Pdb` | No (PDB) |
| `FilterByText` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnWinIniChangeDesktop` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetRedraw` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `EnableAlphaShadow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ViewWindowSetFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetAdvise` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsViewStacked` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `_EnsureLocationTextFilter` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SameViewMoveIcons` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetInsertPoint` | `int` | `Method` | `Pdb` | No (PDB) |
| `_PositionSelectedItems` | `void` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CDefView` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `_GetExplorerFlag` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `_CallRefresh` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ClearDelayedViewInsertedItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnDefaultCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetAutoArrange` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_RemoveCopyHook` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetAccessibleName` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnGetEmptyText` | `long` | `Method` | `Pdb` | No (PDB) |
| `SelectAndPositionItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragOver` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetInheritFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `DelayActivation` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnableModeless` | `long` | `Method` | `Pdb` | Yes |
| `InitMenuPopup` | `long` | `Method` | `Pdb` | Yes |
| `QuerySupport` | `long` | `Method` | `Pdb` | Yes |
| `SetViewSQMInfo` | `long` | `Accessor` | `Pdb` | Yes |
| `DestroyViewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetInvocationLocation` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetInsertMark` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_AddZoneToDataObject` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetFocus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_IsSearchOnTextFilter` | `int` | `Method` | `Pdb` | No (PDB) |
| `_AlterEffect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AllowEditCommand` | `int` | `Method` | `Pdb` | No (PDB) |
| `HasFocusIO` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_AddToRecentDocs` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetFolderTypeDescription` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateViewWindow3` | `long` | `Method` | `Pdb` | No (PDB) |
| `PaintComplete` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DestroyView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FillDone` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetDragHelper` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitFromPreviousView` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnCollectionCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnCollectionStarted` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnEnumDoneMessage` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSelectionOrFocusChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RegisterWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReloadSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SelectAndPosition` | `long` | `Method` | `Pdb` | No (PDB) |
| `_WordwheelHasMeaningfullyChanged` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetContextMenuCapability` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_CreateSelectionContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UnCheckMenuItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnFolderFlagsChanged` | `int` | `Method` | `Pdb` | No (PDB) |
| `IsMoveInSameFolder` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_IsItemCountPending` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetVisibleSlotCount` | `int` | `Method` | `Pdb` | No (PDB) |
| `_RefreshView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateTextFilter` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsPositionableView` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnItemCountDone` | `void` | `Method` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `long` | `Method` | `Pdb` | Yes |
| `Draw` | `long` | `Method` | `Pdb` | Yes |
| `Freeze` | `long` | `Method` | `Pdb` | Yes |
| `GetClassID` | `long` | `Accessor` | `Pdb` | Yes |
| `GetFont` | `long` | `Accessor` | `Pdb` | Yes |
| `GetItemHeight` | `long` | `Accessor` | `Pdb` | Yes |
| `MoveIcons` | `long` | `Method` | `Pdb` | Yes |
| `OnRequestReposition` | `long` | `Method` | `Pdb` | Yes |
| `OnSetTitle` | `long` | `Method` | `Pdb` | Yes |
| `OnSettingsLoad` | `long` | `Method` | `Pdb` | Yes |
| `OnSettingsSave` | `long` | `Method` | `Pdb` | Yes |
| `SetFolderViewOptions` | `long` | `Accessor` | `Pdb` | Yes |
| `SetFont` | `long` | `Accessor` | `Pdb` | Yes |
| `SetIDList` | `long` | `Accessor` | `Pdb` | Yes |
| `SetItemHeight` | `long` | `Accessor` | `Pdb` | Yes |
| `SetObjectCount` | `long` | `Accessor` | `Pdb` | Yes |
| `UIActivateIO` | `long` | `Method` | `Pdb` | Yes |
| `Unfreeze` | `long` | `Method` | `Pdb` | Yes |
| `GetOperationID` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetMenu` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `EnableModeless` | `[thunk]: public: virtual long` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: private: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: private: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
| `AddObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddPropertySheetPages` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddToCache` | `long` | `Method` | `Pdb` | No (PDB) |
| `AlterEffect` | `void` | `Method` | `Pdb` | No (PDB) |
| `ArrangeByColumn` | `void` | `Method` | `Pdb` | No (PDB) |
| `ArrangeGrid` | `long` | `Method` | `Pdb` | No (PDB) |
| `AutoArrange` | `long` | `Method` | `Pdb` | No (PDB) |
| `AutoSizeAllColumns` | `void` | `Method` | `Pdb` | No (PDB) |
| `CanDesktopUseSolidBackgroundColorHelper` | `int` | `Method` | `Pdb` | No (PDB) |
| `CanDisplayXamlView` | `int` | `Method` | `Pdb` | No (PDB) |
| `CheckCache` | `long` | `Method` | `Pdb` | No (PDB) |
| `CleanupAfterContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `CompleteContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateEnumIDListFromContents` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateItemCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateViewWindow2` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateViewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoClassicMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoContextMenuPopup` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoCuratedContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoExpandedContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoRename` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `Drop` | `long` | `Method` | `Pdb` | No (PDB) |
| `DropCompleted` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `DumpContents` | `long` | `Method` | `Pdb` | No (PDB) |
| `EqualsViewIDList` | `int` | `Method` | `Pdb` | No (PDB) |
| `FilterContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `FireColumnHeaderClickedEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireContextMenuTelemetryEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireViewFinishedDisplayingEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetArrangeParam` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetAutoArrange` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetClassID` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `GetColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorSet` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetColumnCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetColumnInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentFolderFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentPropertyKey` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentValue` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentViewMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDefaultSpacing` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDragPoint` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDropPoint` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDropTargetFromIItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFocusedItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFolderType` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetGroupSubsetCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetHWND` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemIndex` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemSpacing` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemToTranslate` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetObjectCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetObjectW` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelectedCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelectedItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelection` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelectionMarkedItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSelectionState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSemanticMinLength` | `uint64_t` | `Accessor` | `Pdb` | No (PDB) |
| `GetSortColumnCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSortColumns` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSpacing` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSupportedLogicalViews` | `enum SUPPORTS_FOLDER_LOGICAL_VIEW_MODE` | `Accessor` | `Pdb` | No (PDB) |
| `GetViewProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetVisibleItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindow` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `HandleRename` | `long` | `Method` | `Pdb` | No (PDB) |
| `HitTestItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `Invoke` | `void` | `Method` | `Pdb` | No (PDB) |
| `InvokeVerbOnSelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsBkDropTarget` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsDropOnSource` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsDropOnSource` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsEvaluatingEdpPolicy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsFocusOnPopup` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsItemInDeferredQueue` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsSearchResultsFolder` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsValidDropTarget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsXAMLView` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `LimitItemsToVisibleCount` | `long` | `Method` | `Pdb` | No (PDB) |
| `LookupAndRemoveFromCache` | `long` | `Method` | `Pdb` | No (PDB) |
| `MapRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `MoveObjects` | `long` | `Method` | `Pdb` | No (PDB) |
| `NotifyDispatchEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnActivateSelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnBackgroundContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnBeginDrag` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnBeginLabelEdit` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnCancelAsyncFilters` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnClearFilterPreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnColumnAction` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnColumnClicked` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnCommit` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContextMenuDismiss` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnDPIChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnDestroyFilterControl` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnDoCollapseColumn` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnEndLabelEdit` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnFilterChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnFiltersCreated` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGetColumnHeaderFilterVisible` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGroupZoom` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnInvokeTryHarder` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnInvokeVerb` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnItemMoved` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnKeyDown` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnMenuCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnScrollImageSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnSearchTextNotify` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnSelectionSpotlightContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnSetFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnVisibleColumnMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `PassThroughDragEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `PassThroughDragLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `PassThroughDragOver` | `long` | `Method` | `Pdb` | No (PDB) |
| `PassThroughDrop` | `long` | `Method` | `Pdb` | No (PDB) |
| `PreWarmZoneCheckAsync` | `void` | `Method` | `Pdb` | No (PDB) |
| `PrepareForContextMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `PrepareForDragOperation` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryService` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryStatus` | `long` | `Method` | `Pdb` | No (PDB) |
| `Rearrange` | `long` | `Method` | `Pdb` | No (PDB) |
| `Refresh` | `long` | `Method` | `Pdb` | No (PDB) |
| `RefreshObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RemoveObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `Search` | `long` | `Method` | `Pdb` | No (PDB) |
| `Select` | `long` | `Method` | `Pdb` | No (PDB) |
| `SelectAndEditItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `SelectAndPositionItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `SelectItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetCallback` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetClipboard` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetColumnInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetColumns` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetCondition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetCurrentFolderFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetCurrentViewMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetDropAnchor` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetDropSourceEnterpriseId` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetEnumReadyCallback` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetExtendedTileViewProperties` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetGroupBy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetGroupSubsetCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetItemPos` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetMaxItemCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRedraw` | `[thunk]: public: virtual long` | `Accessor` | `Pdb` | No (PDB) |
| `SetResultShape` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetSortColumns` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetText` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTileViewProperties` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTileWidth` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetViewModeAndIconSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetViewProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowIsHidden` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldShowMiniMenu` | `bool` | `Method` | `Pdb` | No (PDB) |
| `StackByProperty` | `long` | `Method` | `Pdb` | No (PDB) |
| `ToggleHideFilenames` | `void` | `Method` | `Pdb` | No (PDB) |
| `ToggleVisibleColumn` | `void` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `TranslateAcceleratorW` | `long` | `Method` | `Pdb` | No (PDB) |
| `TranslateViewAccelerator` | `long` | `Method` | `Pdb` | No (PDB) |
| `TryGetDropTargetForIItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `UIActivate` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddColumnVerbsToMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddCopyHook` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AddEnumFlagsCondition` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddSubfolderTryHarderItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTextFilterToLocation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderCustom` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderForAllLibraries` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderForCurrentLibrary` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderForHomeGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderForLibraryItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderFullText` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderInternetSearch` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderItemForComputer` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderItemsFromFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderItemsFromView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddTryHarderPinnedItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AllowCommand` | `int` | `Method` | `Pdb` | No (PDB) |
| `_AppendSortBuddies` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ApplyArrangeBy` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ArrangeByMode` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Attributes` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_AttributesFromSelection` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_BrowseToIDList` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CallCBWithFolderTypeFallback` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CanPositionByAnchor` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ClearDelaySelectedItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateAttribCondition` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateGroupFolderSearchItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateSearchOnAnyFolder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateSortColumnArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateSortColumnArrayWithSecondaryColumn` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateStackedIDList` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CurrentAutolistHasSameDisplayNameAsKnownFolder` | `int` | `Method` | `Pdb` | No (PDB) |
| `_DoColumnClicked` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoColumnDropDownMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoContextMenuPopup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ExplorerCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FireFilterInvoked` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ForwardMenuMessages` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetCBText` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetChildIdArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetContextMenuFromObjectCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetCurrentSortColumnArray` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetDragPoint` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetDropPoint` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetFullTextKey` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetMenuHelpText` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetPropertyKeysForTextFilter` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetSelectedItemsArray` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetTryHarderItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InvokeCustomization` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InvokeFilterOperation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_IsHostedInFrame` | `int` | `Method` | `Pdb` | No (PDB) |
| `_IsUserLibraryRoot` | `int` | `Method` | `Pdb` | No (PDB) |
| `_MoveItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NavigateTextFilter` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NavigateTextFilterWorker` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NavigateToColumnFilter` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnClipboardChange` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnCreate` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnDelayedFilterContents` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnInitMenuPopup` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnItemMoved` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnWinIniChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PaintErrMsg` | `void` | `Method` | `Pdb` | No (PDB) |
| `_PropagateOnViewChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReInitialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_RenameSelection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SearchOnTextFilter` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SearchTargetNavigatesToSearch` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SendPerfTrackFilters` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetEditMenus` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetItemCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetItemPosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetTextFilter` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetTileViewProperties` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ShouldAddKnownFolder` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ShouldAddTextFilterToLocation` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ShouldReparentItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SwitchToViewModeAndIconSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateSortColumnArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ViewHasSubfolders` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ZoneCheck` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_DSAFreeDelaySelectCB` | `int` | `Method` | `Pdb` | No (PDB) |
| `s_ZonePreWarmCallback` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `v_IsRootEntryAutoNavigated` | `int` | `Method` | `Pdb` | No (PDB) |
| `HandleRenameComplete` | `void` | `Method` | `Pdb` | No (PDB) |
