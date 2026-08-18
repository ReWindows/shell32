#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace PostBootReminderTelemetry {
class TempProfileWarningActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TempProfileWarningActivity@PostBootReminderTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TempProfileWarningActivity@PostBootReminderTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TempProfileWarningActivity@PostBootReminderTelemetry@@QEAA@XZ
    ~TempProfileWarningActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TempProfileWarningActivity@PostBootReminderTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TempProfileWarningActivity@PostBootReminderTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PostBootReminderTelemetry
