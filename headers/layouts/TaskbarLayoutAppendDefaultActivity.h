#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace TaskbarFlexibleLayoutTelemetry {
class TaskbarLayoutAppendDefaultActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ
    ~TaskbarLayoutAppendDefaultActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarFlexibleLayoutTelemetry
