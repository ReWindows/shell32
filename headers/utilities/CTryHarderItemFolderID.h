#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CTryHarderItemFolderID {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconIndex@CTryHarderItemFolderID@@UEAAJPEAI@Z
    virtual long GetIconIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderItemFolderID@@QEAAJAEBU_GUID@@IIW4TRYHARDERSCOPES@@PEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long Init(_GUID const &, unsigned int, unsigned int, int, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CTryHarderItemFolderID@@UEAAJPEAUIUnknown@@@Z
    virtual long OnInvoke(IUnknown *);
};
