#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace ShellMRTHelper {
class MRTHelperBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePath@MRTHelperBase@ShellMRTHelper@@QEAAJPEBGPEAPEAG@Z
    long ResolvePath(unsigned short const *, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ
    ~MRTHelperBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ
    long InitializeMRTObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z
    long Resolve(int, unsigned short const *, unsigned short * *);
};
} // namespace ShellMRTHelper
