#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CObservableItemSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@CObservableItemSink@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CObservableItemSink@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanging@CObservableItemSink@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObservableItemSink@@EEAA@XZ
    virtual ~CObservableItemSink();
};
