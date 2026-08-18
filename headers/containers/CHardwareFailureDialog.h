#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class CHardwareFailureDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CHardwareFailureDialog@@QEAAHPEAUHWND__@@I@Z
    int Show(HWND__*, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DialogCallback@CHardwareFailureDialog@@AEAAJPEAUHWND__@@I_K_J@Z
    long _DialogCallback(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HardwareFailureDialogCallbackProc@CHardwareFailureDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_HardwareFailureDialogCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
};
