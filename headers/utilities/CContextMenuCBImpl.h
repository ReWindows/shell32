#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CContextMenuCBImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContextMenuCBImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextMenuCBImpl@@QEAA@P6AJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z@Z
    CContextMenuCBImpl(long ( *)(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CContextMenuCBImpl@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContextMenuCBImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextMenuCBImpl@@UEAAKXZ
    virtual unsigned long Release();
};
