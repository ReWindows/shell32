#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace RunDialogLoggingTelemetry {
class BrowseDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@BrowseDialog@RunDialogLoggingTelemetry@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BrowseDialog@RunDialogLoggingTelemetry@@QEAA@XZ
    ~BrowseDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BrowseDialog@RunDialogLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BrowseDialog@RunDialogLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace RunDialogLoggingTelemetry
