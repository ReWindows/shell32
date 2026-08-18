#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CFilterWorkerItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFilterWorkerItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilterWorkerItem@@QEAA@XZ
    CFilterWorkerItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CFilterWorkerItem@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterCondition@CFilterWorkerItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetFilterCondition(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CFilterWorkerItem@@UEAAJPEAW4FISFLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrigFlags@CFilterWorkerItem@@UEAAJPEAW4FISFLAGS@@@Z
    virtual long GetOrigFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFilterWorkerItem@@UEAAJHW4FISFLAGS@@PEAUIFilterCondition@@@Z
    virtual long Init(int, int, IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFlags@CFilterWorkerItem@@UEAAJW4FISFLAGS@@@Z
    virtual long InitFlags(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFilterWorkerItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFilterWorkerItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CFilterWorkerItem@@UEAAJW4FISFLAGS@@@Z
    virtual long SetFlags(int);
};
