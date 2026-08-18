#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace CoCreateInstanceAsSystemTelemetry {
class TaskServerDelegateStart {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskServerDelegateStart@CoCreateInstanceAsSystemTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskServerDelegateStart@CoCreateInstanceAsSystemTelemetry@@QEAA@XZ
    ~TaskServerDelegateStart();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskServerDelegateStart@CoCreateInstanceAsSystemTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskServerDelegateStart@CoCreateInstanceAsSystemTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoCreateInstanceAsSystemTelemetry
