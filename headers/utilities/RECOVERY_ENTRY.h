#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class RECOVERY_ENTRY {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneFrom@RECOVERY_ENTRY@@QEAAJPEAPEAU_HashTable@@PEBU1@@Z
    long CloneFrom(_HashTable * *, RECOVERY_ENTRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destruct@RECOVERY_ENTRY@@QEAAXPEAPEAU_HashTable@@@Z
    void Destruct(_HashTable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@RECOVERY_ENTRY@@QEAAJPEAUIStream@@PEAPEAU_HashTable@@@Z
    long Load(IStream *, _HashTable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@RECOVERY_ENTRY@@QEAAJPEAUIStream@@@Z
    long Save(IStream *);
};
