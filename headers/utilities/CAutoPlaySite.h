#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CAutoPlaySite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutoPlaySite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoPlaySite@@QEAA@XZ
    CAutoPlaySite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreating@CAutoPlaySite@@UEAAJPEAUICreateProcessInputs@@@Z
    virtual long OnCreating(ICreateProcessInputs *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutoPlaySite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CAutoPlaySite@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoPlaySite@@UEAAKXZ
    virtual unsigned long Release();
};
