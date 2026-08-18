#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
// Base evidence: CElementWithIUnknown (likely; classinfo-template-instantiation).
class CElementWithSite {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CElementWithSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CElementWithSite@@QEAA@XZ
    CElementWithSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CElementWithSite@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistStream@CElementWithSite@@QEAAJHKPEAPEAUIStream@@@Z
    long GetPersistStream(int, unsigned long, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CElementWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CElementWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CElementWithSite@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CElementWithSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CElementWithSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CElementWithSite@@MEAA@XZ
    virtual ~CElementWithSite();
};
