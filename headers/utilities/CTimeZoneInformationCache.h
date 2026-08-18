#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CTimeZoneInformationCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTZIForYear@CTimeZoneInformationCache@@QEAAHGPEAU_TIME_ZONE_INFORMATION@@@Z
    int GetTZIForYear(unsigned short, _TIME_ZONE_INFORMATION *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheNotExpired@CTimeZoneInformationCache@@AEAAHXZ
    int _CacheNotExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LookupCachedTZI@CTimeZoneInformationCache@@AEAAHGPEAU_TIME_ZONE_INFORMATION@@@Z
    int _LookupCachedTZI(unsigned short, _TIME_ZONE_INFORMATION *);
};
