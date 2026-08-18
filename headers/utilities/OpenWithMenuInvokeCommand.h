#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace OpenWithTelemetry {
class OpenWithMenuInvokeCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OpenWithMenuInvokeCommand@OpenWithTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OpenWithMenuInvokeCommand@OpenWithTelemetry@@QEAA@XZ
    ~OpenWithMenuInvokeCommand();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OpenWithMenuInvokeCommand@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OpenWithMenuInvokeCommand@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
