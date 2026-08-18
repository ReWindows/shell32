#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class COperationDataProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COperationDataProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyFlags@COperationDataProvider@@UEAAJPEAW4OPERATION_STATUS_DATA_DIRTY_FLAGS@@@Z
    virtual long GetDirtyFlags(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COperationDataProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCurrentItem@COperationDataProvider@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long ReadCurrentItem(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDestination@COperationDataProvider@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long ReadDestination(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLocations@COperationDataProvider@@UEAAJPEAPEAUIShellItem@@0@Z
    virtual long ReadLocations(IShellItem * *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadProgressValues@COperationDataProvider@@UEAAJPEA_K00000@Z
    virtual long ReadProgressValues(uint64_t *, uint64_t *, uint64_t *, uint64_t *, uint64_t *, uint64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COperationDataProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCurrentItem@COperationDataProvider@@UEAAJPEAUIShellItem@@@Z
    virtual long WriteCurrentItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLocations@COperationDataProvider@@UEAAJPEAUIShellItem@@0@Z
    virtual long WriteLocations(IShellItem *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteProgressValues@COperationDataProvider@@UEAAJ_K00000@Z
    virtual long WriteProgressValues(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COperationDataProvider@@AEAA@XZ
    ~COperationDataProvider();
};
