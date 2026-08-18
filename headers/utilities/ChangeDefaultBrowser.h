#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DefaultAssocTelemetry {
class ChangeDefaultBrowser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMSEdgeInfo@ChangeDefaultBrowser@DefaultAssocTelemetry@@QEAAXXZ
    void LogMSEdgeInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ChangeDefaultBrowser@DefaultAssocTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ChangeDefaultBrowser@DefaultAssocTelemetry@@QEAA@XZ
    ~ChangeDefaultBrowser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ChangeDefaultBrowser@DefaultAssocTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ChangeDefaultBrowser@DefaultAssocTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DefaultAssocTelemetry
