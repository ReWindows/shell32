#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CCscWorkOnlineErrorTaskDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CCscWorkOnlineErrorTaskDialog@@QEAAJPEAPEBGK@Z
    long Init(unsigned short const * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CCscWorkOnlineErrorTaskDialog@@QEAAJXZ
    long Run();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCscWorkOnlineErrorTaskDialog@@QEAA@XZ
    ~CCscWorkOnlineErrorTaskDialog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CCscWorkOnlineErrorTaskDialog@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OptionsCallbackProc@CCscWorkOnlineErrorTaskDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long _OptionsCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
};
