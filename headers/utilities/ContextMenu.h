#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class ContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ContextMenu@FileExplorerTelemetry@@QEAAXUtagPOINT@@U_GUID@@@Z
    void StartActivity(tagPOINT, _GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextMenu@FileExplorerTelemetry@@QEAA@XZ
    ~ContextMenu();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ContextMenu@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ContextMenu@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
