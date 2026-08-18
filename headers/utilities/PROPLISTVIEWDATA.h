#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class PROPLISTVIEWDATA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PROPLISTVIEWDATA@@SAJPEAUIPropertyStoreCapabilities@@PEAUIPropertyDescription@@PEAUIPropertyValue@@PEAPEAU1@@Z
    static long Create(IPropertyStoreCapabilities *, IPropertyDescription *, IPropertyValue *, PROPLISTVIEWDATA * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PROPLISTVIEWDATA@@SAXPEAU1@@Z
    static void Destroy(PROPLISTVIEWDATA *);
};
