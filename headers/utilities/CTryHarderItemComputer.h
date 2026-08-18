#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CTryHarderItemComputer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderItemComputer@@QEAAJPEAUIShellItem@@IIH@Z
    long Init(IShellItem *, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CTryHarderItemComputer@@UEAAJPEAUIUnknown@@@Z
    virtual long OnInvoke(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTryHarderKnownFolderIDList@CTryHarderItemComputer@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GetTryHarderKnownFolderIDList(_ITEMIDLIST_ABSOLUTE * *);
};
