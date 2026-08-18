#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class COperationStatusTileRateChartAccessibilityHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterIndeterminateMode@COperationStatusTileRateChartAccessibilityHelper@@QEAAJXZ
    long EnterIndeterminateMode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterModeCore@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateChartModes@1@@Z
    long _EnterModeCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExitModeCore@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateChartModes@1@@Z
    long _ExitModeCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlagFromMode@COperationStatusTileRateChartAccessibilityHelper@@AEAA?AW4RateChartModeFlags@1@W4RateChartModes@1@@Z
    int _FlagFromMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetModeCaption@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateChartModes@1@@Z
    long _SetModeCaption(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStateCaption@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateChartStates@1@@Z
    long _SetStateCaption(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToRateTypeCore@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateTypes@1@@Z
    long _SetToRateTypeCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToState@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateChartStates@1@@Z
    long _SetToState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccessibilityCaption@COperationStatusTileRateChartAccessibilityHelper@@AEAAJIN@Z
    long _UpdateAccessibilityCaption(unsigned int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTargetElement@COperationStatusTileRateChartAccessibilityHelper@@AEAAJPEBG@Z
    long _UpdateTargetElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTargetElementMarqueedState@COperationStatusTileRateChartAccessibilityHelper@@AEAAJW4RateChartModes@1@@Z
    long _UpdateTargetElementMarqueedState(int);
};
