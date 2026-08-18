#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace DesktopIconLayoutTelemetry {
class DesktopIconMoves {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogGridWorkspace@DesktopIconMoves@DesktopIconLayoutTelemetry@@QEAAXPEBUWorkAreaWithDPI@@PEBUGridWorkspace@@HUtagPOINT@@IIW4SetIconFlags@@@Z
    void LogGridWorkspace(WorkAreaWithDPI const *, GridWorkspace const *, int, tagPOINT, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogIconMove@DesktopIconMoves@DesktopIconLayoutTelemetry@@QEAAX_KAEBUtagPOINT@@AEBUIconGridPosition@@12_N@Z
    void LogIconMove(uint64_t, tagPOINT const &, IconGridPosition const &, tagPOINT const &, IconGridPosition const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DesktopIconMoves@DesktopIconLayoutTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopIconMoves@DesktopIconLayoutTelemetry@@QEAA@XZ
    ~DesktopIconMoves();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DesktopIconMoves@DesktopIconLayoutTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DesktopIconMoves@DesktopIconLayoutTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DesktopIconLayoutTelemetry
