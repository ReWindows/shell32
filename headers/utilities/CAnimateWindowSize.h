#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CAnimateWindowSize {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimateWindowSize@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateWindowSize@CAnimateWindowSize@@UEAAJPEAUHWND__@@UtagSIZE@@1KW4AWSTYPE@@I@Z
    virtual long AnimateWindowSize(HWND__*, tagSIZE, tagSIZE, unsigned long, int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimateWindowSize@@QEAA@XZ
    CAnimateWindowSize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimateWindowSize@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimateWindowSize@@UEAAKXZ
    virtual unsigned long Release();
};
