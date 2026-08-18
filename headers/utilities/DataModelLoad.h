#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace BannerTelemetry {
class DataModelLoad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DataModelLoad@BannerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataModelLoad@BannerTelemetry@@QEAA@XZ
    ~DataModelLoad();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DataModelLoad@BannerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DataModelLoad@BannerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace BannerTelemetry
