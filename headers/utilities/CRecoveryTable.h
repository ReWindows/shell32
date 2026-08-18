#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CRecoveryTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertGILtoRE@CRecoveryTable@@SAII@Z
    static unsigned int ConvertGILtoRE(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertREtoGIL@CRecoveryTable@@SAII@Z
    static unsigned int ConvertREtoGIL(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CRecoveryTable@@QEAAJPEAUIStream@@PEAPEAU_HashTable@@@Z
    long Load(IStream *, _HashTable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetContent@CRecoveryTable@@QEAAXPEAPEAU_HashTable@@@Z
    void ResetContent(_HashTable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRecoveryTable@@QEAA@XZ
    ~CRecoveryTable();
};
