#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace Interpolators {
class CTileAnimationInterpolator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CTileAnimationInterpolator@Interpolators@@UEBAJPEAN@Z
    virtual long GetTotalDuration(double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTileAnimationInterpolator@Interpolators@@UEAAJNN@Z
    virtual long Initialize(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDuration@CTileAnimationInterpolator@Interpolators@@UEAAJNN@Z
    virtual long InitializeDuration(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateValue@CTileAnimationInterpolator@Interpolators@@QEAAJNPEAN@Z
    long InterpolateValue(double, double *);
};
} // namespace Interpolators
