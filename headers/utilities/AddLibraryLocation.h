#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace LibraryTelemetry {
class AddLibraryLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@AddLibraryLocation@LibraryTelemetry@@QEAA?AV12@XZ
    ::LibraryTelemetry::AddLibraryLocation Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AddLibraryLocation@LibraryTelemetry@@QEAAXW4LocationChangeEntryPoint@2@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AddLibraryLocation@LibraryTelemetry@@QEAA@XZ
    ~AddLibraryLocation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AddLibraryLocation@LibraryTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AddLibraryLocation@LibraryTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LibraryTelemetry
