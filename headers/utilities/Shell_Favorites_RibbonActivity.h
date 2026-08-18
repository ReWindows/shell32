#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FavoritesTelemetry {
class Shell_Favorites_RibbonActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Shell_Favorites_RibbonActivity@FavoritesTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Shell_Favorites_RibbonActivity@FavoritesTelemetry@@QEAA@XZ
    ~Shell_Favorites_RibbonActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Shell_Favorites_RibbonActivity@FavoritesTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Shell_Favorites_RibbonActivity@FavoritesTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FavoritesTelemetry
