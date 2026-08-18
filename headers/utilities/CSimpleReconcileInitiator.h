#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CSimpleReconcileInitiator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleReconcileInitiator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSimpleReconcileInitiator@@SAJP6AJ_JKK@Z0AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(long ( *)(int64_t, unsigned long, unsigned long), int64_t, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?FindVersion@CSimpleReconcileInitiator@@UEAAJPEAU_GUID@@PEAPEAUIMoniker@@@Z
    virtual long FindVersion(_GUID *, IMoniker * *);
    // Category: Method | Source: PE Export
    // Symbol: ?FindVersionFromGraph@CSimpleReconcileInitiator@@UEAAJPEAUtagVERGRAPH@@PEAU_GUID@@PEAPEAUIMoniker@@@Z
    virtual long FindVersionFromGraph(tagVERGRAPH *, _GUID *, IMoniker * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleReconcileInitiator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleReconcileInitiator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbortCallback@CSimpleReconcileInitiator@@UEAAJPEAUIUnknown@@@Z
    virtual long SetAbortCallback(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressFeedback@CSimpleReconcileInitiator@@UEAAJKK@Z
    virtual long SetProgressFeedback(unsigned long, unsigned long);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpleReconcileInitiator@@AEAA@P6AJ_JKK@Z0@Z
    CSimpleReconcileInitiator(long ( *)(int64_t, unsigned long, unsigned long), int64_t);
};
