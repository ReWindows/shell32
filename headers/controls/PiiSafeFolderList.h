#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class PiiSafeFolderList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PiiSafeFolderList@@QEAAXXZ
    void Initialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PiiSafeFolderList@@QEAA@XZ
    PiiSafeFolderList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnMatchingKnownFolder@PiiSafeFolderList@@QEAAPEBVPiiSafeKnownFolder@@QEBG@Z
    PiiSafeKnownFolder const * ReturnMatchingKnownFolder(unsigned short const * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PiiSafeFolderList@@QEAA@XZ
    ~PiiSafeFolderList();
};
