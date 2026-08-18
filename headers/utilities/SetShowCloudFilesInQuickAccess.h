#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace FileExplorerTelemetry {
class SetShowCloudFilesInQuickAccess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetShowCloudFilesInQuickAccess@FileExplorerTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetShowCloudFilesInQuickAccess@FileExplorerTelemetry@@QEAA@XZ
    ~SetShowCloudFilesInQuickAccess();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetShowCloudFilesInQuickAccess@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetShowCloudFilesInQuickAccess@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
