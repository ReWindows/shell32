#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class SyncEngineStatusUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSyncTransferStatus@SyncEngineStatusUtils@@YAJPEAPEAUISyncTransferStatus@@@Z
    long CreateSyncTransferStatus(ISyncTransferStatus * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemSyncStatusInformation@SyncEngineStatusUtils@@YAJPEAUIShellItem@@PEAUISyncTransferStatus@@W4ItemSyncStatus@@PEAW44@PEAPEAG@Z
    long GetItemSyncStatusInformation(IShellItem *, ISyncTransferStatus *, int, int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncTransferStatusFromIndexer@SyncEngineStatusUtils@@YAJPEBGPEAUISyncTransferStatus@@PEAW4SYNC_TRANSFER_STATUS@@PEAJ@Z
    long GetSyncTransferStatusFromIndexer(unsigned short const *, ISyncTransferStatus *, int *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyItemSyncStatusInformation@SyncEngineStatusUtils@@YA_NPEAUIShellItem@@W4ItemSyncStatus@@PEAPEAG@Z
    bool VerifyItemSyncStatusInformation(IShellItem *, int, unsigned short * *);
};
