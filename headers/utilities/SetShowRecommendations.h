#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class SetShowRecommendations {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetShowRecommendations@FileExplorerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SetShowRecommendations@FileExplorerTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetShowRecommendations@FileExplorerTelemetry@@QEAA@XZ
    ~SetShowRecommendations();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetShowRecommendations@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetShowRecommendations@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
