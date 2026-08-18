#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class SettingSpotlightHotspotActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SettingSpotlightHotspotActivity@DesktopWallpaperTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingSpotlightHotspotActivity@DesktopWallpaperTelemetry@@QEAA@XZ
    ~SettingSpotlightHotspotActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SettingSpotlightHotspotActivity@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SettingSpotlightHotspotActivity@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
