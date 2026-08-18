#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CUACount {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CUACount@@QEAAIW4_tagCOUNTTYPE@@@Z
    unsigned int GetCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CUACount@@QEAAJPEAVIUASession@@@Z
    long Initialize(IUASession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFrom@CUACount@@QEAAJPEBUFNNRW3@@PEAUNRWINFO@@@Z
    long LoadFrom(FNNRW3const *, NRWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveTo@CUACount@@QEAAJHPEBUFNNRW3@@PEAUNRWINFO@@@Z
    long SaveTo(int, FNNRW3const *, NRWINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCount@CUACount@@QEAAXW4_tagCOUNTTYPE@@I@Z
    void SetCount(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Snap_r0_Value@CUACount@@QEAAXXZ
    void Snap_r0_Value();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFileTime@CUACount@@QEAAXXZ
    void UpdateFileTime();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcWeightedAverage@CUACount@@IEAAMM@Z
    float _CalcWeightedAverage(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Calculate_r0@CUACount@@IEAAMXZ
    float _Calculate_r0();
};
