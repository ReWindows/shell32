#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CAutoDestItemsList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoDestItemsList@@QEAA@XZ
    CAutoDestItemsList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByIndex@CAutoDestItemsList@@QEAAJIPEAPEAUIShellItem@@@Z
    long GetItemByIndex(unsigned int, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDuplicateItem@CAutoDestItemsList@@QEAA_NPEAUIShellItem@@@Z
    bool IsDuplicateItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistItemsInOrder@CAutoDestItemsList@@QEAAJPEAUIObjectCollection@@@Z
    long PersistItemsInOrder(IObjectCollection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoDestItemsList@@QEAA@XZ
    ~CAutoDestItemsList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToDestItemCollectionEx@CAutoDestItemsList@@IEAAJPEAUIShellItem@@PEAUIPropertyStore@@MU_FILETIME@@@Z
    long _AddItemToDestItemCollectionEx(IShellItem *, IPropertyStore *, float, _FILETIME);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AddItemToDestItemCollection@CAutoDestItemsList@@MEAAJPEAUIShellItem2@@_N@Z
    virtual long v_AddItemToDestItemCollection(IShellItem2*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Clear@CAutoDestItemsList@@MEAAXXZ
    virtual void v_Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Initialize@CAutoDestItemsList@@MEAAJXZ
    virtual long v_Initialize();
};
