#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
namespace Settings::Internal {
class UnsupportedHardwareNotificationCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedValue@UnsupportedHardwareNotificationCache@Internal@Settings@@QEAAXPEBG_N@Z
    void SetCachedValue(unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedValueWithReason@UnsupportedHardwareNotificationCache@Internal@Settings@@QEAAXPEBG_N0@Z
    void SetCachedValueWithReason(unsigned short const *, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValidCachedValue@UnsupportedHardwareNotificationCache@Internal@Settings@@QEAA_NPEBGAEA_N@Z
    bool TryGetValidCachedValue(unsigned short const *, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOpenCacheRegistryKey@UnsupportedHardwareNotificationCache@Internal@Settings@@AEAAXXZ
    void EnsureOpenCacheRegistryKey();
};
} // namespace Settings::Internal
