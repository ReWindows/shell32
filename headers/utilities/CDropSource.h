#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CDropSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDropSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveFeedback@CDropSource@@UEAAJK@Z
    virtual long GiveFeedback(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinueDrag@CDropSource@@UEAAJHK@Z
    virtual long QueryContinueDrag(int, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDropSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDropSource@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDropSource@@AEAA@XZ
    ~CDropSource();
};
