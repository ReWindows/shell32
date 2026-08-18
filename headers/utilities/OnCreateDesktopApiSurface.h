#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class OnCreateDesktopApiSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnCreateDesktopApiSurface@DesktopWallpaperTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnCreateDesktopApiSurface@DesktopWallpaperTelemetry@@QEAA@XZ
    ~OnCreateDesktopApiSurface();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnCreateDesktopApiSurface@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnCreateDesktopApiSurface@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
