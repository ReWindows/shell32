#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CInputLimiterNetAddr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CInputLimiterNetAddr@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDisplayError@CInputLimiterNetAddr@@IEAAJXZ
    long _OnDisplayError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnValidate@CInputLimiterNetAddr@@IEAAJPEAUtagNC_ADDRESS@@@Z
    long _OnValidate(tagNC_ADDRESS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CInputLimiterNetAddr@@IEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
