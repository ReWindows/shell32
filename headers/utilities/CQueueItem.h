#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CQueueItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CQueueItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AppliesTo@CQueueItem@@UEAAJPEAUIUnknown@@@Z
    virtual long AppliesTo(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CQueueItem@@QEAA@XZ
    CQueueItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDispatchable@CQueueItem@@UEAAJXZ
    virtual long IsDispatchable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CQueueItem@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CQueueItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CQueueItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUndispatchable@CQueueItem@@UEAAJXZ
    virtual long SetUndispatchable();
};
