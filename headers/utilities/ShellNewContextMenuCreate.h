#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class ShellNewContextMenuCreate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShellNewContextMenuCreate@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShellNewContextMenuCreate@FileExplorerTelemetry@@QEAAXII_N@Z
    void Stop(unsigned int, unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellNewContextMenuCreate@FileExplorerTelemetry@@QEAA@XZ
    ~ShellNewContextMenuCreate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShellNewContextMenuCreate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShellNewContextMenuCreate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
