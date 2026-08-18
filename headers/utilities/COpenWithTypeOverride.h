#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class COpenWithTypeOverride {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenWithTypeOverride@COpenWithTypeOverride@@UEAAJPEAPEAG@Z
    virtual long GetOpenWithTypeOverride(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@COpenWithTypeOverride@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithTypeOverride@@UEAA@XZ
    virtual ~COpenWithTypeOverride();
};
