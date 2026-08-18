#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CExtractIconBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExtractIconBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExtractIconBase@@QEAA@XZ
    CExtractIconBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CExtractIconBase@@UEAAJPEBDIPEAPEAUHICON__@@1I@Z
    virtual long Extract(char const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CExtractIconBase@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CExtractIconBase@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CExtractIconBase@@UEAAJIPEADIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, char *, unsigned int, int *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExtractIconBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExtractIconBase@@UEAAKXZ
    virtual unsigned long Release();
};
