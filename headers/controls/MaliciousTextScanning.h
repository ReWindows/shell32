#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 1 member(s).
class MaliciousTextScanning {
public:
    class ClipboardScanResult;
    class Scanner;
    class details;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDoesUserTrustTextPrompt@MaliciousTextScanning@@YA_NPEAUHWND__@@PEBG1@Z
    bool TryDoesUserTrustTextPrompt(HWND__*, unsigned short const *, unsigned short const *);
};
