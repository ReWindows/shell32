#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CClientExtractIconCB {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CClientExtractIconCB@@QEAA@XZ
    CClientExtractIconCB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBack@CClientExtractIconCB@@UEAAJPEAUIShellFolder@@PEAUHWND__@@PEAUIDataObject@@I_K_J@Z
    virtual long CallBack(IShellFolder *, HWND__*, IDataObject *, unsigned int, uint64_t, int64_t);
};
