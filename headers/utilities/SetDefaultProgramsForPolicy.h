#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace OpenWithTelemetry {
class SetDefaultProgramsForPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetDefaultProgramsForPolicy@OpenWithTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SetDefaultProgramsForPolicy@OpenWithTelemetry@@QEAAXKPEBG00@Z
    void Stop(unsigned long, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetDefaultProgramsForPolicy@OpenWithTelemetry@@QEAA@XZ
    ~SetDefaultProgramsForPolicy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetDefaultProgramsForPolicy@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetDefaultProgramsForPolicy@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
