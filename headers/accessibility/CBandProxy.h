#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CBandProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBandProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBandProxy@@QEAA@XZ
    CBandProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewWindow@CBandProxy@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateNewWindow(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserWindow@CBandProxy@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetBrowserWindow(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@CBandProxy@@UEAAJXZ
    virtual long IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPIDL@CBandProxy@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUtagVARIANT@@@Z
    virtual long NavigateToPIDL(_ITEMIDLIST_ABSOLUTE const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToURL@CBandProxy@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long NavigateToURL(unsigned short const *, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBandProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CBandProxy@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBandProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CBandProxy@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBrowser@CBandProxy@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetBrowser(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeBrowserVisible@CBandProxy@@AEAAJPEAUIUnknown@@@Z
    long _MakeBrowserVisible(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandProxy@@EEAA@XZ
    virtual ~CBandProxy();
};
