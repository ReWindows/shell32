#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CItemCollectionSink {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountOnBackgroundThread@CItemCollectionSink@@SAJPEAUIItemCollection@@PEAI1@Z
    static long GetCountOnBackgroundThread(IItemCollection *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CItemCollectionSink@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCollectionChanged@CItemCollectionSink@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CItemCollectionSink@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemMoved@CItemCollectionSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemTranslated@CItemCollectionSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemsAdded@CItemCollectionSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemsDeleted@CItemCollectionSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrepareDone@CItemCollectionSink@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUniqueLeafCountChanged@CItemCollectionSink@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
};
