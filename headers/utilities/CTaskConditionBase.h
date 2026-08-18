#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CTaskConditionBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskConditionBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskConditionBase@@QEAA@XZ
    CTaskConditionBase();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskConditionBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskConditionBase@@UEAAKXZ
    virtual unsigned long Release();
};
