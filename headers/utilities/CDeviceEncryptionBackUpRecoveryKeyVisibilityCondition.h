#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CDeviceEncryptionBackUpRecoveryKeyVisibilityCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@CDeviceEncryptionBackUpRecoveryKeyVisibilityCondition@@UEAAJPEAUINamedPropertyStore@@PEAH@Z
    virtual long Evaluate(INamedPropertyStore *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOSVolumeProvisioned@CDeviceEncryptionBackUpRecoveryKeyVisibilityCondition@@SAJPEA_N@Z
    static long IsOSVolumeProvisioned(bool *);
};
