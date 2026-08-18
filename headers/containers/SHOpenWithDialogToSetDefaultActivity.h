#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace OpenWithTelemetry {
class SHOpenWithDialogToSetDefaultActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SHOpenWithDialogToSetDefaultActivity@OpenWithTelemetry@@QEAAXPEBG00H@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SHOpenWithDialogToSetDefaultActivity@OpenWithTelemetry@@QEAA@XZ
    ~SHOpenWithDialogToSetDefaultActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SHOpenWithDialogToSetDefaultActivity@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SHOpenWithDialogToSetDefaultActivity@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
