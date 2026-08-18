#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class FilePreviewGeneration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FilePreviewGeneration@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@FilePreviewGeneration@FileExplorerTelemetry@@QEAAXW4CentennialLookup@2@@Z
    void Stop(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FilePreviewGeneration@FileExplorerTelemetry@@QEAA@XZ
    ~FilePreviewGeneration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FilePreviewGeneration@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FilePreviewGeneration@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
