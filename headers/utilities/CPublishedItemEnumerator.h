#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CPublishedItemEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublishedItemEnumerator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CPublishedItemEnumerator@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEnumFlags@CPublishedItemEnumerator@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEAPEAUHWND__@@PEAK@Z
    virtual long GetEnumFlags(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, HWND__* *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CPublishedItemEnumerator@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublishedItemEnumerator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublishedItemEnumerator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPublishedItemEnumerator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShow@CPublishedItemEnumerator@@UEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@@Z
    virtual long ShouldShow(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CPublishedItemEnumerator@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDescription@CPublishedItemEnumerator@@AEAAJXZ
    long _EnsureDescription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemDescAt@CPublishedItemEnumerator@@AEAAJKHPEAPEAUIPublishedItemDescription@@@Z
    long _GetItemDescAt(unsigned long, int, IPublishedItemDescription * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublishedItemEnumerator@@AEAA@XZ
    ~CPublishedItemEnumerator();
};
