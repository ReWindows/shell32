#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 46 member(s).
class CUADBLog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUserTime@CUADBLog@@QEAAJPEBGKPEAH@Z
    long AddUserTime(unsigned short const *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChDir@CUADBLog@@QEAAJPEBG@Z
    long ChDir(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpLog@CUADBLog@@QEAAJXZ
    long CleanUpLog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEntry2@CUADBLog@@QEAAJPEBGH@Z
    long DeleteEntry2(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GarbageCollect@CUADBLog@@QEAAXPEAH@Z
    void GarbageCollect(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CUADBLog@@QEAAIPEBGW4_tagCOUNTTYPE@@@Z
    unsigned int GetCount(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExcludeNewAppFromMFU@CUADBLog@@QEAAIPEBG@Z
    unsigned int GetExcludeNewAppFromMFU(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileTime@CUADBLog@@QEAA?AU_FILETIME@@PEBG@Z
    _FILETIME GetFileTime(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelevance@CUADBLog@@QEAAMPEBG@Z
    float GetRelevance(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserTime@CUADBLog@@QEAAKPEBG@Z
    unsigned long GetUserTime(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncCount@CUADBLog@@QEAAJPEBGW4_tagCOUNTTYPE@@@Z
    long IncCount(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CUADBLog@@UEAAJPEAUHKEY__@@K@Z
    virtual long Initialize(HKEY__*, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUADBLog@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameEntry@CUADBLog@@QEAAJPEBG0@Z
    long RenameEntry(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCount@CUADBLog@@QEAAJPEBGW4_tagCOUNTTYPE@@I@Z
    long SetCount(unsigned short const *, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExcludeNewAppFromMFU@CUADBLog@@QEAAJPEBGH@Z
    long SetExcludeNewAppFromMFU(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileTime@CUADBLog@@QEAAJPEBGPEBU_FILETIME@@@Z
    long SetFileTime(unsigned short const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CUADBLog@@QEAAJPEAUHKEY__@@K@Z
    long SetRoot(HKEY__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserTime@CUADBLog@@QEAAJPEBGKPEAH@Z
    long SetUserTime(unsigned short const *, unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CUADBLog@@QEAAJPEBGKPEBEK@Z
    long SetValue(unsigned short const *, unsigned long, unsigned char const *, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUADBLog@@IEAA@XZ
    CUADBLog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheOp@CUADBLog@@IEAAJW4e_cacheop@1@PEAXKPEAUNRWINFO@@@Z
    long CacheOp(int, void *, unsigned long, NRWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckRebuildSession@CUADBLog@@IEAAJXZ
    long _CheckRebuildSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckRenameNMaxEntries@CUADBLog@@IEAAJPEBG0@Z
    long _CheckRenameNMaxEntries(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSessionExpired@CUADBLog@@IEAAHXZ
    int _CheckSessionExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckUpdateNMax@CUADBLog@@IEAAJPEBGPEAVCUACount@@@Z
    long _CheckUpdateNMax(unsigned short const *, CUACount *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumCountObjects@CUADBLog@@IEAAJPEAV?$CDPALocalMem@G@@@Z
    long _EnumCountObjects(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GarbageCollectSlow@CUADBLog@@IEAAJXZ
    long _GarbageCollectSlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCountWithDefault@CUADBLog@@IEAAJPEBGHPEAVCUACount@@@Z
    long _GetCountWithDefault(unsigned short const *, int, CUACount *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSession@CUADBLog@@IEAAJXZ
    long _LoadSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockLong@CUADBLog@@IEAAXXZ
    void _LockLong();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockedGetCountWithDefault@CUADBLog@@IEAAJPEBGHPEAVCUACount@@@Z
    long _LockedGetCountWithDefault(unsigned short const *, int, CUACount *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessQueuedDeletesAndRenames@CUADBLog@@IEAAJXZ
    long _ProcessQueuedDeletesAndRenames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueDeleteOrRename@CUADBLog@@IEAAJW4UADR@1@PEBG1@Z
    long _QueueDeleteOrRename(int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RebuildSessionSlow@CUADBLog@@IEAAJXZ
    long _RebuildSessionSlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveSession@CUADBLog@@IEAAJXZ
    long _SaveSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleSnapR@CUADBLog@@IEAAXXZ
    void _ScheduleSnapR();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SnapRValuesSlow@CUADBLog@@IEAAJXZ
    long _SnapRValuesSlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryLockShort@CUADBLog@@IEAAHXZ
    int _TryLockShort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnlockLong@CUADBLog@@IEAAJXZ
    long _UnlockLong();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Delete@CUADBLog@@KAJPEAXKPEAUNRWINFO@@@Z
    static long s_Delete(void *, unsigned long, NRWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Read@CUADBLog@@KAJPEAXKPEAUNRWINFO@@@Z
    static long s_Read(void *, unsigned long, NRWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Write@CUADBLog@@KAJPEAXKPEAUNRWINFO@@@Z
    static long s_Write(void *, unsigned long, NRWINFO *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUADBLog@@MEAA@XZ
    virtual ~CUADBLog();
};
