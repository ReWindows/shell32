#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 31 member(s).
class CIncludeInLibrary {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIncludeInLibrary@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemState@CIncludeInLibrary@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@PEAH@Z
    virtual long GetItemState(int, tagLVITEMW * const, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCreated@CIncludeInLibrary@@UEAAJXZ
    virtual long OnCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CIncludeInLibrary@@UEAAJXZ
    virtual long OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDismiss@CIncludeInLibrary@@UEAAJH@Z
    virtual long OnDismiss(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetSearchText@CIncludeInLibrary@@UEAAJW4SEARCHTEXTTYPE@@PEAGI@Z
    virtual long OnGetSearchText(int, unsigned short *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemChanged@CIncludeInLibrary@@UEAAJW4LVPVIEWID@@PEBUtagNMLISTVIEW@@H@Z
    virtual long OnItemChanged(int, tagNMLISTVIEW const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemFocused@CIncludeInLibrary@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@1@Z
    virtual long OnItemFocused(int, tagLVITEMW * const, tagLVITEMW * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemInvoke@CIncludeInLibrary@@UEAAJW4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemInvoke(int, tagLVITEMW * const);
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemRemoved@CIncludeInLibrary@@UEAAJW4REMOVEITEMTYPE@@W4LVPVIEWID@@QEAUtagLVITEMW@@@Z
    virtual long OnItemRemoved(int, int, tagLVITEMW * const);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMouseLeave@CIncludeInLibrary@@UEAAJXZ
    virtual long OnMouseLeave();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropCtrlInvoke@CIncludeInLibrary@@UEAAJPEAUIFilterCondition@@@Z
    virtual long OnPropCtrlInvoke(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestReposition@CIncludeInLibrary@@UEAAJPEBUtagRECT@@@Z
    virtual long OnRequestReposition(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetChanged@CIncludeInLibrary@@UEAAJPEAUIUpdatableItemSet@@W4tagUISCB_FLAGS@@_J@Z
    virtual long OnSetChanged(IUpdatableItemSet *, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpinnerCancel@CIncludeInLibrary@@UEAAJW4LVPVIEWID@@@Z
    virtual long OnSpinnerCancel(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnToolBarItemInvoke@CIncludeInLibrary@@UEAAJH@Z
    virtual long OnToolBarItemInvoke(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIncludeInLibrary@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIncludeInLibrary@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CIncludeInLibrary@@UEAAJPEAUHWND__@@@Z
    virtual long Show(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?SpecialCharacter@CIncludeInLibrary@@UEAAJPEBUtagMSG@@H@Z
    virtual long SpecialCharacter(tagMSG const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CIncludeInLibrary@@SAJPEAUIShellItem@@PEBUtagRECT@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(IShellItem *, tagRECT const *, IUnknown *, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToPopup@CIncludeInLibrary@@AEAAJPEAUIShellItem@@PEBGI@Z
    long _AddItemToPopup(IShellItem *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemsToPopup@CIncludeInLibrary@@AEAAJXZ
    long _AddItemsToPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertCreateLibraryItem@CIncludeInLibrary@@AEAAJXZ
    long _InsertCreateLibraryItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIncludeInLibrary@@AEAA@XZ
    ~CIncludeInLibrary();
};
