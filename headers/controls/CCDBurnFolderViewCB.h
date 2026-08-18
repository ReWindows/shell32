#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 33 member(s).
class CCDBurnFolderViewCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurnFolderViewCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFlags@CCDBurnFolderViewCB@@UEAAJPEAW4FOLDERFLAGS@@0@Z
    virtual long GetFolderFlags(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByProperty@CCDBurnFolderViewCB@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurnFolderViewCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CCDBurnFolderViewCB@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurnFolderViewCB@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanBurn@CCDBurnFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanBurn(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanClear@CCDBurnFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanClear(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanErase@CCDBurnFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    static long _CanErase(IUnknown *, IShellItemArray *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCDBurn@CCDBurnFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnCDBurn(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCDClearStaging@CCDBurnFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnCDClearStaging(IUnknown *, IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCDErase@CCDBurnFolderViewCB@@SAJPEAUIUnknown@@PEAUIShellItemArray@@PEAUIBindCtx@@@Z
    static long _OnCDErase(IUnknown *, IShellItemArray *, IBindCtx *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFSNotify@CCDBurnFolderViewCB@@AEAAJKPEAPEBU_ITEMIDLIST_ABSOLUTE@@J@Z
    long OnFSNotify(unsigned long, _ITEMIDLIST_ABSOLUTE const * *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetWorkingDir@CCDBurnFolderViewCB@@AEAAJKIPEAG@Z
    long OnGetWorkingDir(unsigned long, unsigned int, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCDBurnFolderViewCB@@EEAA@XZ
    virtual ~CCDBurnFolderViewCB();
};
