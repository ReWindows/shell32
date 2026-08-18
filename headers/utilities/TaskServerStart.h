#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace CoCreateInstanceAsSystemTelemetry {
class TaskServerStart {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskServerStart@CoCreateInstanceAsSystemTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskServerStart@CoCreateInstanceAsSystemTelemetry@@QEAA@XZ
    ~TaskServerStart();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskServerStart@CoCreateInstanceAsSystemTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskServerStart@CoCreateInstanceAsSystemTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoCreateInstanceAsSystemTelemetry
