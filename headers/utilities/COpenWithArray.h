#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class COpenWithArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillArray@COpenWithArray@@QEAAJPEBG@Z
    long FillArray(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithArray@@QEAA@XZ
    ~COpenWithArray();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteAppInfo@COpenWithArray@@CAHPEAVCAppInfo@@PEAX@Z
    static int _DeleteAppInfo(CAppInfo *, void *);
};
