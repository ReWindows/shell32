#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CDefBackgroundMenuCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefBackgroundMenuCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefBackgroundMenuCB@@QEAA@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    CDefBackgroundMenuCB(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CDefBackgroundMenuCB@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefBackgroundMenuCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefBackgroundMenuCB@@UEAAKXZ
    virtual unsigned long Release();
};
