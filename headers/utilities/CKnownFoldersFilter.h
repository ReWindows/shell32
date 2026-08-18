#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CKnownFoldersFilter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownFolderTarget@CKnownFoldersFilter@@QEAA?AU_GUID@@AEBU2@@Z
    _GUID GetKnownFolderTarget(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKnownFolderSetByPolicy@CKnownFoldersFilter@@QEAA_NPEAUIKnownFolder@@@Z
    bool IsKnownFolderSetByPolicy(IKnownFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowInstanceFolder@CKnownFoldersFilter@@QEAAJAEBU_GUID@@PEA_N@Z
    long ShouldShowInstanceFolder(_GUID const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowKnownFolder@CKnownFoldersFilter@@QEAAJPEAUIKnownFolder@@PEA_N@Z
    long ShouldShowKnownFolder(IKnownFolder *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKnownFoldersFilter@@QEAA@XZ
    ~CKnownFoldersFilter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureManager@CKnownFoldersFilter@@AEAAJXZ
    long EnsureManager();
};
