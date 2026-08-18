#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CExecuteTypeDelegator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExecuteTypeDelegator@@QEAA@XZ
    CExecuteTypeDelegator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteTypeDelegator@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CExecuteTypeDelegator@@UEAAJPEAW4AHE_TYPE@@@Z
    virtual long GetValue(int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelegateExecuteBasedOnType@CExecuteTypeDelegator@@AEAAJPEAUIShellItem@@PEBG@Z
    long _DelegateExecuteBasedOnType(IShellItem *, unsigned short const *);
};
