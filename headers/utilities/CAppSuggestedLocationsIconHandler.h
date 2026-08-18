#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CAppSuggestedLocationsIconHandler {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDelegate@CAppSuggestedLocationsIconHandler@@AEAAJXZ
    long _EnsureDelegate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractW@CAppSuggestedLocationsIconHandler@@EEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long _ExtractW(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconLocationW@CAppSuggestedLocationsIconHandler@@EEAAJIPEAGIPEAHPEAI@Z
    virtual long _GetIconLocationW(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppSuggestedLocationsIconHandler@@EEAA@XZ
    virtual ~CAppSuggestedLocationsIconHandler();
};
