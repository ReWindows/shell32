#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace Shell32LoggingTelemetry {
class FormatDiscUdf {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FormatDiscUdf@Shell32LoggingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FormatDiscUdf@Shell32LoggingTelemetry@@QEAA@XZ
    ~FormatDiscUdf();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FormatDiscUdf@Shell32LoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FormatDiscUdf@Shell32LoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Shell32LoggingTelemetry
