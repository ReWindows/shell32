#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CMyDocsFolderLinkResolver {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMyDocsFolderLinkResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMyDocsFolderLinkResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMyDocsFolderLinkResolver@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ResolveShellLink@CMyDocsFolderLinkResolver@@UEAAJPEAUIUnknown@@PEAUHWND__@@K@Z
    virtual long ResolveShellLink(IUnknown *, HWND__*, unsigned long);
};
