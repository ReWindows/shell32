#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CDrvExtIconBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractW@CDrvExtIconBase@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long _ExtractW(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconLocationW@CDrvExtIconBase@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long _GetIconLocationW(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPlainIconLocation@CDrvExtIconBase@@AEAAJPEAGIPEAHPEAI@Z
    long _GetPlainIconLocation(unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrvExtIconBase@@EEAA@XZ
    virtual ~CDrvExtIconBase();
};
