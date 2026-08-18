#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CISFMenuCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CISFMenuCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackSM@CISFMenuCallback@@UEAAJPEAUtagSMDATA@@I_K_J@Z
    virtual long CallbackSM(tagSMDATA *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CISFMenuCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CISFMenuCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CISFMenuCallback@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetObject@CISFMenuCallback@@AEAAJPEAUtagSMDATA@@AEBU_GUID@@PEAPEAX@Z
    long _GetObject(tagSMDATA *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSFInfo@CISFMenuCallback@@AEAAJPEAUtagSMDATA@@PEAUtagSMINFO@@@Z
    long _GetSFInfo(tagSMDATA *, tagSMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetObject@CISFMenuCallback@@AEAAJPEAUtagSMDATA@@AEBU_GUID@@PEAPEAX@Z
    long _SetObject(tagSMDATA *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CISFMenuCallback@@EEAA@XZ
    virtual ~CISFMenuCallback();
};
