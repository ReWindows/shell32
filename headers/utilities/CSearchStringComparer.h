#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CSearchStringComparer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchStringComparer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareItems@CSearchStringComparer@@UEAAJPEBEH0H@Z
    virtual long CompareItems(unsigned char const *, int, unsigned char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSearchStringComparer@@SAJPEBGAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchStringComparer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchStringComparer@@UEAAKXZ
    virtual unsigned long Release();
};
