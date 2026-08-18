#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CResultsMenuCB {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResultsMenuCB@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResultsMenuCB@@QEAA@XZ
    CResultsMenuCB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CResultsMenuCB@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResultsMenuCB@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResultsMenuCB@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResultsMenuCB@@EEAA@XZ
    virtual ~CResultsMenuCB();
};
