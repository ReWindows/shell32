#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 42 member(s).
class DesktopIconLayoutTelemetry {
public:
    class DesktopIconMoves;
    class InitialIconPositioning;
    class SpotlightIconPositioning;
    class WorkAreaChangeActivity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataModelValidationFailure_@DesktopIconLayoutTelemetry@@QEAAXPEBG@Z
    void DataModelValidationFailure_(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopMatchFound_@DesktopIconLayoutTelemetry@@QEAAXPEBGAEBUDesktopDataForTracelog@@@Z
    void DesktopMatchFound_(unsigned short const *, DesktopDataForTracelog const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridSizeChangeFromContextMenu@DesktopIconLayoutTelemetry@@SAXXZ
    static void GridSizeChangeFromContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridSizeChangeFromKeyboard@DesktopIconLayoutTelemetry@@SAXXZ
    static void GridSizeChangeFromKeyboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridSizeChangeFromScroll@DesktopIconLayoutTelemetry@@SAXXZ
    static void GridSizeChangeFromScroll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GridSizeChangeFromZoom@DesktopIconLayoutTelemetry@@SAXXZ
    static void GridSizeChangeFromZoom();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DesktopIconLayoutTelemetry@@UEAAXXZ
    virtual void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@DesktopIconLayoutTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAddUnmappedIcon_@DesktopIconLayoutTelemetry@@QEAAXAEBUIconGridItem@@@Z
    void LogAddUnmappedIcon_(IconGridItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDeletedIcon_@DesktopIconLayoutTelemetry@@QEAAXAEBUIconGridItem@@@Z
    void LogDeletedIcon_(IconGridItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFinalAdjustment_@DesktopIconLayoutTelemetry@@QEAAXHAEBUIconGridItem@@@Z
    void LogFinalAdjustment_(int, IconGridItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIconOnScreenAdjust_@DesktopIconLayoutTelemetry@@QEAAXAEBUIconGridItem@@@Z
    void LogIconOnScreenAdjust_(IconGridItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPersistedDesktop_@DesktopIconLayoutTelemetry@@QEAAXAEBUDesktopDataForTracelog@@@Z
    void LogPersistedDesktop_(DesktopDataForTracelog const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPossibleDesktopMatch_@DesktopIconLayoutTelemetry@@QEAAXAEBUDesktopDataForTracelog@@0PEBG1_N2@Z
    void LogPossibleDesktopMatch_(DesktopDataForTracelog const &, DesktopDataForTracelog const &, unsigned short const *, unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewDesktopCreated_@DesktopIconLayoutTelemetry@@QEAAXAEBUDesktopDataForTracelog@@@Z
    void NewDesktopCreated_(DesktopDataForTracelog const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightFlyoutOnIconHovered@DesktopIconLayoutTelemetry@@SAXXZ
    static void SpotlightFlyoutOnIconHovered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightIconDoubleClickLaunch@DesktopIconLayoutTelemetry@@SAXXZ
    static void SpotlightIconDoubleClickLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightIconManuallyMoved@DesktopIconLayoutTelemetry@@SAXXZ
    static void SpotlightIconManuallyMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightIconPlacedBackTopRightForAllUsers@DesktopIconLayoutTelemetry@@SAXXZ
    static void SpotlightIconPlacedBackTopRightForAllUsers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpotlightIconSingleClickLaunch@DesktopIconLayoutTelemetry@@SAXXZ
    static void SpotlightIconSingleClickLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceLoggingInfo@DesktopIconLayoutTelemetry@@SAXPEBDZZ
    static void TraceLoggingInfo(char const *, ...);
};
