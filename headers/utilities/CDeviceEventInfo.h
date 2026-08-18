#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CDeviceEventInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CDeviceEventInfo@@SAJAEBU_GUID@@PEBGH11PEAPEAV1@@Z
    static long CreateInstance(_GUID const &, unsigned short const *, int, unsigned short const *, unsigned short const *, CDeviceEventInfo * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceEventInfo@@UEAA@XZ
    virtual ~CDeviceEventInfo();
};
