#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CFrameModule {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CFrameModule@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameModule@@QEAA@XZ
    CFrameModule();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CFrameModule@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModuleID@CFrameModule@@UEAAJPEAPEAG@Z
    virtual long GetModuleID(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFrameModule@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CFrameModule@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CFrameModule@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerObject@CFrameModule@@UEAAJPEAUIUnknown@@@Z
    virtual long SetInnerObject(IUnknown *);
};
