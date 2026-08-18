#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerPerf {
class CommandHandlerInvokePerf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CommandHandlerInvokePerf@FileExplorerPerf@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandHandlerInvokePerf@FileExplorerPerf@@QEAA@XZ
    ~CommandHandlerInvokePerf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CommandHandlerInvokePerf@FileExplorerPerf@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CommandHandlerInvokePerf@FileExplorerPerf@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerPerf
