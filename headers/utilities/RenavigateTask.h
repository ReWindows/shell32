#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class RenavigateTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RenavigateTask@FileExplorerTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RenavigateTask@FileExplorerTelemetry@@QEAA@XZ
    ~RenavigateTask();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RenavigateTask@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RenavigateTask@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
