#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DesktopWallpaperTelemetry {
class SetWallpaperNoGP {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetWallpaperNoGP@DesktopWallpaperTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SetWallpaperNoGP@DesktopWallpaperTelemetry@@QEAAXJ_N@Z
    void Stop(long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetWallpaperNoGP@DesktopWallpaperTelemetry@@QEAA@XZ
    ~SetWallpaperNoGP();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetWallpaperNoGP@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetWallpaperNoGP@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
