#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 47 member(s).
class CMtPtRemote {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMtPtRemote@@QEAA@XZ
    CMtPtRemote();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocSystemElement@CMtPtRemote@@UEAAJPEAPEAUIAssociationElement@@@Z
    virtual long GetAssocSystemElement(IAssociationElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@CMtPtRemote@@UEAAKXZ
    virtual unsigned long GetAttributes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutorunContentType@CMtPtRemote@@UEAAKXZ
    virtual unsigned long GetAutorunContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDriveFlags@CMtPtRemote@@UEAAHXZ
    virtual int GetDriveFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSystemName@CMtPtRemote@@UEAAHPEAGK@Z
    virtual int GetFileSystemName(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CMtPtRemote@@UEAAIPEAGK@Z
    virtual unsigned int GetIcon(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabel@CMtPtRemote@@UEAAJPEAGKPEAH@Z
    virtual long GetLabel(unsigned short *, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabelNoFancy@CMtPtRemote@@UEAAJPEAGK@Z
    virtual long GetLabelNoFancy(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMTPTContentType@CMtPtRemote@@UEAAKXZ
    virtual unsigned long GetMTPTContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMTPTDriveType@CMtPtRemote@@UEAAKXZ
    virtual unsigned long GetMTPTDriveType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKey@CMtPtRemote@@UEAAPEAUHKEY__@@XZ
    virtual HKEY__* GetRegKey();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemotePath@CMtPtRemote@@UEAAJPEAGK@Z
    virtual long GetRemotePath(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerialNumber@CMtPtRemote@@UEAAJPEAK@Z
    virtual long GetSerialNumber(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellDescriptionID@CMtPtRemote@@UEAAKXZ
    virtual unsigned long GetShellDescriptionID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeString@CMtPtRemote@@UEAAXPEAGK@Z
    virtual void GetTypeString(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeInformationFlags@CMtPtRemote@@UEAAKXZ
    virtual unsigned long GetVolumeInformationFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutorunPresent@CMtPtRemote@@UEAAHXZ
    virtual int IsAutorunPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisconnectedNetDrive@CMtPtRemote@@UEAAHXZ
    virtual int IsDisconnectedNetDrive();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsEmulatedPhoneSDCard@CMtPtRemote@@UEAAHXZ
    virtual int IsEmulatedPhoneSDCard();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFormatted@CMtPtRemote@@UEAAHXZ
    virtual int IsFormatted();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRemote@CMtPtRemote@@UEAAHXZ
    virtual int IsRemote();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSlow@CMtPtRemote@@UEAAHXZ
    virtual int IsSlow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnavailableNetDrive@CMtPtRemote@@UEAAHXZ
    virtual int IsUnavailableNetDrive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLabel@CMtPtRemote@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long SetLabel(HWND__*, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcPathSpeed@CMtPtRemote@@AEAAXXZ
    void _CalcPathSpeed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMtPtRemote@CMtPtRemote@@CAJPEBG0H@Z
    static long _CreateMtPtRemote(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMtPtRemoteWithoutShareName@CMtPtRemote@@CAJPEBG@Z
    static long _CreateMtPtRemoteWithoutShareName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteAllMtPtsAndShares@CMtPtRemote@@CAJXZ
    static long _DeleteAllMtPtsAndShares();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayName@CMtPtRemote@@AEAAJPEAGK@Z
    long _GetDisplayName(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDriveType@CMtPtRemote@@EEAAHXZ
    virtual int _GetDriveType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGVIDriveFlags@CMtPtRemote@@EEAAHXZ
    virtual int _GetGVIDriveFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGVILabel@CMtPtRemote@@EEAAHPEAGK@Z
    virtual int _GetGVILabel(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGVILabelOrMixedCaseFromReg@CMtPtRemote@@EEAAHPEAGK@Z
    virtual int _GetGVILabelOrMixedCaseFromReg(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOrCreateShareFromID@CMtPtRemote@@CAPEAVCShare@@PEBG@Z
    static CShare * _GetOrCreateShareFromID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CMtPtRemote@@AEAAJPEBG0H@Z
    long _Init(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitWithoutShareName@CMtPtRemote@@AEAAJPEBG@Z
    long _InitWithoutShareName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsConnected@CMtPtRemote@@AEAAHXZ
    int _IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadDesktopIni@CMtPtRemote@@AEAAXXZ
    void _ReadDesktopIni();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadDesktopIniThreadProc@CMtPtRemote@@CAKPEAX@Z
    static unsigned long _ReadDesktopIniThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveShareFromHDPA@CMtPtRemote@@CAJPEBVCShare@@@Z
    static long _RemoveShareFromHDPA(CShare const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateGFAAndGVIInfo@CMtPtRemote@@AEAAHXZ
    int _UpdateGFAAndGVIInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateLabelFromDesktopINI@CMtPtRemote@@AEAAXXZ
    void _UpdateLabelFromDesktopINI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWNetGCStatus@CMtPtRemote@@AEAAXXZ
    void _UpdateWNetGCStatus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMtPtRemote@@EEAA@XZ
    virtual ~CMtPtRemote();
};
