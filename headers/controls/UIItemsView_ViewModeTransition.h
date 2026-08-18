#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class UIItemsView_ViewModeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UIItemsView_ViewModeTransition@FileExplorerTelemetry@@QEAAXPEAUIShellItem@@@Z
    void StartActivity(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@UIItemsView_ViewModeTransition@FileExplorerTelemetry@@QEAA?AV12@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIItemsView_ViewModeTransition@FileExplorerTelemetry@@QEAA@XZ
    ~UIItemsView_ViewModeTransition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UIItemsView_ViewModeTransition@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UIItemsView_ViewModeTransition@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
