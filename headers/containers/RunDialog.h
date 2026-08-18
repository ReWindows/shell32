#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace RunDialogLoggingTelemetry {
class RunDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@RunDialog@RunDialogLoggingTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RunDialog@RunDialogLoggingTelemetry@@QEAA@XZ
    ~RunDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RunDialog@RunDialogLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RunDialog@RunDialogLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace RunDialogLoggingTelemetry
