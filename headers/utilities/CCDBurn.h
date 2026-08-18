#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 240 member(s).
class CCDBurn {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPages@CCDBurn@@UEAAJP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPages(int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurn@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowAutoPlay@CCDBurn@@UEAAJPEBGK0K@Z
    virtual long AllowAutoPlay(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Bind@CCDBurn@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long Bind(_ITEMIDLIST_ABSOLUTE const *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Burn@CCDBurn@@UEAAJPEAUHWND__@@@Z
    virtual long Burn(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CCDBurn@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CCDBurn@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CCDBurn@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriveSupportsBurning@CCDBurn@@UEAAJH@Z
    virtual long DriveSupportsBurning(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CCDBurn@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CCDBurn@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CCDBurn@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCancelledPage@CCDBurn@@UEAAJPEAPEAU_PSP@@@Z
    virtual long GetCancelledPage(_PSP * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CCDBurn@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@CCDBurn@@UEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentState@CCDBurn@@UEAAJPEAH0@Z
    virtual long GetContentState(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFile@CCDBurn@@UEAAJPEAPEAG@Z
    virtual long GetCurFile(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextPage@CCDBurn@@UEAAJPEAPEAU_PSP@@@Z
    virtual long GetNextPage(_PSP * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousPage@CCDBurn@@UEAAJPEAPEAU_PSP@@@Z
    virtual long GetPreviousPage(_PSP * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecorderDriveLetter@CCDBurn@@UEAAJPEAGI@Z
    virtual long GetRecorderDriveLetter(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpace@CCDBurn@@UEAAJPEA_K0@Z
    virtual long GetSpace(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRecordableDrive@CCDBurn@@UEAAJPEAH@Z
    virtual long HasRecordableDrive(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CCDBurn@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCDBurn@@UEAAJH@Z
    virtual long Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCDBurn@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProgressDialog@CCDBurn@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CCDBurn@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CCDBurn@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWizardUp@CCDBurn@@UEAAJXZ
    virtual long IsWizardUp();
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CCDBurn@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?Load@CCDBurn@@UEAAJPEBGK@Z
    virtual long Load(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CCDBurn@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBurnUpdate@CCDBurn@@QEAAJPEAUIDispatch@@0@Z
    long OnBurnUpdate(IDispatch *, IDispatch *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandleSignaled@CCDBurn@@UEAAJPEAXIIPEAPEAXPEAI@Z
    virtual long OnHandleSignaled(void *, unsigned int, unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CCDBurn@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurn@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CCDBurn@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurn@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ReplacePage@CCDBurn@@UEAAJIP6AHPEAU_PSP@@_J@Z1@Z
    virtual long ReplacePage(unsigned int, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CCDBurn@@UEAAJPEBGH@Z
    virtual long Save(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CCDBurn@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveCompleted@CCDBurn@@UEAAJPEBG@Z
    virtual long SaveCompleted(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CCDBurn@@UEAAJIPEAPEAXPEAI@Z
    virtual long Start(unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@CCDBurn@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ChangeFilesDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ChangeFilesDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DoneDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DoneDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EarlyExitDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_EarlyExitDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HDFullDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_HDFullDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NameSpeedDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_NameSpeedDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NoFilesDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_NoFilesDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProgressDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ProgressDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_StartEraseDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_StartEraseDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WaitForMediaDlgProc@CCDBurn@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WaitForMediaDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCDBurn@@AEAA@XZ
    CCDBurn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddExtensionToDPA@CCDBurn@@AEAAXPEAUIWizardExtension@@PEAPEAU_PSP@@IPEAI@Z
    void _AddExtensionToDPA(IWizardExtension *, _PSP * *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddStagedFilesToJolietImage@CCDBurn@@AEAAJPEAUIFileSystemImage@@@Z
    long _AddStagedFilesToJolietImage(IFileSystemImage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddStorageToJolietImage@CCDBurn@@AEAAJPEAUIFileSystemImage@@PEAUIFsiDirectoryItem@@PEAUIStorage@@PEBGI@Z
    long _AddStorageToJolietImage(IFileSystemImage *, IFsiDirectoryItem *, IStorage *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddStreamToJolietImage@CCDBurn@@AEAAJPEAUIFileSystemImage@@PEAUIFsiDirectoryItem@@PEAUIStorage@@UtagSTATSTG@@PEBG@Z
    long _AddStreamToJolietImage(IFileSystemImage *, IFsiDirectoryItem *, IStorage *, tagSTATSTG, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Balloon@CCDBurn@@CAJXZ
    static long _Balloon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BurnJolietImage@CCDBurn@@AEAAJPEAUIFileSystemImage@@PEAUIDiscFormat2Data@@@Z
    long _BurnJolietImage(IFileSystemImage *, IDiscFormat2Data *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BurnThread@CCDBurn@@CAKPEAX@Z
    static unsigned long _BurnThread(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CachedStagingInfoClearDrive@CCDBurn@@CAXH@Z
    static void _CachedStagingInfoClearDrive(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeFilesDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _ChangeFilesDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUp@CCDBurn@@AEAAJPEAU_CMINVOKECOMMANDINFO@@H@Z
    long _CleanUp(_CMINVOKECOMMANDINFO *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseBurnerView@CCDBurn@@AEAAXXZ
    void _CloseBurnerView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConstructTimeString@CCDBurn@@AEAAXKPEAGI@Z
    void _ConstructTimeString(unsigned long, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDefaultPropBag@CCDBurn@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _CreateDefaultPropBag(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDirInJolietImage@CCDBurn@@AEAAJPEAUIFileSystemImage@@PEAUIFsiDirectoryItem@@UtagSTATSTG@@PEAPEAU3@@Z
    long _CreateDirInJolietImage(IFileSystemImage *, IFsiDirectoryItem *, tagSTATSTG, IFsiDirectoryItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDiscMaster@CCDBurn@@CAJPEAPEAUIDiscMaster2@@@Z
    static long _CreateDiscMaster(IDiscMaster2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDiscRecorder@CCDBurn@@CAJQEAGPEAPEAUIDiscRecorder2@@@Z
    static long _CreateDiscRecorder(unsigned short * const, IDiscRecorder2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFilesystemImage@CCDBurn@@AEAAJPEAUIDiscFormat2Data@@JPEAPEAUIFileSystemImage@@@Z
    long _CreateFilesystemImage(IDiscFormat2Data *, long, IFileSystemImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateLocalizationDesktopIni@CCDBurn@@CAJPEBG@Z
    static long _CreateLocalizationDesktopIni(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStagingFolderIfNotExist@CCDBurn@@AEAAJXZ
    long _CreateStagingFolderIfNotExist();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DiscHasFiles@CCDBurn@@AEAAHXZ
    int _DiscHasFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayMediaErrorOnNext@CCDBurn@@AEAAXPEAUHWND__@@II@Z
    void _DisplayMediaErrorOnNext(HWND__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoDrop@CCDBurn@@AEAAJPEAUIDataObject@@H@Z
    long _DoDrop(IDataObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoDropOperation@CCDBurn@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@H@Z
    long _DoDropOperation(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoneDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _DoneDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DriveAndMediaSupportErase@CCDBurn@@CAJPEAUIDiscRecorder2@@PEAH@Z
    static long _DriveAndMediaSupportErase(IDiscRecorder2*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DumpDiscInfo@CCDBurn@@CAJPEBG@Z
    static long _DumpDiscInfo(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EjectCurrentMedia@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _EjectCurrentMedia(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDropTarget@CCDBurn@@AEAAJXZ
    long _EnsureDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLocalizationDesktopInis@CCDBurn@@CAXXZ
    static void _EnsureLocalizationDesktopInis();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStagingFolder@CCDBurn@@CAHHPEBGPEAGK@Z
    static int _EnsureStagingFolder(int, unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUserIntentForDisc@CCDBurn@@CA?AW4DialogResult@CPrepareDiscDialog@@PEAUHWND__@@HPEBGH@Z
    static int _EnsureUserIntentForDisc(HWND__*, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterExclusiveBurning@CCDBurn@@AEAAHXZ
    int _EnterExclusiveBurning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EraseDisc@CCDBurn@@AEAAJPEAUIDiscRecorder2@@@Z
    long _EraseDisc(IDiscRecorder2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EraseThread@CCDBurn@@CAKPEAX@Z
    static unsigned long _EraseThread(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FetchRewritableFreeBlocksWorkitem@CCDBurn@@CAKPEAX@Z
    static unsigned long _FetchRewritableFreeBlocksWorkitem(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillExtensionDPA@CCDBurn@@AEAAJPEAPEAU_PSP@@IPEAI@Z
    long _FillExtensionDPA(_PSP * *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeDropParams@CCDBurn@@CAXPEAUCDDROPPARAMS@@@Z
    static void _FreeDropParams(CDDROPPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBurnHR@CCDBurn@@AEAAJXZ
    long _GetBurnHR();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBurnStagingPath@CCDBurn@@CAJPEBGPEAGI@Z
    static long _GetBurnStagingPath(unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBurnXFactor@CCDBurn@@CAXJJPEAJ0@Z
    static void _GetBurnXFactor(long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCDFolder@CCDBurn@@AEAAJPEAUIBindCtx@@PEBU_ITEMIDLIST_ABSOLUTE@@AEBU_GUID@@PEAPEAX@Z
    long _GetCDFolder(IBindCtx *, _ITEMIDLIST_ABSOLUTE const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedDriveInfo@CCDBurn@@CAJPEBGPEAKPEAH2@Z
    static long _GetCachedDriveInfo(unsigned short const *, unsigned long *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedDriveInfoForDriveIndex@CCDBurn@@CAJHPEAGKPEAKPEAH2@Z
    static long _GetCachedDriveInfoForDriveIndex(int, unsigned short *, unsigned long, unsigned long *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedDriveInfoKey@CCDBurn@@CAJPEBGPEAPEAUHKEY__@@H@Z
    static long _GetCachedDriveInfoKey(unsigned short const *, HKEY__* *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedMediaInfo@CCDBurn@@CAJPEBG0PEAXK@Z
    static long _GetCachedMediaInfo(unsigned short const *, unsigned short const *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedMediaInfoKey@CCDBurn@@CAJPEBGPEAPEAUHKEY__@@H@Z
    static long _GetCachedMediaInfoKey(unsigned short const *, HKEY__* *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedMediaInfoKeyPath@CCDBurn@@CAJPEBGPEAGK@Z
    static long _GetCachedMediaInfoKeyPath(unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentStashDrive@CCDBurn@@CAJPEAGIH@Z
    static long _GetCurrentStashDrive(unsigned short *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentStashFolder@CCDBurn@@CAJPEAGIH@Z
    static long _GetCurrentStashFolder(unsigned short *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentWriteSpeeds@CCDBurn@@AEAAJPEAPEAUtagSAFEARRAY@@@Z
    long _GetCurrentWriteSpeeds(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultBurnVolumeName@CCDBurn@@CAJPEAGI@Z
    static long _GetDefaultBurnVolumeName(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDiscInfoUsingFilesystem@CCDBurn@@CAJPEBGPEA_K1PEAH2PEAGK@Z
    static long _GetDiscInfoUsingFilesystem(unsigned short const *, uint64_t *, uint64_t *, int *, int *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDiscRecorderForDrive@CCDBurn@@CAJPEAUIDiscMaster2@@PEBGPEAPEAUIDiscRecorder2@@@Z
    static long _GetDiscRecorderForDrive(IDiscMaster2*, unsigned short const *, IDiscRecorder2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDiscRecorderInfo@CCDBurn@@CAJPEAUIDiscRecorder2@@PEAKPEAH@Z
    static long _GetDiscRecorderInfo(IDiscRecorder2*, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDiscRecorderVolumeName@CCDBurn@@CAJPEAUIDiscRecorder2@@PEAGI@Z
    static long _GetDiscRecorderVolumeName(IDiscRecorder2*, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveIndexForVolumeName@CCDBurn@@CAJPEBGPEAH@Z
    static long _GetDriveIndexForVolumeName(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveLetterBasedStagingPath@CCDBurn@@CAHHPEAGK@Z
    static int _GetDriveLetterBasedStagingPath(int, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEjectSetting@CCDBurn@@AEAAJPEAH@Z
    long _GetEjectSetting(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExistingPrepareDiscInfo@CCDBurn@@CAHPEBGPEAGKPEAH@Z
    static int _GetExistingPrepareDiscInfo(unsigned short const *, unsigned short *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExtPageFromPropBag@CCDBurn@@AEAAJHPEAPEAU_PSP@@@Z
    long _GetExtPageFromPropBag(int, _PSP * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIDListForDriveIndex@CCDBurn@@CAJHPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    static long _GetIDListForDriveIndex(int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIDListForStagingFolder@CCDBurn@@CAJPEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    static long _GetIDListForStagingFolder(unsigned short const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIDListForVolumeName@CCDBurn@@CAJPEBGPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    static long _GetIDListForVolumeName(unsigned short const *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLowerSpeedString@CCDBurn@@AEAAPEAGHPEBG@Z
    unsigned short * _GetLowerSpeedString(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextDiscRecorder@CCDBurn@@CAJPEAUIEnumVARIANT@@PEAPEAUIDiscRecorder2@@@Z
    static long _GetNextDiscRecorder(IEnumVARIANT *, IDiscRecorder2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStagingAreaLocalizedResource@CCDBurn@@CAJPEAGK@Z
    static long _GetStagingAreaLocalizedResource(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskInfo@CCDBurn@@AEAAXHPEAH000@Z
    void _GetTaskInfo(int, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVolumeLabel@CCDBurn@@CAXPEBGHPEAG_K@Z
    static void _GetVolumeLabel(unsigned short const *, int, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetXFactorString@CCDBurn@@CAJJJPEAGI@Z
    static long _GetXFactorString(long, long, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HDFullDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _HDFullDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HDFullSetText@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _HDFullSetText(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleApply@CCDBurn@@AEAAHPEAUHWND__@@@Z
    int _HandleApply(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleBookkeeping@CCDBurn@@CAXPEBGH@Z
    static void _HandleBookkeeping(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasFiles@CCDBurn@@CAHPEBU_ITEMIDLIST_ABSOLUTE@@H@Z
    static int _HasFiles(_ITEMIDLIST_ABSOLUTE const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitAutoCloseSelection@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _InitAutoCloseSelection(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitProgressPage@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _InitProgressPage(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitVolumeLabelEdit@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _InitVolumeLabelEdit(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitWriteSpeedSelection@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _InitWriteSpeedSelection(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBurningNow@CCDBurn@@CAHXZ
    static int _IsBurningNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDefaultBurnerValid@CCDBurn@@CAHXZ
    static int _IsDefaultBurnerValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDefaultRecorder@CCDBurn@@CAHPEBG@Z
    static int _IsDefaultRecorder(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsIMAPISupported@CCDBurn@@CAHXZ
    static int _IsIMAPISupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMediaBlankFromIMAPI@CCDBurn@@CAJPEAUIDiscFormat2Data@@PEAH1@Z
    static long _IsMediaBlankFromIMAPI(IDiscFormat2Data *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMediaSupportedForImapiOperation@CCDBurn@@CAJPEAUIDiscFormat2@@PEAUIDiscRecorder2@@PEAH@Z
    static long _IsMediaSupportedForImapiOperation(IDiscFormat2*, IDiscRecorder2*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMediaValidForBurning@CCDBurn@@CAXPEBGPEAH1@Z
    static void _IsMediaValidForBurning(unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRecorderSupportedForImapiOperation@CCDBurn@@CAJPEAUIDiscFormat2@@PEAUIDiscRecorder2@@PEAH@Z
    static long _IsRecorderSupportedForImapiOperation(IDiscFormat2*, IDiscRecorder2*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsStagingPathOK@CCDBurn@@CAHPEBG0@Z
    static int _IsStagingPathOK(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockCurrentDrive@CCDBurn@@AEAAJHH@Z
    long _LockCurrentDrive(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockDrive@CCDBurn@@CAHPEBGH@Z
    static int _LockDrive(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MarkDirty@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _MarkDirty(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NameSpeedDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _NameSpeedDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NoFilesDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _NoFilesDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyThreadProc@CCDBurn@@CAKPEAX@Z
    static unsigned long _NotifyThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetActiveWaitForMedia@CCDBurn@@AEAAXPEAUHWND__@@0@Z
    void _OnSetActiveWaitForMedia(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostOperation@CCDBurn@@AEAAJPEAUHWND__@@@Z
    long _PostOperation(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProgressDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _ProgressDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneExts@CCDBurn@@AEAAXXZ
    void _PruneExts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneRemovedDevices@CCDBurn@@CAXXZ
    static void _PruneRemovedDevices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordAutoCloseSelection@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _RecordAutoCloseSelection(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordWriteSpeedSelection@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _RecordWriteSpeedSelection(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordingPrshtInit@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _RecordingPrshtInit(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterAutoplayCanceller@CCDBurn@@AEAAXXZ
    void _RegisterAutoplayCanceller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCachedDriveInfo@CCDBurn@@CAXXZ
    static void _RemoveCachedDriveInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReparsePidl@CCDBurn@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _ReparsePidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCachedDriveInfo@CCDBurn@@CAJPEBGKH0@Z
    static long _SetCachedDriveInfo(unsigned short const *, unsigned long, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCachedStagingInfo@CCDBurn@@CAXPEBGH@Z
    static void _SetCachedStagingInfo(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCurrentStashFolderOnDrive@CCDBurn@@CAJPEBG@Z
    static long _SetCurrentStashFolderOnDrive(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultBurnVolumeName@CCDBurn@@CAJPEBGH@Z
    static long _SetDefaultBurnVolumeName(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDiscFullError@CCDBurn@@AEAAJ_K0@Z
    long _SetDiscFullError(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExtPageFromPropBag@CCDBurn@@AEAAXPEAUHWND__@@H@Z
    void _SetExtPageFromPropBag(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNextPage@CCDBurn@@AEAAXPEAUHWND__@@H@Z
    void _SetNextPage(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProgress@CCDBurn@@AEAAXK@Z
    void _SetProgress(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStatus@CCDBurn@@AEAAXI@Z
    void _SetStatus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTimeRemaining@CCDBurn@@AEAAXJ@Z
    void _SetTimeRemaining(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupFirstPage@CCDBurn@@AEAAXPEAUHWND__@@H@Z
    void _SetupFirstPage(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideDefaultBurnerInfo@CCDBurn@@CAXH@Z
    static void _ShowHideDefaultBurnerInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowRecordingGlobalSettingsDialog@CCDBurn@@AEAAXPEAUHWND__@@@Z
    void _ShowRecordingGlobalSettingsDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowWizard@CCDBurn@@AEAAJXZ
    long _ShowWizard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowWizardOnSeparateThread@CCDBurn@@AEAAJXZ
    long _ShowWizardOnSeparateThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StagingAreaHasFiles@CCDBurn@@CAHPEBG@Z
    static int _StagingAreaHasFiles(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartEraseDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _StartEraseDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreDiscInfo@CCDBurn@@CAJPEBG0HH@Z
    static long _StoreDiscInfo(unsigned short const *, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreDiscInfoFromIMAPI@CCDBurn@@CAXPEAUHKEY__@@PEAUIDiscRecorder2@@HPEBGPEAHPEAK@Z
    static void _StoreDiscInfoFromIMAPI(HKEY__*, IDiscRecorder2*, int, unsigned short const *, int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TallyStagedFiles@CCDBurn@@AEAAJXZ
    long _TallyStagedFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryCLSID@CCDBurn@@CAJAEBU_GUID@@W4EXTCOCREATEFLAGS@@H0PEAPEAX@Z
    static long _TryCLSID(_GUID const &, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryKey@CCDBurn@@CAJPEBGHAEBU_GUID@@PEAPEAX@Z
    static long _TryKey(unsigned short const *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnlockAllDrives@CCDBurn@@CAXXZ
    static void _UnlockAllDrives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterAutoplayCanceller@CCDBurn@@AEAAXXZ
    void _UnregisterAutoplayCanceller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDiscInfo@CCDBurn@@CAXPEBGHH@Z
    static void _UpdateDiscInfo(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateDiscWaitForMedia@CCDBurn@@AEAAJPEAUHWND__@@PEAI1@Z
    long _ValidateDiscWaitForMedia(HWND__*, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WaitForMediaDlgProc@CCDBurn@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _WaitForMediaDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WarnIfFinalSessionOnBlankDisc@CCDBurn@@AEAAJ_K@Z
    long _WarnIfFinalSessionOnBlankDisc(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WizSubclassProc@CCDBurn@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t _WizSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WizardThreadProc@CCDBurn@@AEAAJXZ
    long _WizardThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WizardThreadWrapper@CCDBurn@@CAKPEAX@Z
    static unsigned long _WizardThreadWrapper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ConfirmDialogProc@CCDBurn@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ConfirmDialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DlgProc@CCDBurn@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DropThread@CCDBurn@@CAKPEAX@Z
    static unsigned long s_DropThread(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCDBurn@CCDBurn@@CAPEAV1@PEAUHWND__@@I_J@Z
    static CCDBurn * s_GetCDBurn(HWND__*, unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReplaceFilenameDlgProc@CCDBurn@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ReplaceFilenameDlgProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCDBurn@@EEAA@XZ
    virtual ~CCDBurn();
};
