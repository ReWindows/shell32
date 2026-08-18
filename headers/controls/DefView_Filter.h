#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class DefView_Filter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DefView_Filter@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefView_Filter@FileExplorerTelemetry@@QEAA@XZ
    ~DefView_Filter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DefView_Filter@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DefView_Filter@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
