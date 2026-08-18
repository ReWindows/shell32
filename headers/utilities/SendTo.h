#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
namespace FileExplorerTelemetry {
class SendTo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SendTo@FileExplorerTelemetry@@QEAA@$$QEAV01@@Z
    SendTo(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendToTarget@SendTo@FileExplorerTelemetry@@QEAAXPEAUIShellItem@@W4EXPLORER_COMMAND_SQM_ID@@@Z
    void SendToTarget(IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendTo@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@SendTo@FileExplorerTelemetry@@QEAA?AV12@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@SendTo@FileExplorerTelemetry@@QEAA?AV12@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendTo@FileExplorerTelemetry@@QEAA@XZ
    ~SendTo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendTo@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendTo@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
