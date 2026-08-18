#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CAutoColorImageData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateImageColorizationData@CAutoColorImageData@@QEAAJPEAVCMemoryCachedImage@@@Z
    long CreateImageColorizationData(CMemoryCachedImage *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoColorImageData@@QEAAIXZ
    unsigned int Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoColorImageData@@AEAA@XZ
    ~CAutoColorImageData();
};
