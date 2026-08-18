#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace Shell32LoggingTelemetry {
class FormatDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FormatDialog@Shell32LoggingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FormatDialog@Shell32LoggingTelemetry@@QEAA@XZ
    ~FormatDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FormatDialog@Shell32LoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FormatDialog@Shell32LoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Shell32LoggingTelemetry
