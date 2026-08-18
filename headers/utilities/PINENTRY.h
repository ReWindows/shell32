#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class PINENTRY {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z
    static int DestroyCallback(PINENTRY *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destruct@PINENTRY@@QEAAXXZ
    void Destruct();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellLink@PINENTRY@@QEAAJXZ
    long UpdateShellLink();
};
