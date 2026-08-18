#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CShellProtectedRegLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CShellProtectedRegLock@@QEAAKPEAUHKEY__@@PEBG_N@Z
    unsigned long Init(HKEY__*, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CShellProtectedRegLock@@QEAAXXZ
    void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CShellProtectedRegLock@@QEAAXXZ
    void Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellProtectedRegLock@@QEAA@XZ
    ~CShellProtectedRegLock();
};
