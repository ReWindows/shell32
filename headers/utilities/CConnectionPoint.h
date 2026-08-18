#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CConnectionPoint {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConnectionPoint@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CConnectionPoint@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long Advise(IUnknown *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectionPoint@@QEAA@XZ
    CConnectionPoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnections@CConnectionPoint@@UEAAJPEAPEAUIEnumConnections@@@Z
    virtual long EnumConnections(IEnumConnections * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionInterface@CConnectionPoint@@UEAAJPEAU_GUID@@@Z
    virtual long GetConnectionInterface(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionPointContainer@CConnectionPoint@@UEAAJPEAPEAUIConnectionPointContainer@@@Z
    virtual long GetConnectionPointContainer(IConnectionPointContainer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConnectionPoint@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConnectionPoint@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CConnectionPoint@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseAll@CConnectionPoint@@QEAAJXZ
    long UnadviseAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectionPoint@@QEAA@XZ
    ~CConnectionPoint();
};
