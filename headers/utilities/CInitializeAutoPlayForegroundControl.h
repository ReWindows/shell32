#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CInitializeAutoPlayForegroundControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInitializeAutoPlayForegroundControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInitializeAutoPlayForegroundControl@@QEAA@XZ
    CInitializeAutoPlayForegroundControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTrustedComponentForegroundControl@CInitializeAutoPlayForegroundControl@@UEAAJPEAUITrustedComponentForegroundControl@@@Z
    virtual long InitializeTrustedComponentForegroundControl(ITrustedComponentForegroundControl *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInitializeAutoPlayForegroundControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInitializeAutoPlayForegroundControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownTrustedComponentForegroundControl@CInitializeAutoPlayForegroundControl@@UEAAJXZ
    virtual long ShutdownTrustedComponentForegroundControl();
};
