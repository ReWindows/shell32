#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 3 member(s).
class SyncProviderTelemetryHelpers {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@SyncProviderTelemetryHelpers@@SAJPEAUIShellItem@@PEAPEAG@Z
    static long GetFilePath(IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderNameAndInfoFlags@SyncProviderTelemetryHelpers@@SAJPEAUIShellItem@@PEAPEAGPEAW4STORAGE_PROVIDER_INFO_FLAGS@@@Z
    static long GetProviderNameAndInfoFlags(IShellItem *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageProviderInfo@SyncProviderTelemetryHelpers@@SAJPEAUIShellItem@@PEAPEAUIStorageProviderInfo@@@Z
    static long GetStorageProviderInfo(IShellItem *, IStorageProviderInfo * *);
};
