#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CDefFolderMenuCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDefFolderMenuCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefFolderMenuCallback@@QEAA@XZ
    CDefFolderMenuCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CDefFolderMenuCallback@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDefFolderMenuCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDefFolderMenuCallback@@UEAAKXZ
    virtual unsigned long Release();
};
