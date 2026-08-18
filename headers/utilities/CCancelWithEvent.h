#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CCancelWithEvent {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCancelWithEvent@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCancelWithEvent@@QEAA@XZ
    CCancelWithEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CCancelWithEvent@@UEAAJK@Z
    virtual long Cancel(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCancelWithEvent@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCancelWithEvent@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestCancel@CCancelWithEvent@@UEAAJXZ
    virtual long TestCancel();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCancelWithEvent@@AEAA@XZ
    ~CCancelWithEvent();
};
