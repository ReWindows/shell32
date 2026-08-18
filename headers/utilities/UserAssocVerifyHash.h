#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DefaultAssocTelemetry {
class UserAssocVerifyHash {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserAssocVerifyHash@DefaultAssocTelemetry@@QEAAXPEBG000@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserAssocVerifyHash@DefaultAssocTelemetry@@QEAA@XZ
    ~UserAssocVerifyHash();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserAssocVerifyHash@DefaultAssocTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserAssocVerifyHash@DefaultAssocTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DefaultAssocTelemetry
