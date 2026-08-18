#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
namespace Interpolators {
class CIncreasingCubicPolynomialSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compute@CIncreasingCubicPolynomialSegment@Interpolators@@QEBAXNPEAN0@Z
    void Compute(double, double *, double *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolveRootUsingBisection@CIncreasingCubicPolynomialSegment@Interpolators@@QEBANNNN@Z
    double SolveRootUsingBisection(double, double, double) const;
};
} // namespace Interpolators
