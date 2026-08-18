#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class COperationStatusServiceTimer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@COperationStatusServiceTimer@@QEAAJXZ
    long Set();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToHumanMode@COperationStatusServiceTimer@@QEAAJXZ
    long SetToHumanMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@COperationStatusServiceTimer@@SAJPEAUHWND__@@PEAPEAV1@@Z
    static long s_CreateInstance(HWND__*, COperationStatusServiceTimer * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KillTimerIfNeeded@COperationStatusServiceTimer@@AEAAJXZ
    long _KillTimerIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTimerIfNeeded@COperationStatusServiceTimer@@AEAAJW4SetTimerOptions@1@@Z
    long _SetTimerIfNeeded(int);
};
