#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
namespace TaskbarPinningTelemetry {
class PinningActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z
    void PinnedListAdded(unsigned short const *, unsigned short const *, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z
    void PinnedListPlaceholderProcessed(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLER@@@Z
    void PinnedListRemoved(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z
    void TaskListTileMoved(unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ
    ~PinningActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PinningActivity@TaskbarPinningTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TaskbarPinningTelemetry
