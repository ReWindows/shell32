#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
namespace DirectUI {
class SimpleTimer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayedStart@SimpleTimer@DirectUI@@QEAAXM@Z
    void DelayedStart(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SimpleTimer@DirectUI@@QEAA_NXZ
    bool Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SimpleTimer@DirectUI@@QEAA@XZ
    ~SimpleTimer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ActionCallback@SimpleTimer@DirectUI@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void s_ActionCallback(GMA_ACTIONINFO *);
};
} // namespace DirectUI
