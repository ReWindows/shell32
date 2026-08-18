#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
class CControlPanelNavModule {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CControlPanelNavModule@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CControlPanelNavModule@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CControlPanelNavModule@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelNavModule@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CControlPanelNavModule@@UEAAKXZ
    virtual unsigned long Release();
};
