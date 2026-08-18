#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace AppBarTelemetry {
class AddRemoveAppBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddRemoveAppBar@AppBarTelemetry@@QEAAXW4AppBarMessage@2@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddRemoveAppBar@AppBarTelemetry@@QEAA@XZ
    ~AddRemoveAppBar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddRemoveAppBar@AppBarTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddRemoveAppBar@AppBarTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppBarTelemetry
