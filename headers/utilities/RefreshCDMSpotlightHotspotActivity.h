#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class RefreshCDMSpotlightHotspotActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RefreshCDMSpotlightHotspotActivity@DesktopWallpaperTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshCDMSpotlightHotspotActivity@DesktopWallpaperTelemetry@@QEAA@XZ
    ~RefreshCDMSpotlightHotspotActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RefreshCDMSpotlightHotspotActivity@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RefreshCDMSpotlightHotspotActivity@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
