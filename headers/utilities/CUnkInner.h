#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace CAggregatedUnknown {
class CUnkInner {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUnkInner@CAggregatedUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUnkInner@CAggregatedUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUnkInner@CAggregatedUnknown@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CAggregatedUnknown
