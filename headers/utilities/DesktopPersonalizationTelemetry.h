#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class DesktopPersonalizationTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@DesktopPersonalizationTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceLoggingInfo@DesktopPersonalizationTelemetry@@SAXPEBDZZ
    static void TraceLoggingInfo(char const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WallpaperUpdatedViaSetWallpaper_@DesktopPersonalizationTelemetry@@QEAAXPEBG@Z
    void WallpaperUpdatedViaSetWallpaper_(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WallpaperUpdatedViaUpdateImageToSystemSetting@DesktopPersonalizationTelemetry@@SAXXZ
    static void WallpaperUpdatedViaUpdateImageToSystemSetting();
};
