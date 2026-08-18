#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CIDLTree {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@CIDLTree@@QEAAJW4IDLDATAF@@PEBU_ITEMIDLIST_ABSOLUTE@@_JPEAPEAVCIDLNode@@@Z
    long AddData(int, _ITEMIDLIST_ABSOLUTE const *, int64_t, CIDLNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchOne@CIDLTree@@QEAAJW4IDLDATAF@@PEBU_ITEMIDLIST_ABSOLUTE@@PEA_JPEAPEAU3@@Z
    long MatchOne(int, _ITEMIDLIST_ABSOLUTE const *, int64_t *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveData@CIDLTree@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@_J@Z
    long RemoveData(_ITEMIDLIST_ABSOLUTE const *, int64_t);
};
