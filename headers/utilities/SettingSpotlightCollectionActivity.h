#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class SettingSpotlightCollectionActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SettingSpotlightCollectionActivity@DesktopWallpaperTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingSpotlightCollectionActivity@DesktopWallpaperTelemetry@@QEAA@XZ
    ~SettingSpotlightCollectionActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SettingSpotlightCollectionActivity@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SettingSpotlightCollectionActivity@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
