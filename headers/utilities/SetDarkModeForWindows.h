#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class SetDarkModeForWindows {
public:
    class AllowDarkModeHelper;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDarkModeForWindow@SetDarkModeForWindows@@QEAAJPEAUHWND__@@_NK@Z
    long AllowDarkModeForWindow(HWND__*, bool, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetDarkModeForWindows@@QEAA@XZ
    ~SetDarkModeForWindows();
};
