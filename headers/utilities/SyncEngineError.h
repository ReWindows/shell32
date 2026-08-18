#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class SyncEngineError {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsError@SyncEngineError@@YA_NW4StateFlags@1@@Z
    bool IsError(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfflineModeError@SyncEngineError@@YA_NW4StateFlags@1@J@Z
    bool IsOfflineModeError(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapHresultToSyncEngineError@SyncEngineError@@YA?AW4Error@1@J@Z
    int MapHresultToSyncEngineError(long);
};
