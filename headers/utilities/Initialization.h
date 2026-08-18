#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace BannerTelemetry {
class Initialization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Initialization@BannerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Initialization@BannerTelemetry@@QEAA@XZ
    ~Initialization();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Initialization@BannerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Initialization@BannerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace BannerTelemetry
