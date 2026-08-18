#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace CloudFilesTelemetry {
class ItemsUnavailableDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ItemsUnavailableDialog@CloudFilesTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ItemsUnavailableDialog@CloudFilesTelemetry@@QEAAXW4ItemUnavailabilityReason@@_NI@Z
    void Stop(int, bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsUnavailableDialog@CloudFilesTelemetry@@QEAA@XZ
    ~ItemsUnavailableDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ItemsUnavailableDialog@CloudFilesTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ItemsUnavailableDialog@CloudFilesTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CloudFilesTelemetry
