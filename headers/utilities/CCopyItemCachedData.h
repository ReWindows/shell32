#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CCopyItemCachedData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@CCopyItemCachedData@@QEAAJPEAUIShellItem@@PEAUIFileOperation@@@Z
    long AddItem(IShellItem *, IFileOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAndRemoveFromCache@CCopyItemCachedData@@QEAAJPEAUIShellItem@@PEAPEAUIFileOperation@@@Z
    long LookupAndRemoveFromCache(IShellItem *, IFileOperation * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DataCompare@CCopyItemCachedData@@CAHPEBUCOPY_CACHE_ITEM@@0_J@Z
    static int s_DataCompare(COPY_CACHE_ITEM const *, COPY_CACHE_ITEM const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DataDestroy@CCopyItemCachedData@@CAHPEAUCOPY_CACHE_ITEM@@PEAX@Z
    static int s_DataDestroy(COPY_CACHE_ITEM *, void *);
};
