#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace Shell32LoggingTelemetry {
class LowDisk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LowDisk@Shell32LoggingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@LowDisk@Shell32LoggingTelemetry@@QEAAXHHK@Z
    void Stop(int, int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LowDisk@Shell32LoggingTelemetry@@QEAA@XZ
    ~LowDisk();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LowDisk@Shell32LoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LowDisk@Shell32LoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Shell32LoggingTelemetry
