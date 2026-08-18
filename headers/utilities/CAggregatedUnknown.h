#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CAggregatedUnknown {
public:
    class CUnkInner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAggregatedUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAggregatedUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAggregatedUnknown@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?v_HandleDelete@CAggregatedUnknown@@MEAAHPEAJ@Z
    virtual int v_HandleDelete(long *);
};
