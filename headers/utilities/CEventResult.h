#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CEventResult {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CEventResult@@SAJHPEAPEAV1@@Z
    static long CreateInstance(int, CEventResult * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEventResult@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalDone@CEventResult@@QEAAXJ@Z
    void SignalDone(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wait@CEventResult@@QEAAJHKPEAH@Z
    long Wait(int, unsigned long, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEventResult@@QEAA@XZ
    ~CEventResult();
};
