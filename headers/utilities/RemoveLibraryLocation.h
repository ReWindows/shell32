#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace LibraryTelemetry {
class RemoveLibraryLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoveLibraryLocation@LibraryTelemetry@@QEAAXW4LocationChangeEntryPoint@2@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoveLibraryLocation@LibraryTelemetry@@QEAA@XZ
    ~RemoveLibraryLocation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoveLibraryLocation@LibraryTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoveLibraryLocation@LibraryTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LibraryTelemetry
