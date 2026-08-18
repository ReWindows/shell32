#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CNonFileTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepN@CNonFileTable@@QEAAXPEAPEAU_HashTable@@I@Z
    void KeepN(_HashTable * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prune@CNonFileTable@@QEAAXPEAPEAU_HashTable@@H@Z
    void Prune(_HashTable * *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNthElement@CNonFileTable@@AEAAXI@Z
    void FindNthElement(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PartitionOnValue@CNonFileTable@@AEAAXPEAULOOKUP_ENTRY@@IIQEAI@Z
    void _PartitionOnValue(LOOKUP_ENTRY *, unsigned int, unsigned int, unsigned int * const);
};
