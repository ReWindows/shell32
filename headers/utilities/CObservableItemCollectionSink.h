#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CObservableItemCollectionSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendResetChange@CObservableItemCollectionSink@@QEAAXH@Z
    void AppendResetChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncResetOperationCompleted@CObservableItemCollectionSink@@QEAAXXZ
    void AsyncResetOperationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueAsyncResetOperation@CObservableItemCollectionSink@@QEAA_NXZ
    bool ContinueAsyncResetOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapIndex@CObservableItemCollectionSink@@QEAA?AW4MapIndexResult@@IIPEAI@Z
    int MapIndex(unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CObservableItemCollectionSink@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CObservableItemCollectionSink@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CObservableItemCollectionSink@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMoved@CObservableItemCollectionSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTranslated@CObservableItemCollectionSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CObservableItemCollectionSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CObservableItemCollectionSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrepareDone@CObservableItemCollectionSink@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueLeafCountChanged@CObservableItemCollectionSink@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessChanges@CObservableItemCollectionSink@@QEAAXXZ
    void ProcessChanges();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendChange@CObservableItemCollectionSink@@AEAAXAEBUCollectionChangeArgs@@@Z
    void _AppendChange(CollectionChangeArgs const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLiveItemCountChanged@CObservableItemCollectionSink@@AEAAXXZ
    void _OnLiveItemCountChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObservableItemCollectionSink@@EEAA@XZ
    virtual ~CObservableItemCollectionSink();
};
