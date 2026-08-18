#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CPrintersBindInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrintersBindInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrintersBindInfo@@QEAA@KHPEAX@Z
    CPrintersBindInfo(unsigned long, int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookie@CPrintersBindInfo@@UEAAJPEAPEAX@Z
    virtual long GetCookie(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPIDLType@CPrintersBindInfo@@UEAAJPEAK@Z
    virtual long GetPIDLType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidated@CPrintersBindInfo@@UEAAJXZ
    virtual long IsValidated();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrintersBindInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrintersBindInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCookie@CPrintersBindInfo@@UEAAJPEAX@Z
    virtual long SetCookie(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPIDLType@CPrintersBindInfo@@UEAAJK@Z
    virtual long SetPIDLType(unsigned long);
};
