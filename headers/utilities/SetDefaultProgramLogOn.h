#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
namespace OpenWithTelemetry {
class SetDefaultProgramLogOn {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetDefaultProgramLogOn@OpenWithTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SetDefaultProgramLogOn@OpenWithTelemetry@@QEAAXKPEBG0@Z
    void Stop(unsigned long, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetDefaultProgramLogOn@OpenWithTelemetry@@QEAA@XZ
    ~SetDefaultProgramLogOn();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetDefaultProgramLogOn@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetDefaultProgramLogOn@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
