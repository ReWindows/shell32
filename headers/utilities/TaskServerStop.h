#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace CoCreateInstanceAsSystemTelemetry {
class TaskServerStop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskServerStop@CoCreateInstanceAsSystemTelemetry@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskServerStop@CoCreateInstanceAsSystemTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskServerStop@CoCreateInstanceAsSystemTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoCreateInstanceAsSystemTelemetry
