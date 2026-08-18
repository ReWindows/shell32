#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
namespace CListViewHost {
class CJustInTimeItemSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CJustInTimeItemSink@CListViewHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CJustInTimeItemSink@CListViewHost@@QEAA@XZ
    CJustInTimeItemSink();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CJustInTimeItemSink@CListViewHost@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemChanged@CJustInTimeItemSink@CListViewHost@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemChanging@CJustInTimeItemSink@CListViewHost@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CJustInTimeItemSink@CListViewHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CJustInTimeItemSink@CListViewHost@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CListViewHost
