#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CLowDiskSpaceUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLowDiskSpaceUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLowDiskSpaceUI@@QEAA@H@Z
    CLowDiskSpaceUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDiskSpace@CLowDiskSpaceUI@@QEAAXXZ
    void CheckDiskSpace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CLowDiskSpaceUI@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLowDiskSpaceUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLowDiskSpaceUI@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackupReminderEnabled@CLowDiskSpaceUI@@AEAAHXZ
    int IsBackupReminderEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanShowStorageSenseToast@CLowDiskSpaceUI@@AEAAHW4LOWDISK_STATE@@@Z
    int _CanShowStorageSenseToast(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToTaskScheduler@CLowDiskSpaceUI@@AEAAJPEAPEAUITaskService@@@Z
    long _ConnectToTaskScheduler(ITaskService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoNotificationUI@CLowDiskSpaceUI@@AEAAXXZ
    void _DoNotificationUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoStateMachine@CLowDiskSpaceUI@@AEAAXXZ
    void _DoStateMachine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoStorageSenseToast@CLowDiskSpaceUI@@AEAAJW4TOAST_TYPE@@@Z
    long _DoStorageSenseToast(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DurationFromNow@CLowDiskSpaceUI@@AEAA_KAEBU_FILETIME@@@Z
    uint64_t _DurationFromNow(_FILETIME const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterExclusive@CLowDiskSpaceUI@@AEAAHXZ
    int _EnterExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteFirstLaunchState@CLowDiskSpaceUI@@AEAAJXZ
    long _ExecuteFirstLaunchState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteOptinState@CLowDiskSpaceUI@@AEAAJ_K0@Z
    long _ExecuteOptinState(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteStoragePolicies@CLowDiskSpaceUI@@AEAAJ_K0PEAH@Z
    long _ExecuteStoragePolicies(uint64_t, uint64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentState@CLowDiskSpaceUI@@AEAA?AW4LOWDISK_STATE@@H@Z
    int _GetCurrentState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsFHConfigured@CLowDiskSpaceUI@@AEAAJPEAH@Z
    long _GetIsFHConfigured(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsKFMEnrolled@CLowDiskSpaceUI@@AEAAJPEAH@Z
    long _GetIsKFMEnrolled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsMDMConfigured@CLowDiskSpaceUI@@AEAAJPEBGPEAH@Z
    long _GetIsMDMConfigured(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsWin7BackupConfigured@CLowDiskSpaceUI@@AEAAJPEAH@Z
    long _GetIsWin7BackupConfigured(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOOBETime@CLowDiskSpaceUI@@AEAAJPEAU_FILETIME@@@Z
    long _GetOOBETime(_FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunCleanupMaintenanceTaskAndWait@CLowDiskSpaceUI@@AEAAXXZ
    void _RunCleanupMaintenanceTaskAndWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldExecuteStoragePolicies@CLowDiskSpaceUI@@AEAAJ_KPEAKPEAH@Z
    long _ShouldExecuteStoragePolicies(uint64_t, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StateFromFreeSpace@CLowDiskSpaceUI@@AEAA?AW4LOWDISK_STATE@@_K0@Z
    int _StateFromFreeSpace(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadProc@CLowDiskSpaceUI@@CAKPEAX@Z
    static unsigned long s_ThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLowDiskSpaceUI@@AEAA@XZ
    ~CLowDiskSpaceUI();
};
