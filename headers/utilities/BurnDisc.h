#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace Shell32LoggingTelemetry {
class BurnDisc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BurnDisc@Shell32LoggingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BurnDisc@Shell32LoggingTelemetry@@QEAA@XZ
    ~BurnDisc();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BurnDisc@Shell32LoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BurnDisc@Shell32LoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Shell32LoggingTelemetry
