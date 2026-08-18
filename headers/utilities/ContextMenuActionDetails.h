#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace FileExplorerTelemetry {
class ContextMenuActionDetails {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContextMenuActionDetails@FileExplorerTelemetry@@QEAA@PEAUHMENU__@@H@Z
    ContextMenuActionDetails(HMENU__*, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextMenuActionDetails@FileExplorerTelemetry@@QEAA@XZ
    ~ContextMenuActionDetails();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTelemetryData@ContextMenuActionDetails@FileExplorerTelemetry@@MEAAXXZ
    virtual void ComputeTelemetryData();
};
} // namespace FileExplorerTelemetry
