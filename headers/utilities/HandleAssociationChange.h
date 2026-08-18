#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
namespace IconCacheTelemetry {
class HandleAssociationChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandleAssociationChange@IconCacheTelemetry@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandleAssociationChange@IconCacheTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandleAssociationChange@IconCacheTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace IconCacheTelemetry
