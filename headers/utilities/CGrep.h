#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CGrep {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrepText@CGrep@@QEAAJAEBUtagSTAT_CHUNK@@PEAVCConditionEvaluator@@PEAW4TRIBIT@@@Z
    long GrepText(tagSTAT_CHUNK const &, CConditionEvaluator *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGrep@@QEAA@XZ
    ~CGrep();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesTextPropertyMatchCondition@CGrep@@AEAAJPEAUICondition@@AEBUtagPROPVARIANT@@PEAVCConditionEvaluator@@PEAH@Z
    long _DoesTextPropertyMatchCondition(ICondition *, tagPROPVARIANT const &, CConditionEvaluator *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureChunkBufferCapacity@CGrep@@AEAAJXZ
    long _EnsureChunkBufferCapacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextTextBlock@CGrep@@AEAAJXZ
    long _GetNextTextBlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeChunkBuffer@CGrep@@AEAAJXZ
    long _InitializeChunkBuffer();
};
