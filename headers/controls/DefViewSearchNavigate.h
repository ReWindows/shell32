#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace FileExplorerTelemetry {
class DefViewSearchNavigate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@DefViewSearchNavigate@FileExplorerTelemetry@@QEAAXPEBDPEAUIUnknown@@1@Z
    void StartActivityWithCorrelationVector(char const *, IUnknown *, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefViewSearchNavigate@FileExplorerTelemetry@@QEAA@XZ
    ~DefViewSearchNavigate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DefViewSearchNavigate@FileExplorerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DefViewSearchNavigate@FileExplorerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FileExplorerTelemetry
