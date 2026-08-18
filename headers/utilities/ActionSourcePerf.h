#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerPerf {
class ActionSourcePerf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActionSourcePerf@FileExplorerPerf@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActionSourcePerf@FileExplorerPerf@@QEAA@XZ
    ~ActionSourcePerf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActionSourcePerf@FileExplorerPerf@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActionSourcePerf@FileExplorerPerf@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerPerf
