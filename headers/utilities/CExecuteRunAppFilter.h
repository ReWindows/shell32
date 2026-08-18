#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CExecuteRunAppFilter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExecuteRunAppFilter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExecuteRunAppFilter@@QEAA@PEAPEAX@Z
    CExecuteRunAppFilter(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@CExecuteRunAppFilter@@UEAAJPEAUICreateProcessOutputs@@@Z
    virtual long OnCreated(ICreateProcessOutputs *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExecuteRunAppFilter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CExecuteRunAppFilter@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExecuteRunAppFilter@@UEAAKXZ
    virtual unsigned long Release();
};
