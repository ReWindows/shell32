#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class Composition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdapterHasAttachedOutputs@Composition@@QEAA_NU_LUID@@@Z
    bool AdapterHasAttachedOutputs(_LUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHDRMonitors@Composition@@QEAA_NXZ
    bool HasHDRMonitors();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Composition@@QEAA@XZ
    ~Composition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdapterLuidFromHMonitor@Composition@@IEAAJPEAUHMONITOR__@@PEAU_LUID@@@Z
    long _AdapterLuidFromHMonitor(HMONITOR__*, _LUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultAdapterLuid@Composition@@IEAAJPEAU_LUID@@@Z
    long _GetDefaultAdapterLuid(_LUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveInvalidDevices@Composition@@IEAAXXZ
    void _RemoveInvalidDevices();
};
