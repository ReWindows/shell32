#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DesktopWallpaperTelemetry {
class s_SetWallpaperToInternalFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@s_SetWallpaperToInternalFile@DesktopWallpaperTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1s_SetWallpaperToInternalFile@DesktopWallpaperTelemetry@@QEAA@XZ
    ~s_SetWallpaperToInternalFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@s_SetWallpaperToInternalFile@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@s_SetWallpaperToInternalFile@DesktopWallpaperTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopWallpaperTelemetry
