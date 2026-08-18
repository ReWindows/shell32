#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace DesktopWallpaperTelemetry {
class SetSlideShow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetSlideShow@DesktopWallpaperTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetSlideShow@DesktopWallpaperTelemetry@@QEAA@XZ
    ~SetSlideShow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetSlideShow@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetSlideShow@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
