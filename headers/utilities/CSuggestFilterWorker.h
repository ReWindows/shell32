#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CSuggestFilterWorker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSuggestFilterWorker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CSuggestFilterWorker@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CSuggestFilterWorker@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSuggestFilterWorker@@UEAAJKIW4FILTERWORKERFLAGS@@PEAUIShellItem@@PEAUIPropertyKeyStore@@AEBU_tagpropertykey@@PEAUISuggestFilterCallback@@@Z
    virtual long Init(unsigned long, unsigned int, int, IShellItem *, IPropertyKeyStore *, _tagpropertykey const &, ISuggestFilterCallback *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSuggestFilterWorker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSuggestFilterWorker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CompareFilter@CSuggestFilterWorker@@SAHPEAUIFilterWorkerItem@@0_J@Z
    static int s_CompareFilter(IFilterWorkerItem *, IFilterWorkerItem *, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckFilters@CSuggestFilterWorker@@AEAAJXZ
    long _CheckFilters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeDupeResults@CSuggestFilterWorker@@AEAAJXZ
    long _DeDupeResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppliedFilters@CSuggestFilterWorker@@AEAAJPEAPEAUIFilterCondition@@@Z
    long _GetAppliedFilters(IFilterCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilterResults@CSuggestFilterWorker@@AEAAJXZ
    long _GetFilterResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilters@CSuggestFilterWorker@@AEAAJPEAUIShellFolder3@@U_tagpropertykey@@@Z
    long _GetFilters(IShellFolder3*, _tagpropertykey);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFolder@CSuggestFilterWorker@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetFolder(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStackedFolder@CSuggestFilterWorker@@AEAAJPEAUIShellFolder3@@U_tagpropertykey@@PEAPEAU2@@Z
    long _GetStackedFolder(IShellFolder3*, _tagpropertykey, IShellFolder3* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeScopeIncludeSubfolders@CSuggestFilterWorker@@AEAAJXZ
    long _MakeScopeIncludeSubfolders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveKeysFromCondition@CSuggestFilterWorker@@AEAAJPEAUICondition@@PEAPEAU2@@Z
    long _RemoveKeysFromCondition(ICondition *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveKeysFromWordwheel@CSuggestFilterWorker@@AEAAJPEAPEAUIFilterCondition@@@Z
    long _RemoveKeysFromWordwheel(IFilterCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReturnInitialResults@CSuggestFilterWorker@@AEAAJXZ
    long _ReturnInitialResults();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSuggestFilterWorker@@EEAA@XZ
    virtual ~CSuggestFilterWorker();
};
