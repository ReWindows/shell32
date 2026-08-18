#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class DeviceCapabilitiesW {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenPresentMatchingSizeCondition@DeviceCapabilitiesW@Internal@Windows@@YA_NMW4tagCONDITION_OPERATION@@@Z
    bool IsScreenPresentMatchingSizeCondition(float, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z
    bool IsScreenSizeRequirementMet(int);
};
} // namespace Windows::Internal
