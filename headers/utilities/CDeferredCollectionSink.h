#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CDeferredCollectionSink {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeferredCollectionSink@@QEAA@XZ
    CDeferredCollectionSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CDeferredCollectionSink@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CDeferredCollectionSink@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExternalCollectionChanged@CDeferredCollectionSink@@UEAAJI@Z
    virtual long OnExternalCollectionChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CDeferredCollectionSink@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CDeferredCollectionSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CDeferredCollectionSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CDeferredCollectionSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CDeferredCollectionSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrepareDone@CDeferredCollectionSink@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueLeafCountChanged@CDeferredCollectionSink@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDeferredCollectionSink@@QEAAJPEAUIItemCollection@@PEAUIUnknown@@@Z
    long RuntimeClassInitialize(IItemCollection *, IUnknown *);
};
