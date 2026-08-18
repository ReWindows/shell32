#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 107 member(s).
class CMtPtLocal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitLockerCanChangePassphraseByProxy@CMtPtLocal@@UEAAHXZ
    virtual int BitLockerCanChangePassphraseByProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitLockerCanChangePin@CMtPtLocal@@UEAAHXZ
    virtual int BitLockerCanChangePin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitLockerRequiresAdmin@CMtPtLocal@@UEAAHXZ
    virtual int BitLockerRequiresAdmin();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMtPtLocal@@QEAA@XZ
    CMtPtLocal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseVolume@CMtPtLocal@@QEBAHXZ
    int CanUseVolume() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@CMtPtLocal@@UEAAXXZ
    virtual void CloseSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Eject@CMtPtLocal@@UEAAJPEAUHWND__@@@Z
    virtual long Eject(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EjectAsync@CMtPtLocal@@UEAAJPEAUHWND__@@@Z
    virtual long EjectAsync(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocSystemElement@CMtPtLocal@@UEAAJPEAPEAUIAssociationElement@@@Z
    virtual long GetAssocSystemElement(IAssociationElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@CMtPtLocal@@UEAAKXZ
    virtual unsigned long GetAttributes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutorunContentType@CMtPtLocal@@UEAAKXZ
    virtual unsigned long GetAutorunContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutorunIcon@CMtPtLocal@@QEAAJPEAGK@Z
    long GetAutorunIcon(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitLockerState@CMtPtLocal@@UEAAHXZ
    virtual int GetBitLockerState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCDInfo@CMtPtLocal@@UEAAJPEAK0@Z
    virtual long GetCDInfo(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriveFlags@CMtPtLocal@@UEAAHXZ
    virtual int GetDriveFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystemName@CMtPtLocal@@UEAAHPEAGK@Z
    virtual int GetFileSystemName(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CMtPtLocal@@UEAAIPEAGK@Z
    virtual unsigned int GetIcon(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabel@CMtPtLocal@@UEAAJPEAGKPEAH@Z
    virtual long GetLabel(unsigned short *, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabelNoFancy@CMtPtLocal@@UEAAJPEAGK@Z
    virtual long GetLabelNoFancy(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMTPTContentType@CMtPtLocal@@UEAAKXZ
    virtual unsigned long GetMTPTContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMTPTDriveType@CMtPtLocal@@UEAAKXZ
    virtual unsigned long GetMTPTDriveType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKey@CMtPtLocal@@UEAAPEAUHKEY__@@XZ
    virtual HKEY__* GetRegKey();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRemotePath@CMtPtLocal@@UEAAJPEAGK@Z
    virtual long GetRemotePath(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerialNumber@CMtPtLocal@@UEAAJPEAK@Z
    virtual long GetSerialNumber(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellDescriptionID@CMtPtLocal@@UEAAKXZ
    virtual unsigned long GetShellDescriptionID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeString@CMtPtLocal@@UEAAXPEAGK@Z
    virtual void GetTypeString(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeInformationFlags@CMtPtLocal@@UEAAKXZ
    virtual unsigned long GetVolumeInformationFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAudioCD@CMtPtLocal@@UEAAHXZ
    virtual int IsAudioCD();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutorunPresent@CMtPtLocal@@UEAAHXZ
    virtual int IsAutorunPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBitLockerDecrypting@CMtPtLocal@@QEAAHXZ
    int IsBitLockerDecrypting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBitLockerInitialized@CMtPtLocal@@QEAAHXZ
    int IsBitLockerInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBitLockerLocked@CMtPtLocal@@QEAAHXZ
    int IsBitLockerLocked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBitLockerPreProvisioned@CMtPtLocal@@QEAAHXZ
    int IsBitLockerPreProvisioned();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBitLockerPremiumSKU@CMtPtLocal@@QEAAHXZ
    int IsBitLockerPremiumSKU();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBurner@CMtPtLocal@@UEAAHXZ
    virtual int IsBurner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCDROM@CMtPtLocal@@UEAAHXZ
    virtual int IsCDROM();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDVD@CMtPtLocal@@UEAAHXZ
    virtual int IsDVD();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDVDRAMMedia@CMtPtLocal@@UEAAHXZ
    virtual int IsDVDRAMMedia();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CMtPtLocal@@UEAAHXZ
    virtual int IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEjectable@CMtPtLocal@@UEAAHXZ
    virtual int IsEjectable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEjecting@CMtPtLocal@@UEAAHXZ
    virtual int IsEjecting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmulatedPhoneSDCard@CMtPtLocal@@UEAAHXZ
    virtual int IsEmulatedPhoneSDCard();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFixedDisk@CMtPtLocal@@UEAAHXZ
    virtual int IsFixedDisk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFloppy@CMtPtLocal@@UEAAHXZ
    virtual int IsFloppy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFloppy35@CMtPtLocal@@UEAAHXZ
    virtual int IsFloppy35();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFloppy525@CMtPtLocal@@UEAAHXZ
    virtual int IsFloppy525();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormattable@CMtPtLocal@@UEAAHXZ
    virtual int IsFormattable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormatted@CMtPtLocal@@UEAAHXZ
    virtual int IsFormatted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaPresent@CMtPtLocal@@UEAAHXZ
    virtual int IsMediaPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaRemovable@CMtPtLocal@@UEAAHXZ
    virtual int IsMediaRemovable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMounted@CMtPtLocal@@UEAAHXZ
    virtual int IsMounted();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMountedByPhoneStorageService@CMtPtLocal@@UEAAHXZ
    virtual int IsMountedByPhoneStorageService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPureAudioCD@CMtPtLocal@@UEAAHXZ
    virtual int IsPureAudioCD();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemovableDevice@CMtPtLocal@@UEAAHXZ
    virtual int IsRemovableDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSDCard@CMtPtLocal@@UEAAHXZ
    virtual int IsSDCard();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsbDrive@CMtPtLocal@@UEAAHXZ
    virtual int IsUsbDrive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualDevice@CMtPtLocal@@QEAAHXZ
    int IsVirtualDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVolume@CMtPtLocal@@SAHPEBG@Z
    static int IsVolume(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDriveLabel@CMtPtLocal@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long SetDriveLabel(HWND__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabel@CMtPtLocal@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long SetLabel(HWND__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreIconForUpdateImage@CMtPtLocal@@UEAAXH@Z
    virtual void StoreIconForUpdateImage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsMediaPresenceNotifications@CMtPtLocal@@UEAAHXZ
    virtual int SupportsMediaPresenceNotifications();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?_IsLocal@CMtPtLocal@@MEAAHXZ
    virtual int _IsLocal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElevationDialogCallback@CMtPtLocal@@CAJPEAUHWND__@@I_K_J2@Z
    static long ElevationDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBusType@CMtPtLocal@@AEAAJPEAW4_STORAGE_BUS_TYPE@@@Z
    long GetBusType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMtPtLocal@CMtPtLocal@@CAJPEBG@Z
    static long _CreateMtPtLocal(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMtPtLocalFromVolumeGuid@CMtPtLocal@@CAJPEBGPEAPEAVCMountPoint@@@Z
    static long _CreateMtPtLocalFromVolumeGuid(unsigned short const *, CMountPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMtPtLocalWithVolume@CMtPtLocal@@CAJPEBGPEAVCVolume@@@Z
    static long _CreateMtPtLocalWithVolume(unsigned short const *, CVolume *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVolume@CMtPtLocal@@CAJPEBUtagVOLUMEINFO@@PEAPEAVCVolume@@@Z
    static long _CreateVolume(tagVOLUMEINFO const *, CVolume * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVolumeFromGUIDOnly@CMtPtLocal@@CAJPEBG0PEAPEAVCVolume@@@Z
    static long _CreateVolumeFromGUIDOnly(unsigned short const *, unsigned short const *, CVolume * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVolumeFromReg@CMtPtLocal@@CAJPEBGPEAPEAVCVolume@@@Z
    static long _CreateVolumeFromReg(unsigned short const *, CVolume * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVolumeFromRegHelper@CMtPtLocal@@CAJPEBG0PEAPEAVCVolume@@@Z
    static long _CreateVolumeFromRegHelper(unsigned short const *, unsigned short const *, CVolume * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVolumeFromVOLUMEINFO2@CMtPtLocal@@CAJPEAUtagVOLUMEINFO2@@PEAPEAVCVolume@@@Z
    static long _CreateVolumeFromVOLUMEINFO2(tagVOLUMEINFO2*, CVolume * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EjectThreadProc@CMtPtLocal@@CAKPEAX@Z
    static unsigned long _EjectThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForceCheckMediaPresent@CMtPtLocal@@AEAAHXZ
    int _ForceCheckMediaPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAndRemoveVolumeAndItsMtPts@CMtPtLocal@@CAJPEBGPEAPEAVCVolume@@PEAU_DPA@@@Z
    static long _GetAndRemoveVolumeAndItsMtPts(unsigned short const *, CVolume * *, _DPA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAndRemoveVolumeByID@CMtPtLocal@@CAPEAVCVolume@@PEBG@Z
    static CVolume * _GetAndRemoveVolumeByID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCDROMIcon@CMtPtLocal@@AEAA?AW4SHSTOCKICONID@@XZ
    int _GetCDROMIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCDROMName@CMtPtLocal@@AEAAHPEAGK@Z
    int _GetCDROMName(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveName@CMtPtLocal@@EEAAJPEAGK@Z
    virtual long _GetDriveName(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveType@CMtPtLocal@@EEAAHXZ
    virtual int _GetDriveType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFixedDriveIcon@CMtPtLocal@@AEAAHXZ
    int _GetFixedDriveIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGVIDriveFlags@CMtPtLocal@@EEAAHXZ
    virtual int _GetGVIDriveFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGVILabel@CMtPtLocal@@EEAAHPEAGK@Z
    virtual int _GetGVILabel(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGVILabelOrMixedCaseFromReg@CMtPtLocal@@EEAAHPEAGK@Z
    virtual int _GetGVILabelOrMixedCaseFromReg(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHandleWithAccessAndShareMode@CMtPtLocal@@AEAAPEAXKK@Z
    void * _GetHandleWithAccessAndShareMode(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMetadataIcon@CMtPtLocal@@AEAAHPEAGK@Z
    int _GetMetadataIcon(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameForFctCall@CMtPtLocal@@EEAAPEBGXZ
    virtual unsigned short const * _GetNameForFctCall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRemovableDriveIcon@CMtPtLocal@@AEAAHXZ
    int _GetRemovableDriveIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVolumeByID@CMtPtLocal@@CAPEAVCVolume@@PEBG@Z
    static CVolume * _GetVolumeByID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetVolumeByMtPt@CMtPtLocal@@CAPEAVCVolume@@PEBG@Z
    static CVolume * _GetVolumeByMtPt(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CMtPtLocal@@AEAAJPEBG@Z
    long _Init(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitWithVolume@CMtPtLocal@@AEAAJPEBGPEAVCVolume@@@Z
    long _InitWithVolume(unsigned short const *, CVolume *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertVolume@CMtPtLocal@@CAJPEAVCVolume@@@Z
    static long _InsertVolume(CVolume *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMountedOnDriveLetter@CMtPtLocal@@EEAAHXZ
    virtual int _IsMountedOnDriveLetter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NeedToRefresh@CMtPtLocal@@EEAAHXZ
    virtual int _NeedToRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyIsEjectingChanged@CMtPtLocal@@AEAAXXZ
    void _NotifyIsEjectingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveVolumeByGUID@CMtPtLocal@@CAXPEBG@Z
    static void _RemoveVolumeByGUID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowElevationDialog@CMtPtLocal@@AEAAJXZ
    long _ShowElevationDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryClassicEject@CMtPtLocal@@AEAAJPEAXPEAUHWND__@@PEBG@Z
    long _TryClassicEject(void *, HWND__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryLowPrivilegeDeviceSafeRemoval@CMtPtLocal@@AEAAJPEAUHWND__@@PEA_N@Z
    long _TryLowPrivilegeDeviceSafeRemoval(HWND__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryVirtualDiscImageDriveEject@CMtPtLocal@@AEAAJPEAXPEAUHWND__@@PEA_N@Z
    long _TryVirtualDiscImageDriveEject(void *, HWND__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVolumeRegInfo@CMtPtLocal@@CAJPEBUtagVOLUMEINFO@@@Z
    static long _UpdateVolumeRegInfo(tagVOLUMEINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVolumeRegInfo2@CMtPtLocal@@CAJPEBUtagVOLUMEINFO2@@@Z
    static long _UpdateVolumeRegInfo2(tagVOLUMEINFO2const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMtPtLocal@@EEAA@XZ
    virtual ~CMtPtLocal();
};
