#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace IconCacheTelemetry {
class LoadCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LoadCache@IconCacheTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadCache@IconCacheTelemetry@@QEAA@XZ
    ~LoadCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LoadCache@IconCacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LoadCache@IconCacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace IconCacheTelemetry
