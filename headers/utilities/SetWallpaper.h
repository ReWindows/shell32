#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class SetWallpaper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetWallpaper@DesktopWallpaperTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetWallpaper@DesktopWallpaperTelemetry@@QEAA@XZ
    ~SetWallpaper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetWallpaper@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetWallpaper@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
