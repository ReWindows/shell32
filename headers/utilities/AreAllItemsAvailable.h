#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class AreAllItemsAvailable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AreAllItemsAvailable@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AreAllItemsAvailable@FileExplorerTelemetry@@QEAAXW4ItemUnavailabilityReason@@J@Z
    void Stop(int, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AreAllItemsAvailable@FileExplorerTelemetry@@QEAA@XZ
    ~AreAllItemsAvailable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AreAllItemsAvailable@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AreAllItemsAvailable@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
