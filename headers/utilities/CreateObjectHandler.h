#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CreateObjectHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateObject@CreateObjectHandler@@UEAAJAEBU_GUID@@PEAUIUnknown@@0PEAPEAX@Z
    virtual long CreateObject(_GUID const &, IUnknown *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateObjectHandler@@UEAA@XZ
    virtual ~CreateObjectHandler();
};
