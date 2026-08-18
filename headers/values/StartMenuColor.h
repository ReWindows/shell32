#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class StartMenuColor {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLuminanceCap@StartMenuColor@@YAKK@Z
    unsigned long ApplyLuminanceCap(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeBrightness@StartMenuColor@@YAKKMM@Z
    unsigned long ChangeBrightness(unsigned long, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrightness@StartMenuColor@@YAMK@Z
    float GetBrightness(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLuminance@StartMenuColor@@YAMK@Z
    float GetLuminance(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimilarContrastColor@StartMenuColor@@YAKKKMMM@Z
    unsigned long GetSimilarContrastColor(unsigned long, unsigned long, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LimitBrightness@StartMenuColor@@YAKKMMM@Z
    unsigned long LimitBrightness(unsigned long, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LimitLuminance@StartMenuColor@@YAKKM@Z
    unsigned long LimitLuminance(unsigned long, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Saturate@StartMenuColor@@YAKKM@Z
    unsigned long Saturate(unsigned long, float);
};
