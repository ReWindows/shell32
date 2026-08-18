#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CBrowserProgressAggregatorConnector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CBrowserProgressAggregatorConnector@@QEAAJXZ
    long Activate();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrowserProgressAggregatorConnector@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrowserProgressAggregatorConnector@@QEAA@XZ
    CBrowserProgressAggregatorConnector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelInform@CBrowserProgressAggregatorConnector@@UEAAJAEBU_GUID@@@Z
    virtual long CancelInform(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelProgressUI@CBrowserProgressAggregatorConnector@@UEAAJXZ
    virtual long CancelProgressUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Inform@CBrowserProgressAggregatorConnector@@UEAAJPEAUIInfoBarMessage@@@Z
    virtual long Inform(IInfoBarMessage *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrowserProgressAggregatorConnector@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CBrowserProgressAggregatorConnector@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long Register(_GUID const &, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrowserProgressAggregatorConnector@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CBrowserProgressAggregatorConnector@@UEAAJAEBU_GUID@@K@Z
    virtual long Unregister(_GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProgress@CBrowserProgressAggregatorConnector@@UEAAJAEBU_GUID@@KKK@Z
    virtual long UpdateProgress(_GUID const &, unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CBrowserProgressAggregatorConnector@@UEAAJAEBU_GUID@@KW4tagBPASCODE@@@Z
    virtual long UpdateState(_GUID const &, unsigned long, int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrowserProgressAggregatorConnector@@EEAA@XZ
    virtual ~CBrowserProgressAggregatorConnector();
};
