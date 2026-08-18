#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CDefViewSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefViewSink@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDispatchEvent@CDefViewSink@@UEAAJJPEAUtagVARIANT@@@Z
    virtual long NotifyDispatchEvent(long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWinEvent@CDefViewSink@@UEAAJKHJ@Z
    virtual long NotifyWinEvent(unsigned long, int, long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CDefViewSink@@UEAAJXZ
    virtual long OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CDefViewSink@@UEAAJIW4COLLECTION_CHANGE_STATE@@@Z
    virtual long OnCollectionChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetCountDone@CDefViewSink@@UEAAJIW4COUNT_TYPE@@J@Z
    virtual long OnGetCountDone(unsigned int, int, long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemMoved@CDefViewSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemMoved(IItem *, IItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemTranslated@CDefViewSink@@UEAAJPEAUIItem@@0@Z
    virtual long OnItemTranslated(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@CDefViewSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsAdded(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsDeleted@CDefViewSink@@UEAAJIIIW4CHANGE_INDEX_TYPE@@@Z
    virtual long OnItemsDeleted(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrepareDone@CDefViewSink@@UEAAJIJ@Z
    virtual long OnPrepareDone(unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchQueryStateChanged@CDefViewSink@@UEAAJIW4SEARCH_QUERY_STATE@@@Z
    virtual long OnSearchQueryStateChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueLeafCountChanged@CDefViewSink@@UEAAJXZ
    virtual long OnUniqueLeafCountChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefViewSink@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefViewSink@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Invoke@CDefViewSink@@AEAAJI_K_J@Z
    long _Invoke(unsigned int, uint64_t, int64_t);
};
