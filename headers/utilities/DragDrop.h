#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class DragDrop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DragDrop@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DragDrop@FileExplorerTelemetry@@QEAAX_NJ@Z
    void Stop(bool, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDrop@FileExplorerTelemetry@@QEAA@XZ
    ~DragDrop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DragDrop@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DragDrop@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
