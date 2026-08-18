# `global` :: `CListViewHost`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `shell32.dll`. Total members: **300**.

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

// Reconstructed from shell32.dll by Windissect. 300 member(s).
class CListViewHost {
public:
    class CJustInTimeItemSink;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CListViewHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoSizeColumn@CListViewHost@@UEAAJAEBU_tagpropertykey@@H@Z
    virtual long AutoSizeColumn(_tagpropertykey const &, int);
    // Category: Method | Source: PE Export
    // Symbol: ?BeginGroupEdit@CListViewHost@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long BeginGroupEdit(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSubItemEdit@CListViewHost@@UEAAJHHW4LV_EDIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long BeginSubItemEdit(int, int, int, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CListViewHost@@QEAA@XZ
    CListViewHost();
    // Category: Method | Source: PE Export
    // Symbol: ?Cancel@CListViewHost@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseAllGroups@CListViewHost@@UEAAJXZ
    virtual long CollapseAllGroups();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CListViewHost@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateControl@CListViewHost@@UEAAJPEAUHWND__@@PEAUIListControlHost@@PEAUIViewSettings@@@Z
    virtual long CreateControl(HWND__*, IListControlHost *, IViewSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CListViewHost@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissEdit@CListViewHost@@UEAAJXZ
    virtual long DismissEdit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragSelectItem@CListViewHost@@UEAAJPEBUtagLCITEM@@@Z
    virtual long DragSelectItem(tagLCITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditItemLabel@CListViewHost@@UEAAJPEBUtagLCITEM@@PEBUtagPOINT@@@Z
    virtual long EditItemLabel(tagLCITEM const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAlphaShadow@CListViewHost@@UEAAJH@Z
    virtual long EnableAlphaShadow(int);
    // Category: Method | Source: PE Export
    // Symbol: ?EndGroupEdit@CListViewHost@@UEAAJHHPEAUIPropertyControl@@@Z
    virtual long EndGroupEdit(int, int, IPropertyControl *);
    // Category: Method | Source: PE Export
    // Symbol: ?EndSubItemEdit@CListViewHost@@UEAAJHHHPEAUIPropertyControl@@@Z
    virtual long EndSubItemEdit(int, int, int, IPropertyControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisible@CListViewHost@@UEAAJAEBUtagLCITEM@@@Z
    virtual long EnsureVisible(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandAllGroups@CListViewHost@@UEAAJXZ
    virtual long ExpandAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@CListViewHost@@UEAAJPEAUIItem@@PEAUtagLCITEM@@@Z
    virtual long FindItem(IItem *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemAndIndex@CListViewHost@@UEAAJPEAUIItem@@PEAUtagLCITEM@@@Z
    virtual long FindItemAndIndex(IItem *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishAndSaveBatchPositionChanges@CListViewHost@@UEAAX_N@Z
    virtual void FinishAndSaveBatchPositionChanges(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassID@CListViewHost@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CListViewHost@@UEAAJW4VPCOLORFLAGS@@PEAK@Z
    virtual long GetColor(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CListViewHost@@UEAAJPEAUtagLCITEM@@@Z
    virtual long GetFocusedItem(tagLCITEM *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFont@CListViewHost@@UEAAJPEAUtagLOGFONTW@@@Z
    virtual long GetFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CListViewHost@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMark@CListViewHost@@UEAAJPEAUtagLCITEM@@@Z
    virtual long GetInsertMark(tagLCITEM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertMarkRect@CListViewHost@@UEAAJPEAUtagRECT@@@Z
    virtual long GetInsertMarkRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CListViewHost@@UEAAJHPEAPEAUIItem@@@Z
    virtual long GetItem(int, IItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CListViewHost@@UEAAJW4tagLC_ITEM_SET_TYPE@@PEAI@Z
    virtual long GetItemCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemGroup@CListViewHost@@UEAAJHHPEAH@Z
    virtual long GetItemGroup(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemGroupCount@CListViewHost@@UEAAJHPEAH@Z
    virtual long GetItemGroupCount(int, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemHeight@CListViewHost@@UEAAJPEAH@Z
    virtual long GetItemHeight(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemInGroup@CListViewHost@@UEAAJHHPEAH@Z
    virtual long GetItemInGroup(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CListViewHost@@UEAAJHPEAUtagPOINT@@@Z
    virtual long GetItemPosition(int, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CListViewHost@@UEAAJAEBUtagLCITEM@@PEAUtagPOINT@@@Z
    virtual long GetItemPosition(tagLCITEM const &, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemRect@CListViewHost@@UEAAJHPEAUtagRECT@@@Z
    virtual long GetItemRect(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSize@CListViewHost@@UEAAJPEAH0@Z
    virtual long GetItemSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSpacing@CListViewHost@@UEAAJPEAH0@Z
    virtual long GetItemSpacing(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemState@CListViewHost@@UEAAJAEBUtagLCITEM@@PEAW4LC_ITEM_FLAGS@@@Z
    virtual long GetItemState(tagLCITEM const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItems@CListViewHost@@UEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetItems(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextIndex@CListViewHost@@UEAAJHW4tagLC_NEXT_INDEX_STATE@@KPEAH@Z
    virtual long GetNextIndex(int, int, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollingWindow@CListViewHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetScrollingWindow(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubItemControl@CListViewHost@@UEAAJHHAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubItemControl(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubItemTitle@CListViewHost@@UEAAJHPEAGH@Z
    virtual long GetSubItemTitle(int, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentBackground@CListViewHost@@UEAAJPEAH@Z
    virtual long GetTransparentBackground(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleItemCount@CListViewHost@@UEAAJPEAI@Z
    virtual long GetVisibleItemCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CListViewHost@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostSelectedItems@CListViewHost@@UEAAJH@Z
    virtual long GhostSelectedItems(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CListViewHost@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestInsertMark@CListViewHost@@UEAAJPEBUtagPOINT@@PEAUtagLCITEM@@@Z
    virtual long HitTestInsertMark(tagPOINT const *, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CListViewHost@@UEAAJPEBUtagPOINT@@HPEAUtagLCITEM@@@Z
    virtual long HitTestItem(tagPOINT const *, int, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestItem@CListViewHost@@UEAAJUtagPOINT@@PEAH@Z
    virtual long HitTestItem(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CListViewHost@@QEAAJPEAUIShellFolder2@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long Init(IShellFolder2*, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateEmptyText@CListViewHost@@UEAAJXZ
    virtual long InvalidateEmptyText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTryHarder@CListViewHost@@UEAAJXZ
    virtual long InvalidateTryHarder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSelectionContextMenu@CListViewHost@@UEAAJH@Z
    virtual long InvokeSelectionContextMenu(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemToListViewIndex@CListViewHost@@QEAAHPEAUIItem@@@Z
    int ItemToListViewIndex(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoint@CListViewHost@@UEAAJW4tagLC_POINT_TYPE@@PEBUtagPOINT@@0PEAU3@@Z
    virtual long MapPoint(int, tagPOINT const *, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRect@CListViewHost@@UEAAJHPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long MapRect(int, HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeSelectionContextMenu@CListViewHost@@UEAAJPEAUHMENU__@@HPEBUtagPOINT@@@Z
    virtual long MergeSelectionContextMenu(HMENU__*, int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonClicked@CListViewHost@@UEAAJH_JPEAH@Z
    virtual long OnButtonClicked(int, int64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCacheHint@CListViewHost@@UEAAJUtagLVITEMINDEX@@0@Z
    virtual long OnCacheHint(tagLVITEMINDEX, tagLVITEMINDEX);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CListViewHost@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CListViewHost@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CListViewHost@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyButton@CListViewHost@@UEAAJH_J@Z
    virtual long OnDestroyButton(int, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnExplorerWindowReady@CListViewHost@@UEAAJXZ
    virtual long OnExplorerWindowReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CListViewHost@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageListChanged@CListViewHost@@UEAAJXZ
    virtual long OnImageListChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeVerb@CListViewHost@@UEAAJHPEBG@Z
    virtual long OnInvokeVerb(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CListViewHost@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanging@CListViewHost@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CListViewHost@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CListViewHost@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CListViewHost@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CListViewHost@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrepareDone@CListViewHost@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@CListViewHost@@UEAAJK@Z
    virtual long OnSettingsChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsLoad@CListViewHost@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsLoad(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsSave@CListViewHost@@UEAAJPEAUIPropertyBag@@@Z
    virtual long OnSettingsSave(IPropertyBag *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUniqueLeafCountChanged@CListViewHost@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewChanging@CListViewHost@@UEAAJW4tagLC_VIEW_CHANGING@@@Z
    virtual long OnViewChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionSelectedItemsFromMove@CListViewHost@@UEAAJAEBUtagPOINT@@00_N@Z
    virtual long PositionSelectedItemsFromMove(tagPOINT const &, tagPOINT const &, tagPOINT const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForBatchPositionChanges@CListViewHost@@UEAAX_N@Z
    virtual void PrepareForBatchPositionChanges(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CListViewHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CListViewHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawItem@CListViewHost@@UEAAJAEBUtagLCITEM@@@Z
    virtual long RedrawItem(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@CListViewHost@@UEAAJXZ
    virtual long RefreshSettings();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CListViewHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RequiresGetCountTask@CListViewHost@@UEAAJXZ
    virtual long RequiresGetCountTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CListViewHost@@UEAAJW4tagLC_SELECTION_MODE@@@Z
    virtual long Select(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CListViewHost@@UEAAJW4VPCOLORFLAGS@@K@Z
    virtual long SetColor(int, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CListViewHost@@UEAAJPEBUtagLOGFONTW@@H@Z
    virtual long SetFont(tagLOGFONTW const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIDList@CListViewHost@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerFocus@CListViewHost@@UEAAJH@Z
    virtual long SetInnerFocus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsertMark@CListViewHost@@UEAAJPEBUtagLCITEM@@@Z
    virtual long SetInsertMark(tagLCITEM const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollection@CListViewHost@@UEAAJPEAUIItemCollection@@@Z
    virtual long SetItemCollection(IItemCollection *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemHeight@CListViewHost@@UEAAJH@Z
    virtual long SetItemHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPosition@CListViewHost@@UEAAJHUtagPOINT@@@Z
    virtual long SetItemPosition(int, tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemPosition@CListViewHost@@UEAAJAEBUtagLCITEM@@PEBUtagPOINT@@@Z
    virtual long SetItemPosition(tagLCITEM const &, tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemState@CListViewHost@@UEAAJAEBUtagLCITEM@@W4LC_ITEM_FLAGS@@1@Z
    virtual long SetItemState(tagLCITEM const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTheme@CListViewHost@@UEAAJPEBG0@Z
    virtual long SetTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileWidth@CListViewHost@@UEAAJH@Z
    virtual long SetTileWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentBackground@CListViewHost@@UEAAJH@Z
    virtual long SetTransparentBackground(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWatermark@CListViewHost@@UEAAJPEAUHBITMAP__@@W4VPWATERMARKFLAGS@@@Z
    virtual long SetWatermark(HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkAreasWithDPI@CListViewHost@@UEAAJPEAUWorkAreaWithDPI@@H@Z
    virtual long SetWorkAreasWithDPI(WorkAreaWithDPI *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@CListViewHost@@UEAAJPEBUtagPOINT@@@Z
    virtual long ShowContextMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CListViewHost@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CListViewHost@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseOnImagesChangedPerWorkAreas@CListViewHost@@AEAAJXZ
    long AdviseOnImagesChangedPerWorkAreas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDesktopSorting@CListViewHost@@AEAAJXZ
    long ClearDesktopSorting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIForPoint@CListViewHost@@AEAAJAEBUtagPOINT@@PEAH@Z
    long GetDPIForPoint(tagPOINT const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageManagerForPosition@CListViewHost@@AEAAJAEBUtagPOINT@@AEBU_GUID@@PEAPEAX@Z
    long GetImageManagerForPosition(tagPOINT const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageManagerForWorkArea@CListViewHost@@AEAAJ_KAEBU_GUID@@PEAPEAX@Z
    long GetImageManagerForWorkArea(uint64_t, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPositionInCollection@CListViewHost@@AEAAJPEAUIObjectCollection@@HPEAUtagPOINT@@@Z
    long GetItemPositionInCollection(IObjectCollection *, int, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalIconSizeAdjustedForDPI@CListViewHost@@AEAAIH@Z
    unsigned int GetPhysicalIconSizeAdjustedForDPI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkAreasWithDPI@CListViewHost@@AEAAJPEA_KPEAPEAUtagLVWORKAREAWITHDPI@@@Z
    long GetWorkAreasWithDPI(uint64_t *, tagLVWORKAREAWITHDPI * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopMultipleWorkAreasAware@CListViewHost@@AEAA_NXZ
    bool IsDesktopMultipleWorkAreasAware();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSpotlightIcon@CListViewHost@@AEAA_NH@Z
    bool IsDesktopSpotlightIcon(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSpotlightIcon@CListViewHost@@AEAA_NPEAUIItem@@@Z
    bool IsDesktopSpotlightIcon(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopSpotlightIcon@CListViewHost@@AEAA_NPEAUtagNMLISTVIEW@@@Z
    bool IsDesktopSpotlightIcon(tagNMLISTVIEW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameAsPreviousWorkAreas@CListViewHost@@AEAA?B_NPEBUtagLVWORKAREAWITHDPI@@H@Z
    bool IsSameAsPreviousWorkAreas(tagLVWORKAREAWITHDPI const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CListViewHost@@AEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceItemWithLogicalDisplacement@CListViewHost@@AEAAJAEBUtagLCITEM@@AEBUtagPOINT@@1HAEAU3@@Z
    long PlaceItemWithLogicalDisplacement(tagLCITEM const &, tagPOINT const &, tagPOINT const &, int, tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareImageManagersPerWorkArea@CListViewHost@@AEAAJXZ
    long PrepareImageManagersPerWorkArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawNow@CListViewHost@@AEAAXXZ
    void RedrawNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadImageServices@CListViewHost@@AEAAJXZ
    long ReloadImageServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeImageListsPerWorkArea@CListViewHost@@AEAAJXZ
    long ResizeImageListsPerWorkArea();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultImageList@CListViewHost@@AEAAJPEAU_IMAGELIST@@@Z
    long SetDefaultImageList(_IMAGELIST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconsOnlyPerWorkArea@CListViewHost@@AEAAJ_N@Z
    long SetIconsOnlyPerWorkArea(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageListForWorkArea@CListViewHost@@AEAAJ_KPEAU_IMAGELIST@@@Z
    long SetImageListForWorkArea(uint64_t, _IMAGELIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuForSpotlight@CListViewHost@@AEAAJHH@Z
    long ShowContextMenuForSpotlight(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SingleClickForSpotlight@CListViewHost@@AEAAXPEAUtagNMLISTVIEW@@@Z
    void SingleClickForSpotlight(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconSpacing@CListViewHost@@AEAAJXZ
    long UpdateIconSpacing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImagesPerWorkArea@CListViewHost@@AEAAJXZ
    long UpdateImagesPerWorkArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddColumnToListView@CListViewHost@@AEAAXAEBU_tagpropertykey@@II@Z
    void _AddColumnToListView(_tagpropertykey const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddGroupToListView@CListViewHost@@AEAAJH@Z
    long _AddGroupToListView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddGroupsToListView@CListViewHost@@AEAAJI@Z
    long _AddGroupsToListView(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustColumnHeaderForViewMode@CListViewHost@@AEAAXII@Z
    void _AdjustColumnHeaderForViewMode(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoSizeColumns@CListViewHost@@AEAAXXZ
    void _AutoSizeColumns();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckStateToItemFlags@CListViewHost@@AEAA?AW4LC_ITEM_FLAGS@@I@Z
    int _CheckStateToItemFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearArrangeFeedback@CListViewHost@@AEAAXXZ
    void _ClearArrangeFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearGroupsFromListView@CListViewHost@@AEAAXXZ
    void _ClearGroupsFromListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearVisibleItemCache@CListViewHost@@AEAAXXZ
    void _ClearVisibleItemCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CmpLeftToRightTopToBottom@CListViewHost@@CAHPEBH0_J@Z
    static int _CmpLeftToRightTopToBottom(int const *, int const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColumnIndexToOrder@CListViewHost@@AEAAHH@Z
    int _ColumnIndexToOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColumnOrderToIndex@CListViewHost@@AEAAHH@Z
    int _ColumnOrderToIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateGroupEntry@CListViewHost@@AEAAJPEAUIItem@@PEAUGROUP_ITEM_ENTRY@@@Z
    long _CreateGroupEntry(IItem *, GROUP_ITEM_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableGroupView@CListViewHost@@AEAAXXZ
    void _DisableGroupView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnClicked@CListViewHost@@AEAAXI@Z
    void _DoColumnClicked(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnHeaderMenu@CListViewHost@@AEAAXIPEBUtagPOINT@@@Z
    void _DoColumnHeaderMenu(unsigned int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnOverflowMenu@CListViewHost@@AEAAXIPEBUtagPOINT@@@Z
    void _DoColumnOverflowMenu(unsigned int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoColumnsMenu@CListViewHost@@AEAAXPEBUtagPOINT@@@Z
    void _DoColumnsMenu(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableGroupView@CListViewHost@@AEAAXXZ
    void _EnableGroupView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndListViewDoneEvent@CListViewHost@@AEAAXXZ
    void _EndListViewDoneEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRealizedBatch@CListViewHost@@AEAAJPEAV?$CDPARelease@UIItem@@V?$CTContainer_PolicyRelease@UIItem@@@@@@@Z
    long _EnsureRealizedBatch(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandOrCollapseGroup@CListViewHost@@AEAAXHH@Z
    void _ExpandOrCollapseGroup(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillColumnsFromPropString@CListViewHost@@AEAAJPEBGQEAIQEAHPEAI@Z
    long _FillColumnsFromPropString(unsigned short const *, unsigned int * const, int * const, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FocusOnSomething@CListViewHost@@AEAAXXZ
    void _FocusOnSomething();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColumnIconIndex@CListViewHost@@AEAAHAEBU_tagpropertykey@@@Z
    int _GetColumnIconIndex(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayInfo@CListViewHost@@AEAA_JPEAUtagLVDISPINFOW@@@Z
    int64_t _GetDisplayInfo(tagLVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDrawPropertyControlFlags@CListViewHost@@AEAAHAEBU_tagpropertykey@@@Z
    int _GetDrawPropertyControlFlags(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFocusedGroup@CListViewHost@@AEAAHXZ
    int _GetFocusedGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFormatDisplayFlagsForKey@CListViewHost@@AEAA?AW4PROPDESC_FORMAT_FLAGS@@AEBU_tagpropertykey@@@Z
    int _GetFormatDisplayFlagsForKey(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHost@CListViewHost@@AEAAJPEAPEAUIListControlHost@@@Z
    long _GetHost(IListControlHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIndexAndVersion@CListViewHost@@AEAAJPEAUIItem@@PEAI1@Z
    long _GetIndexAndVersion(IItem *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInfoTipText@CListViewHost@@AEAAJPEAUIItem@@PEBGPEAPEAG@Z
    long _GetInfoTipText(IItem *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItem@CListViewHost@@AEAAJIPEAPEAUIItem@@@Z
    long _GetItem(unsigned int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemArray@CListViewHost@@AEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@PEAV?$CDPARelease@UIItem@@V?$CTContainer_PolicyRelease@UIItem@@@@@@@Z
    long _GetItemArray(int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemAttributes@CListViewHost@@AEAAKPEAUIItem@@K@Z
    unsigned long _GetItemAttributes(IItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemCount@CListViewHost@@AEAAHW4tagLC_ITEM_SET_TYPE@@@Z
    int _GetItemCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemIndexArray@CListViewHost@@AEAAJW4tagLC_ITEM_SET_TYPE@@W4tagLC_ITEM_SET_ORDER@@PEAV?$CDSA@H@@@Z
    long _GetItemIndexArray(int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKeyForListViewColumn@CListViewHost@@AEAAJHPEAU_tagpropertykey@@@Z
    long _GetKeyForListViewColumn(int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListViewColumnCount@CListViewHost@@AEAAIXZ
    unsigned int _GetListViewColumnCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTilePropsForItem@CListViewHost@@AEAAJPEAUIItem@@PEAPEAG@Z
    long _GetTilePropsForItem(IItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleItem@CListViewHost@@AEAAJHPEAPEAUIItem@@@Z
    long _GetVisibleItem(int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVisibleSlotCount@CListViewHost@@AEAAHH@Z
    int _GetVisibleSlotCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleKeyDown@CListViewHost@@AEAAXPEBUtagLVKEYDOWN@@@Z
    void _HandleKeyDown(tagLVKEYDOWN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTab@CListViewHost@@AEAAJPEAUHWND__@@@Z
    long _HandleTab(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestItem@CListViewHost@@AEAAHPEBUtagPOINT@@H@Z
    int _HitTestItem(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IndexFromLCITEM@CListViewHost@@AEAAHAEBUtagLCITEM@@@Z
    int _IndexFromLCITEM(tagLCITEM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLVFooter@CListViewHost@@AEAAJPEAUIListViewFooter@@@Z
    long _InitLVFooter(IListViewFooter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertGroup@CListViewHost@@AEAAJIH@Z
    long _InsertGroup(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCollectionGrouped@CListViewHost@@AEAAHXZ
    int _IsCollectionGrouped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMultiValueGrouped@CListViewHost@@AEAAHXZ
    int _IsMultiValueGrouped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPositionedView@CListViewHost@@AEAAHXZ
    int _IsPositionedView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemIndexToLCItem@CListViewHost@@AEAAJHPEAUtagLCITEM@@@Z
    long _ItemIndexToLCItem(int, tagLCITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemStateToItemFlags@CListViewHost@@AEAA?AW4LC_ITEM_FLAGS@@I@Z
    int _ItemStateToItemFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemToLVITEMINDEX@CListViewHost@@AEAAJHPEAUtagLVITEMINDEX@@@Z
    long _ItemToLVITEMINDEX(int, tagLVITEMINDEX *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LCItemToItemIndex@CListViewHost@@AEAAHPEBUtagLCITEM@@@Z
    int _LCItemToItemIndex(tagLCITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapSubItemToKey@CListViewHost@@AEAAJHPEAU_tagpropertykey@@@Z
    long _MapSubItemToKey(int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginLabelEdit@CListViewHost@@AEAA_JPEBUtagLVDISPINFOW@@@Z
    int64_t _OnBeginLabelEdit(tagLVDISPINFOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginPropertyEdit@CListViewHost@@AEAAJHAEBU_tagpropertykey@@W4LV_EDIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    long _OnBeginPropertyEdit(int, _tagpropertykey const &, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCheckStateChange@CListViewHost@@AEAAXHPEAUtagNMLISTVIEW@@@Z
    void _OnCheckStateChange(int, tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClearSelection@CListViewHost@@AEAAXXZ
    void _OnClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCollectionChanged@CListViewHost@@AEAAXXZ
    void _OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnColumnOrderChanged@CListViewHost@@AEAAXXZ
    void _OnColumnOrderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDelayedGroupCollectionChanged@CListViewHost@@AEAAXXZ
    void _OnDelayedGroupCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEndLabelEdit@CListViewHost@@AEAA_JPEAUtagLVDISPINFOW@@@Z
    int64_t _OnEndLabelEdit(tagLVDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFolderFlagsChanged@CListViewHost@@AEAAXW4FOLDERFLAGS@@@Z
    void _OnFolderFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGetInfoTip@CListViewHost@@AEAAXPEAUtagNMLVGETINFOTIPW@@@Z
    void _OnGetInfoTip(tagNMLVGETINFOTIPW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHdrNotify@CListViewHost@@AEAA_JPEAUtagNMHEADERW@@@Z
    int64_t _OnHdrNotify(tagNMHEADERW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnIdealImageUnavailable@CListViewHost@@AEAA_JPEAUtagNMLVASYNCDRAWN@@@Z
    int64_t _OnIdealImageUnavailable(tagNMLVASYNCDRAWN *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInfoTipReady@CListViewHost@@AEAAXPEAUIItem@@PEBG@Z
    void _OnInfoTipReady(IItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLVNotify@CListViewHost@@AEAA_JPEAUtagNMLISTVIEW@@@Z
    int64_t _OnLVNotify(tagNMLISTVIEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CListViewHost@@AEAA_JPEAUtagNMHDR@@PEAH@Z
    int64_t _OnNotify(tagNMHDR *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPostViewModeSwitch@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@0@Z
    void _OnPostViewModeSwitch(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPreViewModeSwitch@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@0@Z
    void _OnPreViewModeSwitch(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnScrollTimerExpired@CListViewHost@@AEAAXXZ
    void _OnScrollTimerExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSelectionChange@CListViewHost@@AEAAXHII@Z
    void _OnSelectionChange(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewModeAndImageSizeChanged@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@I@Z
    void _OnViewModeAndImageSizeChanged(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnVisibleColumnsChanged@CListViewHost@@AEAAXXZ
    void _OnVisibleColumnsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnWinIniChange@CListViewHost@@AEAAX_KPEBG@Z
    void _OnWinIniChange(uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrimeCollection@CListViewHost@@AEAAJXZ
    long _PrimeCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrimeGroupCollection@CListViewHost@@AEAAJI@Z
    long _PrimeGroupCollection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropVariantToText@CListViewHost@@AEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@PEAGH@Z
    long _PropVariantToText(_tagpropertykey const &, tagPROPVARIANT const &, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneVirtualizedItems@CListViewHost@@AEAAXXZ
    void _PruneVirtualizedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RedrawItem@CListViewHost@@AEAAXPEAUIItem@@@Z
    void _RedrawItem(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCurrentCollection@CListViewHost@@AEAAXXZ
    void _ReleaseCurrentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseImageServices@CListViewHost@@AEAAXXZ
    void _ReleaseImageServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveGroup@CListViewHost@@AEAAJH@Z
    long _RemoveGroup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetColumnFormats@CListViewHost@@AEAAXKKH@Z
    void _SetColumnFormats(unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIconSizeInternal@CListViewHost@@AEAAXI@Z
    void _SetIconSizeInternal(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemPosition@CListViewHost@@AEAAXHHH@Z
    void _SetItemPosition(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetListViewAccName@CListViewHost@@AEAAXXZ
    void _SetListViewAccName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRedraw@CListViewHost@@AEAAXH@Z
    void _SetRedraw(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTileViewInfo@CListViewHost@@AEAAXXZ
    void _SetTileViewInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewMode@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@@Z
    void _SetViewMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowTryHarder@CListViewHost@@AEAAJPEAUIListViewFooter@@PEAUIObjectCollection@@I@Z
    long _ShowTryHarder(IListViewFooter *, IObjectCollection *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartListViewDoneEvent@CListViewHost@@AEAAXXZ
    void _StartListViewDoneEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToViewModeAndIconSizeWorker@CListViewHost@@AEAAXW4FOLDERVIEWMODE@@0I@Z
    void _SwitchToViewModeAndIconSizeWorker(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncSelectionIndices@CListViewHost@@AEAAXXZ
    void _SyncSelectionIndices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterViewSettings@CListViewHost@@AEAAXXZ
    void _UnregisterViewSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAllGroupUI@CListViewHost@@AEAAXH@Z
    void _UpdateAllGroupUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateArrangeFeedback@CListViewHost@@AEAAXXZ
    void _UpdateArrangeFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCachedItems@CListViewHost@@AEAAJHH@Z
    long _UpdateCachedItems(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFilterColumnUI@CListViewHost@@AEAAXXZ
    void _UpdateFilterColumnUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGroupUI@CListViewHost@@AEAAXHH@Z
    void _UpdateGroupUI(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateListViewItemCount@CListViewHost@@AEAAXIW4UPDATEITEMS_FLAGS@@@Z
    void _UpdateListViewItemCount(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSelectionMode@CListViewHost@@AEAAXXZ
    void _UpdateSelectionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateUnderlines@CListViewHost@@AEAAXXZ
    void _UpdateUnderlines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewSubclassWndProc@CListViewHost@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _ViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearGroupItemEntry@CListViewHost@@CAHPEAUGROUP_ITEM_ENTRY@@PEAX@Z
    static int s_ClearGroupItemEntry(GROUP_ITEM_ENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearIndexedViewItemEntry@CListViewHost@@CAXPEAUINDEXED_VIEW_ITEM_ENTRY@@@Z
    static void s_ClearIndexedViewItemEntry(INDEXED_VIEW_ITEM_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearViewItemEntry@CListViewHost@@CAHPEAUVIEW_ITEM_ENTRY@@PEAX@Z
    static int s_ClearViewItemEntry(VIEW_ITEM_ENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HeaderSubclassWndProc@CListViewHost@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_HeaderSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ListViewSubclassWndProc@CListViewHost@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ListViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ViewSubclassWndProc@CListViewHost@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_ViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CListViewHost@@EEAA@XZ
    virtual ~CListViewHost();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `CListViewHost` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Init` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnCacheHint` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCachedItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `s_ClearViewItemEntry` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnInfoTipReady` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetInfoTipText` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetItemPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_IsCollectionGrouped` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetVisibleItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvalidateTryHarder` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetItemPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetDisplayInfo` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `s_ListViewSubclassWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnClearSelection` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnItemsDeleted` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnImageListChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_PruneVirtualizedItems` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnItemsAdded` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SyncSelectionIndices` | `void` | `Method` | `Pdb` | No (PDB) |
| `Destroy` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetPhysicalIconSizeAdjustedForDPI` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `ReloadImageServices` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReleaseImageServices` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResizeImageListsPerWorkArea` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetIconsOnlyPerWorkArea` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateImagesPerWorkArea` | `long` | `Method` | `Pdb` | No (PDB) |
| `PrepareForBatchPositionChanges` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsDesktopMultipleWorkAreasAware` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_UnregisterViewSettings` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReleaseCurrentCollection` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnSettingsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `ItemToListViewIndex` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ItemIndexToLCItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetItemInGroup` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnCollectionChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnCollectionChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AddGroupsToListView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateListViewItemCount` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ClearVisibleItemCache` | `void` | `Method` | `Pdb` | No (PDB) |
| `HitTestItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HitTestItem` | `int` | `Method` | `Pdb` | No (PDB) |
| `s_ClearIndexedViewItemEntry` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DisableGroupView` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnViewModeAndImageSizeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_StartListViewDoneEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SwitchToViewModeAndIconSizeWorker` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetItems` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_GetItemArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetItemIndexArray` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetItemCount` | `int` | `Method` | `Pdb` | No (PDB) |
| `_EnsureRealizedBatch` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetItemCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `s_HeaderSubclassWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `BeginSubItemEdit` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetSubItemControl` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_MapSubItemToKey` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ColumnIndexToOrder` | `int` | `Method` | `Pdb` | No (PDB) |
| `_PropVariantToText` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetDPIForPoint` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `PrepareImageManagersPerWorkArea` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsSameAsPreviousWorkAreas` | `bool const` | `Accessor` | `Pdb` | No (PDB) |
| `GetWorkAreasWithDPI` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetImageManagerForPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetImageManagerForWorkArea` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `s_ViewSubclassWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_ViewSubclassWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_GetFormatDisplayFlagsForKey` | `enum PROPDESC_FORMAT_FLAGS` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `TranslateAcceleratorIO` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnLVNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_RedrawItem` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnItemChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetItemAttributes` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_AddColumnToListView` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetItemPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_IndexFromLCITEM` | `int` | `Method` | `Pdb` | No (PDB) |
| `_UpdateArrangeFeedback` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnItemChanging` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `_OnIdealImageUnavailable` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `GetColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTransparentBackground` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_EndListViewDoneEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnGetInfoTip` | `void` | `Method` | `Pdb` | No (PDB) |
| `FinishAndSaveBatchPositionChanges` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ItemToLVITEMINDEX` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetImageListForWorkArea` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `DragSelectItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_LCItemToItemIndex` | `int` | `Method` | `Pdb` | No (PDB) |
| `_ItemStateToItemFlags` | `enum LC_ITEM_FLAGS` | `Method` | `Pdb` | No (PDB) |
| `_PrimeCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetVisibleSlotCount` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetItemPosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AdjustColumnHeaderForViewMode` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AutoSizeColumns` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetColumnFormats` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnVisibleColumnsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetListViewColumnCount` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `MapPoint` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetHost` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetItemCollection` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RefreshSettings` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetDefaultImageList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemGroupCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnSettingsSave` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnSettingsLoad` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetTransparentBackground` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_FocusOnSomething` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnPreViewModeSwitch` | `void` | `Method` | `Pdb` | No (PDB) |
| `PositionSelectedItemsFromMove` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ClearArrangeFeedback` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateSelectionMode` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetTheme` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_HandleKeyDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_OnEndLabelEdit` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_UpdateUnderlines` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnGetCountDone` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetFocusedGroup` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `Cancel` | `long` | `Method` | `Pdb` | Yes |
| `EndSubItemEdit` | `long` | `Method` | `Pdb` | Yes |
| `OnCancelled` | `long` | `Method` | `Pdb` | Yes |
| `OnPrepareDone` | `long` | `Method` | `Pdb` | Yes |
| `OnUniqueLeafCountChanged` | `long` | `Method` | `Pdb` | Yes |
| `RequiresGetCountTask` | `long` | `Method` | `Pdb` | Yes |
| `EnableAlphaShadow` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetInnerFocus` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_ClearGroupsFromListView` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `MergeSelectionContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetItemPositionInCollection` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetInsertMark` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CreateControl` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetWorkAreasWithDPI` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateIconSpacing` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnFolderFlagsChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnSelectionChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetListViewAccName` | `void` | `Method` | `Pdb` | No (PDB) |
| `PlaceItemWithLogicalDisplacement` | `long` | `Method` | `Pdb` | No (PDB) |
| `_PrimeGroupCollection` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetScrollingWindow` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_EnableGroupView` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsMultiValueGrouped` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SetIconSizeInternal` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ColumnOrderToIndex` | `int` | `Method` | `Pdb` | No (PDB) |
| `ClearDesktopSorting` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetRedraw` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasFocusIO` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ContextSensitiveHelp` | `long` | `Method` | `Pdb` | Yes |
| `EndGroupEdit` | `long` | `Method` | `Pdb` | Yes |
| `GetClassID` | `long` | `Accessor` | `Pdb` | Yes |
| `GetFont` | `long` | `Accessor` | `Pdb` | Yes |
| `GetItemHeight` | `long` | `Accessor` | `Pdb` | Yes |
| `OnCancelled` | `long` | `Method` | `Pdb` | Yes |
| `OnExplorerWindowReady` | `long` | `Method` | `Pdb` | Yes |
| `OnViewChanging` | `long` | `Method` | `Pdb` | Yes |
| `SetFont` | `long` | `Accessor` | `Pdb` | Yes |
| `SetItemHeight` | `long` | `Accessor` | `Pdb` | Yes |
| `UIActivateIO` | `long` | `Method` | `Pdb` | Yes |
| `BeginGroupEdit` | `long` | `Method` | `Pdb` | Yes |
| `~CListViewHost` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
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
| `AdviseOnImagesChangedPerWorkAreas` | `long` | `Method` | `Pdb` | No (PDB) |
| `AutoSizeColumn` | `long` | `Method` | `Pdb` | No (PDB) |
| `CollapseAllGroups` | `long` | `Method` | `Pdb` | No (PDB) |
| `DismissEdit` | `long` | `Method` | `Pdb` | No (PDB) |
| `EditItemLabel` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureVisible` | `long` | `Method` | `Pdb` | No (PDB) |
| `ExpandAllGroups` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindItemAndIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFocusedItem` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIDList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetInsertMarkRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemGroup` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemSpacing` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNextIndex` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSubItemTitle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetVisibleItemCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GhostSelectedItems` | `long` | `Method` | `Pdb` | No (PDB) |
| `HitTestInsertMark` | `long` | `Method` | `Pdb` | No (PDB) |
| `HitTestItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvalidateEmptyText` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvokeSelectionContextMenu` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsDesktopSpotlightIcon` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsDesktopSpotlightIcon` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsDesktopSpotlightIcon` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `MapRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnButtonClicked` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnDPIChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnDestroyButton` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnInvokeVerb` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnItemMoved` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnItemTranslated` | `long` | `Method` | `Pdb` | No (PDB) |
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
| `QueryObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `RedrawItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `RedrawNow` | `void` | `Method` | `Pdb` | No (PDB) |
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
| `Select` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetIDList` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetInsertMark` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetItemState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTileWidth` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetWatermark` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShowContextMenuForSpotlight` | `long` | `Method` | `Pdb` | No (PDB) |
| `SingleClickForSpotlight` | `void` | `Method` | `Pdb` | No (PDB) |
| `_AddGroupToListView` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CheckStateToItemFlags` | `enum LC_ITEM_FLAGS` | `Method` | `Pdb` | No (PDB) |
| `_CmpLeftToRightTopToBottom` | `int` | `Method` | `Pdb` | No (PDB) |
| `_CreateGroupEntry` | `long` | `Method` | `Pdb` | No (PDB) |
| `_DoColumnClicked` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoColumnHeaderMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoColumnOverflowMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_DoColumnsMenu` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ExpandOrCollapseGroup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_FillColumnsFromPropString` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetColumnIconIndex` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetDrawPropertyControlFlags` | `int` | `Method` | `Pdb` | No (PDB) |
| `_GetIndexAndVersion` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetKeyForListViewColumn` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetTilePropsForItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HandleTab` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InitLVFooter` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InsertGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_IsPositionedView` | `int` | `Method` | `Pdb` | No (PDB) |
| `_OnBeginLabelEdit` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnBeginPropertyEdit` | `long` | `Method` | `Pdb` | No (PDB) |
| `_OnCheckStateChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnColumnOrderChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnDelayedGroupCollectionChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnHdrNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_OnPostViewModeSwitch` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnScrollTimerExpired` | `void` | `Method` | `Pdb` | No (PDB) |
| `_OnWinIniChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RemoveGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetTileViewInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetViewMode` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ShowTryHarder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateAllGroupUI` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateFilterColumnUI` | `void` | `Method` | `Pdb` | No (PDB) |
| `_UpdateGroupUI` | `void` | `Method` | `Pdb` | No (PDB) |
| `s_ClearGroupItemEntry` | `int` | `Method` | `Pdb` | No (PDB) |
