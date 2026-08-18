#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace MaliciousTextScanning {
class Scanner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDoesTextContainMaliciousContent@Scanner@MaliciousTextScanning@@QEAA_NPEBG0@Z
    bool TryDoesTextContainMaliciousContent(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryScanClipboardForMaliciousWebContent@Scanner@MaliciousTextScanning@@QEAA?AUClipboardScanResult@2@XZ
    WindissectOpaque TryScanClipboardForMaliciousWebContent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Scanner@MaliciousTextScanning@@QEAA@XZ
    ~Scanner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAMSIContext@Scanner@MaliciousTextScanning@@AEAAXXZ
    void InitializeAMSIContext();
};
} // namespace MaliciousTextScanning
