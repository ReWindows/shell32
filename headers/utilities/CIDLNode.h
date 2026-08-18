#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CIDLNode {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIDLNode@@QEAA@XZ
    ~CIDLNode();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNode@CIDLNode@@IEAAJHPEFBU_ITEMIDLIST_RELATIVE@@PEAPEAV1@PEAW4IDLDATAF@@@Z
    long GetNode(int, _ITEMIDLIST_RELATIVE & volatile *, CIDLNode * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKid@CIDLNode@@IEAAPEAU?$CLinkedNode@VCIDLNode@@@@PEFBU_ITEMIDLIST_RELATIVE@@@Z
    WindissectOpaque * _GetKid(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSF@CIDLNode@@IEAAJXZ
    long _InitSF();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAll@CIDLNode@@IEAAJXZ
    long _RemoveAll();
};
