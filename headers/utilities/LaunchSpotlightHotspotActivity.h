#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class LaunchSpotlightHotspotActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchSpotlightHotspotActivity@DesktopWallpaperTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchSpotlightHotspotActivity@DesktopWallpaperTelemetry@@QEAA@XZ
    ~LaunchSpotlightHotspotActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchSpotlightHotspotActivity@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchSpotlightHotspotActivity@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
