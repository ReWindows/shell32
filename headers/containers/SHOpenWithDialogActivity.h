#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace OpenWithTelemetry {
class SHOpenWithDialogActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SHOpenWithDialogActivity@OpenWithTelemetry@@QEAAXPEBG00H@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SHOpenWithDialogActivity@OpenWithTelemetry@@QEAA@XZ
    ~SHOpenWithDialogActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SHOpenWithDialogActivity@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SHOpenWithDialogActivity@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
