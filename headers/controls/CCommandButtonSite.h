#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CCommandButtonSite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommandButtonSite@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CCommandButtonSite@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRect@CCommandButtonSite@@UEAAJPEAUtagRECT@@@Z
    virtual long GetRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CCommandButtonSite@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommandButtonSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CCommandButtonSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommandButtonSite@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CCommandButtonSite@@SAJPEAUIUnknown@@PEAUHWND__@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(IUnknown *, HWND__*, tagRECT, _GUID const &, void * *);
};
