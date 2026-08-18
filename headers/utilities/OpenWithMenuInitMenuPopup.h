#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace OpenWithTelemetry {
class OpenWithMenuInitMenuPopup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OpenWithMenuInitMenuPopup@OpenWithTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OpenWithMenuInitMenuPopup@OpenWithTelemetry@@QEAA@XZ
    ~OpenWithMenuInitMenuPopup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OpenWithMenuInitMenuPopup@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OpenWithMenuInitMenuPopup@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
