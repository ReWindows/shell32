#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class SyncRootHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAnyStorageProvidersRegistered@SyncRootHelpers@Internal@Windows@@YA_NXZ
    bool AreAnyStorageProvidersRegistered();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z
    long GetSyncRootManagerRegistryLocation(unsigned short const * *);
};
} // namespace Windows::Internal
