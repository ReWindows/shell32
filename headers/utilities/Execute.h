#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace RunDialogLoggingTelemetry {
class Execute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@Execute@RunDialogLoggingTelemetry@@QEAAXPEBD_N111@Z
    void StartActivityWithCorrelationVector(char const *, bool, bool, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Execute@RunDialogLoggingTelemetry@@QEAA@XZ
    ~Execute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Execute@RunDialogLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Execute@RunDialogLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace RunDialogLoggingTelemetry
