#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace OpenWithTelemetry {
class DefaultAssociationsOnLoad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DefaultAssociationsOnLoad@OpenWithTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultAssociationsOnLoad@OpenWithTelemetry@@QEAA@XZ
    ~DefaultAssociationsOnLoad();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DefaultAssociationsOnLoad@OpenWithTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DefaultAssociationsOnLoad@OpenWithTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OpenWithTelemetry
