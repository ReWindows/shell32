#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CEmptyRecycleBinState {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEmptyRecycleBinState@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEmptyRecycleBinState@@QEAA@XZ
    CEmptyRecycleBinState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CEmptyRecycleBinState@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEmptyRecycleBinState@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEmptyRecycleBinState@@UEAAKXZ
    virtual unsigned long Release();
};
