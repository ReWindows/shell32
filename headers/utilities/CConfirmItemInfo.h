#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace ConfirmationUIUtils {
class CConfirmItemInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConfirmItemInfo@ConfirmationUIUtils@@QEAA@XZ
    CConfirmItemInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CConfirmItemInfo@ConfirmationUIUtils@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CConfirmItemInfo@ConfirmationUIUtils@@QEAAJPEAUIShellItem@@HH@Z
    long Load(IShellItem *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConfirmItemInfo@ConfirmationUIUtils@@QEAA@XZ
    ~CConfirmItemInfo();
};
} // namespace ConfirmationUIUtils
