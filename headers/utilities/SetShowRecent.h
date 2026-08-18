#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class SetShowRecent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetShowRecent@FileExplorerTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetShowRecent@FileExplorerTelemetry@@QEAA@XZ
    ~SetShowRecent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetShowRecent@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetShowRecent@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
