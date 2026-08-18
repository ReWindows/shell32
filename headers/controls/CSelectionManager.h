#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CSelectionManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSelectionManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelection@CSelectionManager@@QEAAXXZ
    void ClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeselectItem@CSelectionManager@@QEAAXPEAUIItem@@@Z
    void DeselectItem(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckState@CSelectionManager@@QEAAIPEAUIItem@@@Z
    unsigned int GetCheckState(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItemAt@CSelectionManager@@QEAAJHPEAPEAUIItem@@@Z
    long GetSelectedItemAt(int, IItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSelectionManager@@QEAAJXZ
    long Init();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@CSelectionManager@@QEAAHPEAUIItem@@@Z
    int IsSelected(IItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@CSelectionManager@@UEAAJPEAUIItem@@@Z
    virtual long OnCancelled(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CSelectionManager@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@PEAUIPropertyKeyStore@@@Z
    virtual long OnItemChanged(int, IItem *, IPropertyKeyStore *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemChanging@CSelectionManager@@UEAAJW4ITEM_CHANGED_TYPE@@PEAUIItem@@@Z
    virtual long OnItemChanging(int, IItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSelectionManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSelectionManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CSelectionManager@@QEAAXPEAUIItem@@@Z
    void SelectItem(IItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCheckState@CSelectionManager@@QEAAXPEAUIItem@@I@Z
    void SetCheckState(IItem *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapSelectedAndFocusedItem@CSelectionManager@@QEAAXPEAUIItem@@0@Z
    void SwapSelectedAndFocusedItem(IItem *, IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncToListView@CSelectionManager@@QEAAXPEAVCListViewHost@@PEAUIListView@@@Z
    void SyncToListView(CListViewHost *, IListView *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSelectedItemEntry@CSelectionManager@@AEAAJPEAUIItem@@PEAUtagSELECTED_ITEM_ENTRY@@@Z
    long _CreateSelectedItemEntry(IItem *, tagSELECTED_ITEM_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindChecked@CSelectionManager@@AEAAHPEAUIItem@@@Z
    int _FindChecked(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindSelected@CSelectionManager@@AEAAHPEAUIItem@@H@Z
    int _FindSelected(IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncWorker@CSelectionManager@@AEAAXPEAVCListViewHost@@PEAUIListView@@PEAUtagSELECTED_ITEM_ENTRY@@I@Z
    void _SyncWorker(CListViewHost *, IListView *, tagSELECTED_ITEM_ENTRY *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateGroupIndex@CSelectionManager@@AEAAHPEAVCListViewHost@@HH@Z
    int _ValidateGroupIndex(CListViewHost *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearCheckedItemEntry@CSelectionManager@@CAHPEAUtagCHECKED_ITEM_ENTRY@@PEAX@Z
    static int s_ClearCheckedItemEntry(tagCHECKED_ITEM_ENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClearSelectedItemEntry@CSelectionManager@@CAHPEAUtagSELECTED_ITEM_ENTRY@@PEAX@Z
    static int s_ClearSelectedItemEntry(tagSELECTED_ITEM_ENTRY *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSelectionManager@@AEAA@XZ
    ~CSelectionManager();
};
