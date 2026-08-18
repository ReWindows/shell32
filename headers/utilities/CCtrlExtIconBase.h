#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CCtrlExtIconBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractW@CCtrlExtIconBase@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long _ExtractW(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconLocationW@CCtrlExtIconBase@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long _GetIconLocationW(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCtrlExtIconBase@@MEAA@XZ
    virtual ~CCtrlExtIconBase();
};
