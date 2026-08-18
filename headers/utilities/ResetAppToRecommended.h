#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace DefaultAssocTelemetry {
class ResetAppToRecommended {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ResetAppToRecommended@DefaultAssocTelemetry@@QEAAXPEBG_N100@Z
    void StartActivity(unsigned short const *, bool, bool, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ResetAppToRecommended@DefaultAssocTelemetry@@QEAAXPEBG0JJJ_N@Z
    void Stop(unsigned short const *, unsigned short const *, long, long, long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResetAppToRecommended@DefaultAssocTelemetry@@QEAA@XZ
    ~ResetAppToRecommended();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ResetAppToRecommended@DefaultAssocTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ResetAppToRecommended@DefaultAssocTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DefaultAssocTelemetry
