#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class SetAadAccountAttached {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetAadAccountAttached@FileExplorerTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetAadAccountAttached@FileExplorerTelemetry@@QEAA@XZ
    ~SetAadAccountAttached();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetAadAccountAttached@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetAadAccountAttached@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
