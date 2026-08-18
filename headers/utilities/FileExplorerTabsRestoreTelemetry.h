#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class FileExplorerTabsRestoreTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@FileExplorerTabsRestoreTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestorationOfTabsInitiatedAtLogon_@FileExplorerTabsRestoreTelemetry@@QEBAXXZ
    void RestorationOfTabsInitiatedAtLogon_() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoredWindowsAndTabs_@FileExplorerTabsRestoreTelemetry@@QEBAXHH@Z
    void RestoredWindowsAndTabs_(int, int) const;
};
