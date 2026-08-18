#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DesktopIconLayoutTelemetry {
class InitialIconPositioning {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitialIconPositioning@DesktopIconLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InitialIconPositioning@DesktopIconLayoutTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitialIconPositioning@DesktopIconLayoutTelemetry@@QEAA@XZ
    ~InitialIconPositioning();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitialIconPositioning@DesktopIconLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitialIconPositioning@DesktopIconLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopIconLayoutTelemetry
