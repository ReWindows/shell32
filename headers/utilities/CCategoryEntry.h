#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CCategoryEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@CCategoryEntry@@QEAAJPEBUtagITEMKEY@@@Z
    long AddItem(tagITEMKEY const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CCategoryEntry@@QEAAJPEAUIItemStore@@PEAUIShellFolder@@AEBU_GUID@@PEAPEAX@Z
    long GetPropertyStore(IItemStore *, IShellFolder *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxCount@CCategoryEntry@@QEAAJH@Z
    long SetMaxCount(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCategoryEntry@@QEAA@XZ
    ~CCategoryEntry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AggregatePropertiesFromItems@CCategoryEntry@@AEAAJPEAUIItemStore@@PEAUIShellFolder@@PEAUIPropertyStore@@@Z
    long _AggregatePropertiesFromItems(IItemStore *, IShellFolder *, IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyStore@CCategoryEntry@@AEAAJPEAPEAUIPropertyStore@@@Z
    long _GetPropertyStore(IPropertyStore * *);
};
