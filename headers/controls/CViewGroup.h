#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CViewGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CViewGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CViewGroup@@QEAAJIPEAPEAUIItem@@@Z
    long GetItem(unsigned int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCollection@CViewGroup@@QEAAJPEAUIResultShape@@PEAUHWND__@@@Z
    long InitCollection(IResultShape *, HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CViewGroup@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CViewGroup@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CViewGroup@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetCountDone@CViewGroup@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CViewGroup@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemChanging@CViewGroup@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CViewGroup@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CViewGroup@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CViewGroup@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CViewGroup@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrepareDone@CViewGroup@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUniqueLeafCountChanged@CViewGroup@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CViewGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewGroup@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCollection@CViewGroup@@AEAAJPEAUIResultShape@@PEAUHWND__@@@Z
    long _CreateCollection(IResultShape *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnadviseItem@CViewGroup@@AEAAXXZ
    void _UnadviseItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewGroup@@AEAA@XZ
    ~CViewGroup();
};
