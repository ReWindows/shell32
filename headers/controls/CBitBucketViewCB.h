#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CBitBucketViewCB {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CBitBucketViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CBitBucketViewCB@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CBitBucketViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanRestoreItems@CBitBucketViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanRestoreItems(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HaveDeletedItems@CBitBucketViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _HaveDeletedItems(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEmptyRecycleBin@CBitBucketViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnEmptyRecycleBin(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRestore@CBitBucketViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnRestore(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRestoreAll@CBitBucketViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnRestoreAll(IUnknown *, IShellItemArray *, IBindCtx *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitBucketViewCB@@AEAA@PEAVCBitBucket@@PEAUIRecycleBinManager@@@Z
    CBitBucketViewCB(CBitBucket *, IRecycleBinManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeNotifyDeregister@CBitBucketViewCB@@CAHPEAKPEAX@Z
    static int _ChangeNotifyDeregister(unsigned long *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleFSNotify@CBitBucketViewCB@@AEAAJJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    long _HandleFSNotify(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetNotificationWindow@CBitBucketViewCB@@AEAAJKPEAUHWND__@@@Z
    long _OnSetNotificationWindow(unsigned long, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitBucketViewCB@@EEAA@XZ
    virtual ~CBitBucketViewCB();
};
