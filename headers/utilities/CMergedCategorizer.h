#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CMergedCategorizer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMergedCategorizer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMergedCategorizer@@QEAA@XZ
    CMergedCategorizer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareCategory@CMergedCategorizer@@UEAAJW4CATSORT_FLAGS@@KK@Z
    virtual long CompareCategory(int, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategory@CMergedCategorizer@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetCategory(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryInfo@CMergedCategorizer@@UEAAJKPEAUCATEGORY_INFO@@@Z
    virtual long GetCategoryInfo(unsigned long, CATEGORY_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CMergedCategorizer@@UEAAJPEAGI@Z
    virtual long GetDescription(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMergedCategorizer@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMergedCategorizer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMergedCategorizer@@UEAAKXZ
    virtual unsigned long Release();
};
