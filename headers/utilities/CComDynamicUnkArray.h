#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace ATL {
class CComDynamicUnkArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CComDynamicUnkArray@ATL@@QEAAKPEAUIUnknown@@@Z
    unsigned long Add(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?end@CComDynamicUnkArray@ATL@@QEAAPEAPEAUIUnknown@@XZ
    IUnknown * * end();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComDynamicUnkArray@ATL@@QEAA@XZ
    ~CComDynamicUnkArray();
};
} // namespace ATL
