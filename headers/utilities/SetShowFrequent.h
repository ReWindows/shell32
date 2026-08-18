#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class SetShowFrequent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetShowFrequent@FileExplorerTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetShowFrequent@FileExplorerTelemetry@@QEAA@XZ
    ~SetShowFrequent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetShowFrequent@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetShowFrequent@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
