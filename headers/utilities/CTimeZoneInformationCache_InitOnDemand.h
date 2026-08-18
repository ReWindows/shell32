#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class CTimeZoneInformationCache_InitOnDemand {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTZIForYear@CTimeZoneInformationCache_InitOnDemand@@QEAAQEAU_TIME_ZONE_INFORMATION@@GPEAU2@@Z
    _TIME_ZONE_INFORMATION * const GetTZIForYear(unsigned short, _TIME_ZONE_INFORMATION *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCache@CTimeZoneInformationCache_InitOnDemand@@AEAAHXZ
    int _EnsureCache();
};
