#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CExtractIconWForA {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExtractIconWForA@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CExtractIconWForA@@UEAAJPEBDIPEAPEAUHICON__@@1I@Z
    virtual long Extract(char const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CExtractIconWForA@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CExtractIconWForA@@UEAAJIPEADIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, char *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CExtractIconWForA@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExtractIconWForA@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExtractIconWForA@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExtractIconWForA@@AEAA@XZ
    ~CExtractIconWForA();
};
