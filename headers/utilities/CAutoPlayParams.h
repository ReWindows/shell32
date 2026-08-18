#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CAutoPlayParams {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoPlayParams@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoPlayParams@@QEAA@XZ
    CAutoPlayParams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDirectVolume@CAutoPlayParams@@SAJXZ
    static long ClearDirectVolume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAutorun@CAutoPlayParams@@QEAAJXZ
    long DoAutorun();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFolder@CAutoPlayParams@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CAutoPlayParams@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAutoPlayParams@@QEAAJPEAVCMountPoint@@PEBGK@Z
    long Init(CMountPoint *, unsigned short const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProgressDialog@CAutoPlayParams@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CAutoPlayParams@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptUser@CAutoPlayParams@@QEAAJKPEAUHWND__@@@Z
    long PromptUser(unsigned long, HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoPlayParams@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoPlayParams@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoPlayParams@@MEAA@XZ
    virtual ~CAutoPlayParams();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMetadataReady@CAutoPlayParams@@CA_NPEBG@Z
    static bool IsMetadataReady(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MetadataStateCallback@CAutoPlayParams@@CAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    static void MetadataStateCallback(HDEVQUERY__*, void *, _DEV_QUERY_RESULT_ACTION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForMetadataReady@CAutoPlayParams@@AEAAJPEBG@Z
    long WaitForMetadataReady(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteCustomEventInfoIfExists@CAutoPlayParams@@AEAAXAEBU_GUID@@@Z
    void _DeleteCustomEventInfoIfExists(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindKnownCustomEventDeviceFromContainer@CAutoPlayParams@@AEAAJPEAG0_K@Z
    long _FindKnownCustomEventDeviceFromContainer(unsigned short *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FoundContent@CAutoPlayParams@@AEAAXK@Z
    void _FoundContent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPrivateProfileKeyEnumeration@CAutoPlayParams@@AEAAHPEBG0PEAPEAG@Z
    int _GetPrivateProfileKeyEnumeration(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitCustomEvent@CAutoPlayParams@@AEAA_NPEBG0@Z
    bool _InitCustomEvent(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAutoplayAllowed@CAutoPlayParams@@AEAAHKK@Z
    int _IsAutoplayAllowed(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCurrentDesktopActiveConsole@CAutoPlayParams@@AEAAHXZ
    int _IsCurrentDesktopActiveConsole();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsForegroundAppRequestCD@CAutoPlayParams@@AEAAHXZ
    int _IsForegroundAppRequestCD();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseCameraIntent@CAutoPlayParams@@AEAAXPEBG0@Z
    void _ParseCameraIntent(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseIntent@CAutoPlayParams@@AEAAXPEBG0@Z
    void _ParseIntent(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueryRunningObject@CAutoPlayParams@@AEAAJPEAVCMountPoint@@KPEAH@Z
    long _QueryRunningObject(CMountPoint *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveKnownCustomEventInfo@CAutoPlayParams@@AEAAJAEBU_GUID@@PEBG@Z
    long _SaveKnownCustomEventInfo(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowCorruptVolumeTaskDialog@CAutoPlayParams@@AEAAJPEAVCMountPoint@@PEAH@Z
    long _ShowCorruptVolumeTaskDialog(CMountPoint *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Sniff@CAutoPlayParams@@AEAAJXZ
    long _Sniff();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SniffPath@CAutoPlayParams@@AEAAJPEBG@Z
    long _SniffPath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SqmChkDsk@CAutoPlayParams@@AEAAXKKKK@Z
    void _SqmChkDsk(unsigned long, unsigned long, unsigned long, unsigned long);
};
