#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CControlPanelEnumHandlers {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CControlPanelEnumHandlers@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelEnumHandlers@@QEAA@XZ
    CControlPanelEnumHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CControlPanelEnumHandlers@@UEAAJKPEAPEAUIAssocHandler@@PEAK@Z
    virtual long Next(unsigned long, IAssocHandler * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelEnumHandlers@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelEnumHandlers@@UEAAKXZ
    virtual unsigned long Release();
};
