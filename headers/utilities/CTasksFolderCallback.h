#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CTasksFolderCallback {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupByProperty@CTasksFolderCallback@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupByProperty(_tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CTasksFolderCallback@@UEAAJPEAUSORTCOLUMN@@IPEAI@Z
    virtual long GetSortColumns(SORTCOLUMN *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CTasksFolderCallback@@UEAAJPEAW4FOLDERLOGICALVIEWMODE@@@Z
    virtual long GetViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealMessage@CTasksFolderCallback@@UEAAJI_K_J@Z
    virtual long RealMessage(unsigned int, uint64_t, int64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTasksFolderCallback@@EEAA@XZ
    virtual ~CTasksFolderCallback();
};
