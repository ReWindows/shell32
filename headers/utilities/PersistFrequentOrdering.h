#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class PersistFrequentOrdering {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PersistFrequentOrdering@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PersistFrequentOrdering@FileExplorerTelemetry@@QEAA@XZ
    ~PersistFrequentOrdering();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PersistFrequentOrdering@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PersistFrequentOrdering@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
