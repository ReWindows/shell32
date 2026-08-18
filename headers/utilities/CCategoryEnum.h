#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 41 member(s).
class CCategoryEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCategoryEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCategoryEnum@@QEAA@XZ
    CCategoryEnum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CCategoryEnum@@UEAAJPEAPEAUIEnumFullIDList@@@Z
    virtual long Clone(IEnumFullIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CCategoryEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryFilter@CCategoryEnum@@UEAAJHPEAPEAUIFilterCondition@@@Z
    virtual long GetCategoryFilter(int, IFilterCondition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryIDList@CCategoryEnum@@UEAAJHPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCategoryIDList(int, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryItemCount@CCategoryEnum@@UEAAJHPEAH@Z
    virtual long GetCategoryItemCount(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CCategoryEnum@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEnum@CCategoryEnum@@UEAAJPEAUIItemStore@@PEAUIItemKeyArray@@AEBU_tagpropertykey@@HW4tagCATENUMTYPE@@KW4tagFILTERIDLISTTYPE@@PEAUIViewStateInfo@@@Z
    virtual long InitializeEnum(IItemStore *, IItemKeyArray *, _tagpropertykey const &, int, int, unsigned long, int, IViewStateInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CCategoryEnum@@UEAAJKPEAPEAU_ITEMIDLIST_ABSOLUTE@@PEAK@Z
    virtual long Next(unsigned long, _ITEMIDLIST_ABSOLUTE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CCategoryEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCategoryEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCategoryEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CCategoryEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CCategoryEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCategoryEntry@CCategoryEnum@@AEAAJPEAUICategoryDescription@@@Z
    long _AddCategoryEntry(ICategoryDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemToCategory@CCategoryEnum@@AEAAJPEBUtagITEMKEY@@K@Z
    long _AddItemToCategory(tagITEMKEY const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CategorizeItems@CCategoryEnum@@AEAAJXZ
    long _CategorizeItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearCategories@CCategoryEnum@@AEAAXXZ
    void _ClearCategories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateIDList@CCategoryEnum@@AEAAJHPEAPEAU_ITEMID_CHILD@@PEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _CreateIDList(int, _ITEMID_CHILD * *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNonCategorizedItemsDPA@CCategoryEnum@@AEAAJXZ
    long _CreateNonCategorizedItemsDPA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyStore@CCategoryEnum@@AEAAJHPEAPEAUIPropertyStore@@@Z
    long _GetPropertyStore(int, IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncludeCategory@CCategoryEnum@@AEAAHH@Z
    int _IncludeCategory(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCategoryEnum@@EEAA@XZ
    virtual ~CCategoryEnum();
};
