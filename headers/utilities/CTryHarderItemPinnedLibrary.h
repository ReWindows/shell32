#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CTryHarderItemPinnedLibrary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderItemPinnedLibrary@@QEAAJPEAUIShellItem@@HPEBG1@Z
    long Init(IShellItem *, int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CTryHarderItemPinnedLibrary@@UEAAJPEAUIUnknown@@@Z
    virtual long OnInvoke(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildAutoList@CTryHarderItemPinnedLibrary@@AEAAJPEAU_ITEMIDLIST_ABSOLUTE@@PEAPEAU2@@Z
    long _BuildAutoList(_ITEMIDLIST_ABSOLUTE *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTryHarderItemPinnedLibrary@@EEAA@XZ
    virtual ~CTryHarderItemPinnedLibrary();
};
