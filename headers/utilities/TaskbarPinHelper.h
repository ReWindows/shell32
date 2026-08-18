#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class TaskbarPinHelper {
public:
    class Impl;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z
    long GetTaskbarPinnableItem(IShellItem *, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST_RELATIVE@@@Z
    bool IsPlaceholderPin(_ITEMIDLIST_RELATIVE & volatile *);
};
