#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace Interpolators {
class CCubicBezierLinearInterpolator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCubicBezierLinearInterpolator@Interpolators@@QEAA@NNNNNNNN@Z
    CCubicBezierLinearInterpolator(double, double, double, double, double, double, double, double);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateInterpolationValue@CCubicBezierLinearInterpolator@Interpolators@@EEAAJNPEAN@Z
    virtual long _CalculateInterpolationValue(double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SolveTForOffsetFraction@CCubicBezierLinearInterpolator@Interpolators@@AEAAJNPEAN@Z
    long _SolveTForOffsetFraction(double, double *);
};
} // namespace Interpolators
