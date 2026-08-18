#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CRestoreLibrariesExecute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CRestoreLibrariesExecute@@UEAAJXZ
    virtual long Execute();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RestoreKnownLibrary@CRestoreLibrariesExecute@@CAXAEBU_GUID@@PEAUIKnownFolder@@PEBG2@Z
    static void s_RestoreKnownLibrary(_GUID const &, IKnownFolder *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RestoreLibraries@CRestoreLibrariesExecute@@CAKPEAX@Z
    static unsigned long s_RestoreLibraries(void *);
};
