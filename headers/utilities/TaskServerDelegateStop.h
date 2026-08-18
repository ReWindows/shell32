#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace CoCreateInstanceAsSystemTelemetry {
class TaskServerDelegateStop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskServerDelegateStop@CoCreateInstanceAsSystemTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskServerDelegateStop@CoCreateInstanceAsSystemTelemetry@@QEAA@XZ
    ~TaskServerDelegateStop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskServerDelegateStop@CoCreateInstanceAsSystemTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskServerDelegateStop@CoCreateInstanceAsSystemTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoCreateInstanceAsSystemTelemetry
