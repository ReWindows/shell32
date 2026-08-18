#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CUsersLibrariesDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CUsersLibrariesDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CUsersLibrariesDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CUsersLibrariesDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CUsersLibrariesDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLibraryDataObject@CUsersLibrariesDropTarget@@AEAAJPEAUIShellItem@@PEAUIDataObject@@PEAPEAU3@@Z
    long _GetLibraryDataObject(IShellItem *, IDataObject *, IDataObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLibraryByPath@CUsersLibrariesDropTarget@@AEAAHPEAUIShellItem@@@Z
    int _IsLibraryByPath(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Reset@CUsersLibrariesDropTarget@@AEAAXXZ
    void _Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransferDescription@CUsersLibrariesDropTarget@@AEAAXPEAUIDataObject@@0@Z
    void _TransferDescription(IDataObject *, IDataObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUsersLibrariesDropTarget@@EEAA@XZ
    virtual ~CUsersLibrariesDropTarget();
};
