#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CSHAccessibleHWNDBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSHAccessibleHWNDBase@@QEAA@XZ
    CSHAccessibleHWNDBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?accHitTest@CSHAccessibleHWNDBase@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accLocation@CSHAccessibleHWNDBase@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?accSelect@CSHAccessibleHWNDBase@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accFocus@CSHAccessibleHWNDBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accParent@CSHAccessibleHWNDBase@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accSelection@CSHAccessibleHWNDBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@CSHAccessibleHWNDBase@@UEAAJUtagVARIANT@@PEAU2@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
};
