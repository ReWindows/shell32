#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CShellFolderSetEnumTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CShellFolderSetEnumTask@@QEAAJPEAUHWND__@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@PEAUIViewFilters@@KHHPEAUIUnknown@@@Z
    long Initialize(HWND__*, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *, IViewFilters *, unsigned long, int, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CShellFolderSetEnumTask@@UEAAJXZ
    virtual long InternalResumeRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Enum@CShellFolderSetEnumTask@@AEAAJPEAUIEnumIDList@@PEAH@Z
    long _Enum(IEnumIDList *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateFromItemStore@CShellFolderSetEnumTask@@AEAAJPEAUIShellFolder@@PEAUIItemStore@@PEAH@Z
    long _EnumerateFromItemStore(IShellFolder *, IItemStore *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryStealingCollection@CShellFolderSetEnumTask@@AEAAJPEAUIShellFolder@@PEAH@Z
    long _TryStealingCollection(IShellFolder *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryStealingEnumeration@CShellFolderSetEnumTask@@AEAAJPEAUIShellFolder@@PEAH@Z
    long _TryStealingEnumeration(IShellFolder *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareIDs@CShellFolderSetEnumTask@@CAHPEAUIChildId@@0_J@Z
    static int s_CompareIDs(IChildId *, IChildId *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellFolderSetEnumTask@@EEAA@XZ
    virtual ~CShellFolderSetEnumTask();
};
