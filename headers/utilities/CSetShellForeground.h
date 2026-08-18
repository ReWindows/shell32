#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CSetShellForeground {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSetShellForeground@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSetShellForeground@@QEAA@XZ
    CSetShellForeground();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSetShellForeground@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSetShellForeground@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellForeground@CSetShellForeground@@UEAAJXZ
    virtual long SetShellForeground();
};
