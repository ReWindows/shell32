#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CPackageInstallStateStoreEnum {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageStateByIndex@CPackageInstallStateStoreEnum@@UEAAJKPEAPEAGPEAW4PACKAGE_INSTALLATION_STATE@@@Z
    virtual long GetPackageStateByIndex(unsigned long, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageStateByName@CPackageInstallStateStoreEnum@@UEAAJPEBGPEAW4PACKAGE_INSTALLATION_STATE@@@Z
    virtual long GetPackageStateByName(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageStateCount@CPackageInstallStateStoreEnum@@UEAAJPEAK@Z
    virtual long GetPackageStateCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreVersion@CPackageInstallStateStoreEnum@@UEAAJPEAK@Z
    virtual long GetStoreVersion(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPackageInstallStateStoreEnum@@UEAAJXZ
    virtual long Load();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPackageInstallStateStoreEnum@@UEAA@XZ
    virtual ~CPackageInstallStateStoreEnum();
};
