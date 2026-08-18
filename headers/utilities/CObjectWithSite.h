#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CObjectWithSite {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectWithSite@@QEAA@XZ
    CObjectWithSite();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectWithSite@@QEAA@PEAUIUnknown@@@Z
    CObjectWithSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CObjectWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CObjectWithSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectWithSite@@UEAA@XZ
    virtual ~CObjectWithSite();
};
