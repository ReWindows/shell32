#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace OpenWithTelemetry {
class DefaultAssociationsOnCreate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DefaultAssociationsOnCreate@OpenWithTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultAssociationsOnCreate@OpenWithTelemetry@@QEAA@XZ
    ~DefaultAssociationsOnCreate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DefaultAssociationsOnCreate@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DefaultAssociationsOnCreate@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
