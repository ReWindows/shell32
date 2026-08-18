#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class SetDesktopWallpaper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetDesktopWallpaper@DesktopWallpaperTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetDesktopWallpaper@DesktopWallpaperTelemetry@@QEAA@XZ
    ~SetDesktopWallpaper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetDesktopWallpaper@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetDesktopWallpaper@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
