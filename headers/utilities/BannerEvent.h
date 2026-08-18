#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace BannerTelemetry {
class BannerEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BannerEvent@BannerTelemetry@@QEAAXPEBGKII@Z
    void StartActivity(unsigned short const *, unsigned long, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BannerEvent@BannerTelemetry@@QEAA@XZ
    ~BannerEvent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BannerEvent@BannerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BannerEvent@BannerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace BannerTelemetry
