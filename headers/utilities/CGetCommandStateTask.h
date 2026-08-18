#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CGetCommandStateTask {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Dispatch@CGetCommandStateTask@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CGetCommandStateTask@@UEAAJXZ
    virtual long DoWork();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CGetCommandStateTask@@AEAAJPEAUIShellFolder@@PEAU_ITEMID_CHILD@@PEAUIExplorerCommand@@PEAUIShellItemArray@@PEAUIUnknown@@AEBU_GUID@@PEAUHWND__@@I@Z
    long SetData(IShellFolder *, _ITEMID_CHILD *, IExplorerCommand *, IShellItemArray *, IUnknown *, _GUID const &, HWND__*, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetCommandStateTask@@EEAA@XZ
    virtual ~CGetCommandStateTask();
};
