#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace IconCacheTelemetry {
class ExtractIconW {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExtractIconW@IconCacheTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtractIconW@IconCacheTelemetry@@QEAA@XZ
    ~ExtractIconW();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExtractIconW@IconCacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExtractIconW@IconCacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace IconCacheTelemetry
