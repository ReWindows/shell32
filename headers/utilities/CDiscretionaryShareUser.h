#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CDiscretionaryShareUser {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDiscretionaryShareUser@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDiscretionaryShareUser@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDiscretionaryShareUser@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetXPMap@CDiscretionaryShareUser@@MEAAJPEAPEBUXMLPROP_ITEM@@@Z
    virtual long _GetXPMap(XMLPROP_ITEM const * *);
};
