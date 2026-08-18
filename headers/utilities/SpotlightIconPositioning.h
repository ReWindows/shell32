#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DesktopIconLayoutTelemetry {
class SpotlightIconPositioning {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SpotlightIconPositioning@DesktopIconLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SpotlightIconPositioning@DesktopIconLayoutTelemetry@@QEAAXUIconGridPosition@@PEBG_N@Z
    void Stop(IconGridPosition, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpotlightIconPositioning@DesktopIconLayoutTelemetry@@QEAA@XZ
    ~SpotlightIconPositioning();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SpotlightIconPositioning@DesktopIconLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SpotlightIconPositioning@DesktopIconLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopIconLayoutTelemetry
