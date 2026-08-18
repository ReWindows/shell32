#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class LaunchSpotlightHotspotHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@LaunchSpotlightHotspotHandler@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@LaunchSpotlightHotspotHandler@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LaunchSpotlightHotspotHandler@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchSpotlightHotspotHandler@@QEAA@XZ
    LaunchSpotlightHotspotHandler();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchSpotlightHotspotHandler@@EEAA@XZ
    virtual ~LaunchSpotlightHotspotHandler();
};
