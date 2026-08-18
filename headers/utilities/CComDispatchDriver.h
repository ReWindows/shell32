#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace ATL {
class CComDispatchDriver {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CComDispatchDriver@ATL@@SAJPEAUIDispatch@@JPEAUtagVARIANT@@@Z
    static long GetProperty(IDispatch *, long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutProperty@CComDispatchDriver@ATL@@SAJPEAUIDispatch@@JPEAUtagVARIANT@@@Z
    static long PutProperty(IDispatch *, long, tagVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComDispatchDriver@ATL@@QEAA@XZ
    ~CComDispatchDriver();
};
} // namespace ATL
