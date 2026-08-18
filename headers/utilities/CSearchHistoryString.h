#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CSearchHistoryString {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchHistoryString@@QEAA@XZ
    CSearchHistoryString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromQueryString@CSearchHistoryString@@QEAAJPEBG0@Z
    long FromQueryString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateStoreEntry@CSearchHistoryString@@QEAAJPEAPEAEPEAK@Z
    long GenerateStoreEntry(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompletedWithEditDistance@CSearchHistoryString@@QEBA_NPEBGAEBV1@PEAH@Z
    bool IsCompletedWithEditDistance(unsigned short const *, CSearchHistoryString const &, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchHistoryString@@QEAA@XZ
    ~CSearchHistoryString();
};
