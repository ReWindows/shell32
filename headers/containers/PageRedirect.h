#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace ControlPanelNavigationTelemetry {
class PageRedirect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PageRedirect@ControlPanelNavigationTelemetry@@QEAAXCPEBG@Z
    void StartActivity(signed char, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PageRedirect@ControlPanelNavigationTelemetry@@QEAA@XZ
    ~PageRedirect();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PageRedirect@ControlPanelNavigationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PageRedirect@ControlPanelNavigationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ControlPanelNavigationTelemetry
