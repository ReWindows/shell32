#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CSafeServiceSite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSafeServiceSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeServiceSite@@QEAA@XZ
    CSafeServiceSite();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CSafeServiceSite@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CSafeServiceSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CSafeServiceSite@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSafeServiceSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSafeServiceSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSafeServiceSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSite@CSafeServiceSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
};
