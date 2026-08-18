#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class ClearQuickAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ClearQuickAccess@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClearQuickAccess@FileExplorerTelemetry@@QEAA@XZ
    ~ClearQuickAccess();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ClearQuickAccess@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ClearQuickAccess@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
