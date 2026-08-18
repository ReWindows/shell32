#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class ShellNew_CentennialCacheGeneration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShellNew_CentennialCacheGeneration@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShellNew_CentennialCacheGeneration@FileExplorerTelemetry@@QEAAXI@Z
    void Stop(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellNew_CentennialCacheGeneration@FileExplorerTelemetry@@QEAA@XZ
    ~ShellNew_CentennialCacheGeneration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShellNew_CentennialCacheGeneration@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShellNew_CentennialCacheGeneration@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
