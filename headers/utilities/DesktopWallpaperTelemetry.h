#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 50 member(s).
class DesktopWallpaperTelemetry {
public:
    class LaunchSpotlightHotspotActivity;
    class OnCreateDesktopApiSurface;
    class RefreshCDMSpotlightHotspotActivity;
    class SetDesktopWallpaper;
    class SetSlideShow;
    class SetWallpaper;
    class SetWallpaperNoGP;
    class SettingSpotlightCollectionActivity;
    class SettingSpotlightHotspotActivity;
    class s_SetWallpaperToInternalFile;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopSpotlightEnabledWithContextMenuOptions@DesktopWallpaperTelemetry@@SAXXZ
    static void DesktopSpotlightEnabledWithContextMenuOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopSpotlightPresenterFailed@DesktopWallpaperTelemetry@@SAXXZ
    static void DesktopSpotlightPresenterFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndBatch@DesktopWallpaperTelemetry@@SAXXZ
    static void EndBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidArguments_SetSpotlightContent@DesktopWallpaperTelemetry@@SAXXZ
    static void InvalidArguments_SetSpotlightContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Repaint@DesktopWallpaperTelemetry@@SAXXZ
    static void Repaint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreMessageRecieved@DesktopWallpaperTelemetry@@SAXXZ
    static void RestoreMessageRecieved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightDefaultWallpaper@DesktopWallpaperTelemetry@@SAXXZ
    static void SpotlightDefaultWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightInfoTipShowed@DesktopWallpaperTelemetry@@SAXXZ
    static void SpotlightInfoTipShowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightSwitchedToNextCreative@DesktopWallpaperTelemetry@@SAXXZ
    static void SpotlightSwitchedToNextCreative();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Submitting@DesktopWallpaperTelemetry@@SAXXZ
    static void Submitting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceLoggingInfo@DesktopWallpaperTelemetry@@SAXPEBDZZ
    static void TraceLoggingInfo(char const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WallpaperTranscodeFallbackUsed@DesktopWallpaperTelemetry@@SAXXZ
    static void WallpaperTranscodeFallbackUsed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WallpaperUpdateImageDone@DesktopWallpaperTelemetry@@SAXXZ
    static void WallpaperUpdateImageDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WallpaperUpdateImageEnter@DesktopWallpaperTelemetry@@SAXXZ
    static void WallpaperUpdateImageEnter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DesktopWallpaperTelemetry@@MEAAXXZ
    virtual void Initialize();
};
