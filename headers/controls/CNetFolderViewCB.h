#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CNetFolderViewCB {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CNetFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CNetFolderViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanOpenRemotePrinters@CNetFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanOpenRemotePrinters(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanSearchActiveDirectory@CNetFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanSearchActiveDirectory(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOpenNetCenter@CNetFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnOpenNetCenter(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOpenRemotePrinters@CNetFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnOpenRemotePrinters(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSearchActiveDirectory@CNetFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnSearchActiveDirectory(IUnknown *, IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDefViewMode@CNetFolderViewCB@@AEAAJKPEAW4FOLDERVIEWMODE@@@Z
    long _OnDefViewMode(unsigned long, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNetFolderViewCB@@EEAA@XZ
    virtual ~CNetFolderViewCB();
};
