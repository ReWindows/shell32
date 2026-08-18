#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class COperationStatusTileProgressTimer {
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COperationStatusTileProgressTimer@@AEAA@PEAVElement@DirectUI@@@Z
    COperationStatusTileProgressTimer(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AlertTimer@COperationStatusTileProgressTimer@@AEAAXW4AlertTimerOptions@1@@Z
    void _AlertTimer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AlertTimerCore@COperationStatusTileProgressTimer@@AEAAXNNINNI@Z
    void _AlertTimerCore(double, double, unsigned int, double, double, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideCore@COperationStatusTileProgressTimer@@AEAAJXZ
    long _HideCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResumeCore@COperationStatusTileProgressTimer@@AEAAJW4ResumeFlags@1@@Z
    long _ResumeCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCalculatingMessage@COperationStatusTileProgressTimer@@AEAAJXZ
    long _SetCalculatingMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowCore@COperationStatusTileProgressTimer@@AEAAJW4ShowOptions@1@@Z
    long _ShowCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SuspendCore@COperationStatusTileProgressTimer@@AEAAJW4SuspendFlags@1@@Z
    long _SuspendCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSustainedState@COperationStatusTileProgressTimer@@AEAAXXZ
    void _UpdateSustainedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTimeRemaining@COperationStatusTileProgressTimer@@AEAAJXZ
    long _UpdateTimeRemaining();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTimerState@COperationStatusTileProgressTimer@@AEAAX_K00000N@Z
    void _UpdateTimerState(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, double);
};
