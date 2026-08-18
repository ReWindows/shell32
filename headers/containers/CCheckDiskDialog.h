#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 26 member(s).
class CCheckDiskDialog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCheckDiskDialog@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CCheckDiskDialog@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCheckDiskDialog@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCheckDiskDialog@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CCheckDiskDialog@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long Show(HWND__*, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureProgressDialog@CCheckDiskDialog@@AEAAJPEAU_TASKDIALOGCONFIG@@E@Z
    long ConfigureProgressDialog(_TASKDIALOGCONFIG *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureResultDialog@CCheckDiskDialog@@AEAAJPEAU_TASKDIALOGCONFIG@@EK@Z
    long ConfigureResultDialog(_TASKDIALOGCONFIG *, unsigned char, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVolumeStateDialog@CCheckDiskDialog@@AEAAJPEAU_TASKDIALOGCONFIG@@@Z
    long ConfigureVolumeStateDialog(_TASKDIALOGCONFIG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Callback@CCheckDiskDialog@@AEAAEW4_FMIFS_PACKET_TYPE@@KPEAX@Z
    unsigned char _Callback(int, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTLS@CCheckDiskDialog@@AEAAXXZ
    void _ClearTLS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterExclusive@CCheckDiskDialog@@AEAAHXZ
    int _EnterExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTimeRemainingText@CCheckDiskDialog@@AEAAJ_KPEAGI@Z
    long _GetTimeRemainingText(uint64_t, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchTaskDialog@CCheckDiskDialog@@AEAAJPEBU_TASKDIALOGCONFIG@@PEAH11@Z
    long _LaunchTaskDialog(_TASKDIALOGCONFIG const *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCheckDiskComplete@CCheckDiskDialog@@AEAAJHK@Z
    long _OnCheckDiskComplete(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInUseQueryUser@CCheckDiskDialog@@AEAAJPEAH@Z
    long _OnInUseQueryUser(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNeedRestartQueryUser@CCheckDiskDialog@@AEAAJPEAH@Z
    long _OnNeedRestartQueryUser(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetThisInTLS@CCheckDiskDialog@@AEAAJXZ
    long _SetThisInTLS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StateTaskDialogCallback@CCheckDiskDialog@@AEAAJPEAUHWND__@@I_K_J2@Z
    long _StateTaskDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TaskDialogCallback@CCheckDiskDialog@@AEAAJPEAUHWND__@@I_K_J2@Z
    long _TaskDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ThreadProc@CCheckDiskDialog@@AEAAKXZ
    unsigned long _ThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Callback@CCheckDiskDialog@@CAEW4_FMIFS_PACKET_TYPE@@KPEAX@Z
    static unsigned char s_Callback(int, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ResultTaskDialogCallback@CCheckDiskDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_ResultTaskDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_StateTaskDialogCallback@CCheckDiskDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_StateTaskDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TaskDialogCallback@CCheckDiskDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_TaskDialogCallback(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadProc@CCheckDiskDialog@@CAKPEAX@Z
    static unsigned long s_ThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCheckDiskDialog@@AEAA@XZ
    ~CCheckDiskDialog();
};
