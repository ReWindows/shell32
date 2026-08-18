#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class MVPTOKENDATA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@MVPTOKENDATA@@QEAAJPEBU1@@Z
    long CopyFrom(MVPTOKENDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@MVPTOKENDATA@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DestroyCallback@MVPTOKENDATA@@SAHPEAU1@PEAX@Z
    static int s_DestroyCallback(MVPTOKENDATA *, void *);
};
