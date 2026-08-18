#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CObjectSafety {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectSafety@@QEAA@XZ
    CObjectSafety();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfaceSafetyOptions@CObjectSafety@@UEAAJAEBU_GUID@@PEAK1@Z
    virtual long GetInterfaceSafetyOptions(_GUID const &, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterfaceSafetyOptions@CObjectSafety@@UEAAJAEBU_GUID@@KK@Z
    virtual long SetInterfaceSafetyOptions(_GUID const &, unsigned long, unsigned long);
};
