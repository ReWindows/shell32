#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CTryHarderItemInternet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTryHarderItemInternet@@QEAAJW4TRYHARDERSCOPES@@PEBG1@Z
    long Init(int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@CTryHarderItemInternet@@UEAAJPEAUIUnknown@@@Z
    virtual long OnInvoke(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultBrowserTooltipAndIconIndex@CTryHarderItemInternet@@AEAAJPEAPEAGPEAH@Z
    long _GetDefaultBrowserTooltipAndIconIndex(unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWordWheelText@CTryHarderItemInternet@@AEAAJPEAPEAG@Z
    long _GetWordWheelText(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTryHarderItemInternet@@EEAA@XZ
    virtual ~CTryHarderItemInternet();
};
