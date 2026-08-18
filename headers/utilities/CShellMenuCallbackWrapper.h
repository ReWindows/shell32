#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CShellMenuCallbackWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellMenuCallbackWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackSM@CShellMenuCallbackWrapper@@UEAAJPEAUtagSMDATA@@I_K_J@Z
    virtual long CallbackSM(tagSMDATA *, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CShellMenuCallbackWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellMenuCallbackWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellMenuCallbackWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CShellMenuCallbackWrapper@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellMenuCallbackWrapper@@EEAA@XZ
    virtual ~CShellMenuCallbackWrapper();
};
