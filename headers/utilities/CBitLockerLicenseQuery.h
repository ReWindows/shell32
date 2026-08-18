#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CBitLockerLicenseQuery {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceEncryptionOnlySku@CBitLockerLicenseQuery@@SAJPEA_N@Z
    static long IsDeviceEncryptionOnlySku(bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureEnabled@CBitLockerLicenseQuery@@CAJPEBGPEA_N@Z
    static long IsFeatureEnabled(unsigned short const *, bool *);
};
