#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 27 member(s).
class CShellFolderSet {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellFolderSet@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellFolderSet@@QEAA@XZ
    CShellFolderSet();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CShellFolderSet@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CShellFolderSet@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSet@CShellFolderSet@@UEAAJPEAIPEAPEAPEAUIShellItem@@@Z
    virtual long GetItemSet(unsigned int *, IShellItem * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasItems@CShellFolderSet@@UEAAJPEAH@Z
    virtual long HasItems(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CShellFolderSet@@UEAAJKHPEAUIUpdatableItemSetCallback@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@PEAUIViewFilters@@_J@Z
    virtual long Initialize(unsigned long, int, IUpdatableItemSetCallback *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *, IViewFilters *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillEnumeration@CShellFolderSet@@UEAAJXZ
    virtual long KillEnumeration();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellFolderSet@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSet@CShellFolderSet@@UEAAJXZ
    virtual long RefreshSet();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellFolderSet@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIDList@CShellFolderSet@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemSet@CShellFolderSet@@UEAAJIPEAPEAUIShellItem@@@Z
    virtual long SetItemSet(unsigned int, IShellItem * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureNotifications@CShellFolderSet@@AEAAXXZ
    void _EnsureNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSchedulerAndDPA@CShellFolderSet@@AEAAJXZ
    long _EnsureSchedulerAndDPA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureWorkerWindow@CShellFolderSet@@AEAAJXZ
    long _EnsureWorkerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartEnumeration@CShellFolderSet@@AEAAJH@Z
    long _StartEnumeration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CShellFolderSet@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellFolderSet@@EEAA@XZ
    virtual ~CShellFolderSet();
};
