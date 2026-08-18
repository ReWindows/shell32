#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 117 member(s).
class CMountPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppAllowsAutoRun@CMountPoint@@QEAAHPEAUHWND__@@K@Z
    int AppAllowsAutoRun(HWND__*, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?BitLockerCanChangePassphraseByProxy@CMountPoint@@UEAAHXZ
    virtual int BitLockerCanChangePassphraseByProxy();
    // Category: Method | Source: PE Export
    // Symbol: ?BitLockerCanChangePin@CMountPoint@@UEAAHXZ
    virtual int BitLockerCanChangePin();
    // Category: Method | Source: PE Export
    // Symbol: ?BitLockerRequiresAdmin@CMountPoint@@UEAAHXZ
    virtual int BitLockerRequiresAdmin();
    // Category: Method | Source: PE Export
    // Symbol: ?CloseSession@CMountPoint@@UEAAXXZ
    virtual void CloseSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAutorun@CMountPoint@@SAXPEBGK@Z
    static void DoAutorun(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriveLettersAreSame@CMountPoint@@SAHPEBG0@Z
    static int DriveLettersAreSame(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Eject@CMountPoint@@UEAAJPEAUHWND__@@@Z
    virtual long Eject(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EjectAsync@CMountPoint@@UEAAJPEAUHWND__@@@Z
    virtual long EjectAsync(HWND__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBitLockerState@CMountPoint@@UEAAHXZ
    virtual int GetBitLockerState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCDInfo@CMountPoint@@UEAAJPEAK0@Z
    virtual long GetCDInfo(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClusterSize@CMountPoint@@QEAAKXZ
    unsigned long GetClusterSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CMountPoint@@QEAAJPEAGK@Z
    long GetDisplayName(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalMountPoint@CMountPoint@@QEAAJPEAPEAVCMtPtLocal@@@Z
    long GetLocalMountPoint(CMtPtLocal * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMountPoint@CMountPoint@@SAJHPEAPEAV1@@Z
    static long GetMountPoint(int, CMountPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMountPoint@CMountPoint@@SAJPEBGW4AddToDriveLetterCache@@PEAPEAV1@@Z
    static long GetMountPoint(unsigned short const *, int, CMountPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMountPoint@CMountPoint@@SAJPEAUIShellItem@@PEAPEAV1@@Z
    static long GetMountPoint(IShellItem *, CMountPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimulatedMountPointFromVolumeGuid@CMountPoint@@SAJPEBGPEAPEAV1@@Z
    static long GetSimulatedMountPointFromVolumeGuid(unsigned short const *, CMountPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuperPlainDriveIcon@CMountPoint@@SA?AW4SHSTOCKICONID@@PEBGI@Z
    static int GetSuperPlainDriveIcon(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMountPointLocalEvent@CMountPoint@@SAXPEBGHH@Z
    static void HandleMountPointLocalEvent(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMountPointLocalEventThreadProc@CMountPoint@@SAKPEAX@Z
    static unsigned long HandleMountPointLocalEventThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWMDeviceChange@CMountPoint@@SAX_KPEBU_DEV_BROADCAST_HDR@@@Z
    static void HandleWMDeviceChange(uint64_t, _DEV_BROADCAST_HDR const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsAudioCD@CMountPoint@@UEAAHXZ
    virtual int IsAudioCD();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsBurner@CMountPoint@@UEAAHXZ
    virtual int IsBurner();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsCDROM@CMountPoint@@UEAAHXZ
    virtual int IsCDROM();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompressed@CMountPoint@@QEAAHXZ
    int IsCompressed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompressible@CMountPoint@@QEAAHXZ
    int IsCompressible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentIndexed@CMountPoint@@QEAAHXZ
    int IsContentIndexed();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDVD@CMountPoint@@UEAAHXZ
    virtual int IsDVD();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDVDRAMMedia@CMountPoint@@UEAAHXZ
    virtual int IsDVDRAMMedia();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CMountPoint@@UEAAHXZ
    virtual int IsDirty();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDisconnectedNetDrive@CMountPoint@@UEAAHXZ
    virtual int IsDisconnectedNetDrive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDriveLetter@CMountPoint@@SAHPEBG@Z
    static int IsDriveLetter(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsEjectable@CMountPoint@@UEAAHXZ
    virtual int IsEjectable();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsEjecting@CMountPoint@@UEAAHXZ
    virtual int IsEjecting();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFixedDisk@CMountPoint@@UEAAHXZ
    virtual int IsFixedDisk();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFloppy@CMountPoint@@UEAAHXZ
    virtual int IsFloppy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFloppy35@CMountPoint@@UEAAHXZ
    virtual int IsFloppy35();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFloppy525@CMountPoint@@UEAAHXZ
    virtual int IsFloppy525();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFormattable@CMountPoint@@UEAAHXZ
    virtual int IsFormattable();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMediaPresent@CMountPoint@@UEAAHXZ
    virtual int IsMediaPresent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMediaRemovable@CMountPoint@@UEAAHXZ
    virtual int IsMediaRemovable();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMounted@CMountPoint@@UEAAHXZ
    virtual int IsMounted();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMountedByPhoneStorageService@CMountPoint@@UEAAHXZ
    virtual int IsMountedByPhoneStorageService();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPureAudioCD@CMountPoint@@UEAAHXZ
    virtual int IsPureAudioCD();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRemote@CMountPoint@@UEAAHXZ
    virtual int IsRemote();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRemovableDevice@CMountPoint@@UEAAHXZ
    virtual int IsRemovableDevice();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsSDCard@CMountPoint@@UEAAHXZ
    virtual int IsSDCard();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsSlow@CMountPoint@@UEAAHXZ
    virtual int IsSlow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportingSparseFile@CMountPoint@@QEAAHXZ
    int IsSupportingSparseFile();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsUnavailableNetDrive@CMountPoint@@UEAAHXZ
    virtual int IsUnavailableNetDrive();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsUsbDrive@CMountPoint@@UEAAHXZ
    virtual int IsUsbDrive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaArrival@CMountPoint@@SAXPEBG@Z
    static void OnMediaArrival(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaRemoval@CMountPoint@@SAXPEBG@Z
    static void OnMediaRemoval(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMountPointArrival@CMountPoint@@SAXPEBG@Z
    static void OnMountPointArrival(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMountPointRemoval@CMountPoint@@SAXPEBG@Z
    static void OnMountPointRemoval(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNetShareArrival@CMountPoint@@SAXPEBG@Z
    static void OnNetShareArrival(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNetShareRemoval@CMountPoint@@SAXPEBG@Z
    static void OnNetShareRemoval(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForHardwareNotifications@CMountPoint@@SAJH@Z
    static long RegisterForHardwareNotifications(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMountPoint@@QEAAKXZ
    unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDriveLabel@CMountPoint@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long SetDriveLabel(HWND__*, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?StoreIconForUpdateImage@CMountPoint@@UEAAXH@Z
    virtual void StoreIconForUpdateImage(int);
    // Category: Method | Source: PE Export
    // Symbol: ?SupportsMediaPresenceNotifications@CMountPoint@@UEAAHXZ
    virtual int SupportsMediaPresenceNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WantAutorunUI@CMountPoint@@SAXPEBG@Z
    static void WantAutorunUI(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLocalDriveHelper@CMountPoint@@SAJXZ
    static long _InitLocalDriveHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAutoRunDriveAndEnabledByPolicy@CMountPoint@@QEAAHXZ
    int _IsAutoRunDriveAndEnabledByPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessAutoRunFile@CMountPoint@@QEAAHXZ
    int _ProcessAutoRunFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeviceUpdateLocations@CMountPoint@@KAJJ@Z
    static long NotifyDeviceUpdateLocations(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAutoplayVerb@CMountPoint@@IEAAJXZ
    long _AddAutoplayVerb();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddMountPointForFolder@CMountPoint@@KAJPEAVCMtPtLocal@@@Z
    static long _AddMountPointForFolder(CMtPtLocal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveName@CMountPoint@@MEAAJPEAGK@Z
    virtual long _GetDriveName(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLabelFromDesktopINI@CMountPoint@@IEAAHPEAGK@Z
    int _GetLabelFromDesktopINI(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLabelFromReg@CMountPoint@@IEAAHPEAGK@Z
    int _GetLabelFromReg(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLegacyRegIconLabel@CMountPoint@@IEAAHPEAGKH@Z
    int _GetLegacyRegIconLabel(unsigned short *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameForFctCall@CMountPoint@@MEAAPEBGXZ
    virtual unsigned short const * _GetNameForFctCall();
    // Category: Method | Source: PE Export
    // Symbol: ?_IsLocal@CMountPoint@@MEAAHXZ
    virtual int _IsLocal();
    // Category: Method | Source: PE Export
    // Symbol: ?_IsMountedOnDriveLetter@CMountPoint@@MEAAHXZ
    virtual int _IsMountedOnDriveLetter();
    // Category: Method | Source: PE Export
    // Symbol: ?_NeedToRefresh@CMountPoint@@MEAAHXZ
    virtual int _NeedToRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QualifyCommandToDrive@CMountPoint@@IEAAXPEAGK@Z
    void _QualifyCommandToDrive(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveLocalMountPoint@CMountPoint@@KAJPEBG@Z
    static long _RemoveLocalMountPoint(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCommentFromDesktopINI@CMountPoint@@IEAAXXZ
    void _UpdateCommentFromDesktopINI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEventForVolumeArrival@CMountPoint@@CAXPEAUtagVOLUMEINFO2@@PEAGK@Z
    static void _CreateEventForVolumeArrival(tagVOLUMEINFO2*, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumMountPoints@CMountPoint@@CAJPEAUIHardwareDevices@@@Z
    static long _EnumMountPoints(IHardwareDevices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumMountPointsNonPrimaryProcess@CMountPoint@@CAJPEAVCCritSecDelayInitBase@@@Z
    static long _EnumMountPointsNonPrimaryProcess(CCritSecDelayInitBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumVolumes@CMountPoint@@CAJPEAUIHardwareDevices@@@Z
    static long _EnumVolumes(IHardwareDevices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumVolumesNonPrimaryProcess@CMountPoint@@CAJPEAVCCritSecDelayInitBase@@@Z
    static long _EnumVolumesNonPrimaryProcess(CCritSecDelayInitBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EventAPCProc@CMountPoint@@CAX_K@Z
    static void _EventAPCProc(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EventProc@CMountPoint@@CAKPEAX@Z
    static unsigned long _EventProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractDriveLetter@CMountPoint@@CAGPEBG@Z
    static unsigned short _ExtractDriveLetter(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAndRemoveEventHandleByID@CMountPoint@@CAPEAU_EventHandle@@PEBG@Z
    static _EventHandle * _GetAndRemoveEventHandleByID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMountPointForDriveLetter@CMountPoint@@CAJHPEAPEAV1@@Z
    static long _GetMountPointForDriveLetter(int, CMountPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMountPointForFolder@CMountPoint@@CAJPEBGPEAPEAVCMtPtLocal@@@Z
    static long _GetMountPointForFolder(unsigned short const *, CMtPtLocal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMountPointForFolderFromCache@CMountPoint@@CAJPEBGPEAPEAVCMtPtLocal@@@Z
    static long _GetMountPointForFolderFromCache(unsigned short const *, CMtPtLocal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMountPointsForVolume@CMountPoint@@CAJPEBGPEAU_DPA@@@Z
    static long _GetMountPointsForVolume(unsigned short const *, _DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSubstDrives@CMountPoint@@CAXPEAVCCritSecDelayInitBase@@@Z
    static void _HandleSubstDrives(CCritSecDelayInitBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLocalDrive@CMountPoint@@CAJH@Z
    static long _InitLocalDrive(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLocalDriveHelperAsync@CMountPoint@@CAKPEAX@Z
    static unsigned long _InitLocalDriveHelperAsync(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLocalDrives@CMountPoint@@CAJXZ
    static long _InitLocalDrives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitLocalDrivesAsync@CMountPoint@@CAJXZ
    static long _InitLocalDrivesAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitNetDrives@CMountPoint@@CAJXZ
    static long _InitNetDrives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitNetDrivesHelper@CMountPoint@@CAJK@Z
    static long _InitNetDrivesHelper(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeDeviceNotificationCallbacks@CMountPoint@@CAJPEBUtagHWDEVICEINFO@@K@Z
    static long _InvokeDeviceNotificationCallbacks(tagHWDEVICEINFO const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDriveDisplayFlagOn@CMountPoint@@AEAAHK@Z
    int _IsDriveDisplayFlagOn(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsNetDriveLazyLoadNetDLLs@CMountPoint@@CAHH@Z
    static int _IsNetDriveLazyLoadNetDLLs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LocalDriveIsCoveredByNetDrive@CMountPoint@@CA_NPEBGW4AddToDriveLetterCache@@@Z
    static bool _LocalDriveIsCoveredByNetDrive(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MediaArrivalRemovalHelper@CMountPoint@@CAJPEBGH@Z
    static long _MediaArrivalRemovalHelper(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MountPointAdded@CMountPoint@@CAJPEBG0@Z
    static long _MountPointAdded(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MountPointRemoved@CMountPoint@@CAJPEBG@Z
    static long _MountPointRemoved(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyBackgroundFormat@CMountPoint@@CAJPEBG@Z
    static long _NotifyBackgroundFormat(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyPreparingEject@CMountPoint@@CAJPEBG@Z
    static long _NotifyPreparingEject(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterThreadProc@CMountPoint@@CAKPEAX@Z
    static unsigned long _RegisterThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SlashToPound@CMountPoint@@CAIPEBGPEAGK@Z
    static unsigned int _SlashToPound(unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VolumeAddedOrUpdated@CMountPoint@@CAJHPEAUtagVOLUMEINFO2@@@Z
    static long _VolumeAddedOrUpdated(int, tagVOLUMEINFO2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VolumeMountingEvent@CMountPoint@@CAJPEBGK@Z
    static long _VolumeMountingEvent(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VolumeRemoved@CMountPoint@@CAJPEBG@Z
    static long _VolumeRemoved(unsigned short const *);
};
