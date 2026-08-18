#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class StorageProviderBanners {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllBanners@StorageProviderBanners@@UEAAJPEBG@Z
    virtual long ClearAllBanners(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBanner@StorageProviderBanners@@UEAAJPEBG0@Z
    virtual long ClearBanner(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBanner@StorageProviderBanners@@UEAAJPEBG0PEAPEAG@Z
    virtual long GetBanner(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBanner@StorageProviderBanners@@UEAAJPEBG00@Z
    virtual long SetBanner(unsigned short const *, unsigned short const *, unsigned short const *);
};
