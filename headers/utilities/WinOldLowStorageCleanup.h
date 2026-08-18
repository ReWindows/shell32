#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace Shell32LoggingTelemetry {
class WinOldLowStorageCleanup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WinOldLowStorageCleanup@Shell32LoggingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WinOldLowStorageCleanup@Shell32LoggingTelemetry@@QEAAXHJ@Z
    void Stop(int, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinOldLowStorageCleanup@Shell32LoggingTelemetry@@QEAA@XZ
    ~WinOldLowStorageCleanup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WinOldLowStorageCleanup@Shell32LoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WinOldLowStorageCleanup@Shell32LoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Shell32LoggingTelemetry
