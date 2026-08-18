#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class COperationStatusTileCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocations@COperationStatusTileCache@@QEAAJPEAPEAUIShellItem@@0@Z
    long GetLocations(IShellItem * *, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgressValues@COperationStatusTileCache@@QEAAJPEA_K00000@Z
    long GetProgressValues(uint64_t *, uint64_t *, uint64_t *, uint64_t *, uint64_t *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COperationStatusTileCache@@QEAA@XZ
    ~COperationStatusTileCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeIfNeeded@COperationStatusTileCache@@AEAAJW4OPERATION_STATUS_DATA_DIRTY_FLAGS@@@Z
    long _InitializeIfNeeded(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshCachedValues@COperationStatusTileCache@@AEAAJW4OPERATION_STATUS_DATA_DIRTY_FLAGS@@@Z
    long _RefreshCachedValues(int);
};
