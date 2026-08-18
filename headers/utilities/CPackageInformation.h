#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CPackageInformation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPackageInformation@@QEAA@XZ
    CPackageInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CPackageInformation@@UEAAJH@Z
    virtual long Commit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteApplicationTileInfoAt@CPackageInformation@@UEAAJK@Z
    virtual long DeleteApplicationTileInfoAt(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationTileInfoAt@CPackageInformation@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetApplicationTileInfoAt(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationTileInfoCount@CPackageInformation@@UEAAJPEAK@Z
    virtual long GetApplicationTileInfoCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastError@CPackageInformation@@UEAAJPEAW4TILE_INSTALLATION_ERROR_INFO@@PEAPEAG1@Z
    virtual long GetLastError(int *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@CPackageInformation@@UEAAJPEAPEAG@Z
    virtual long GetPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@CPackageInformation@@UEAAJPEAPEAG@Z
    virtual long GetPackageFullName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromDisk@CPackageInformation@@UEAAJPEBGW4SECONDARY_TILES_COMMIT_TYPE@@@Z
    virtual long LoadFromDisk(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadFromManifest@CPackageInformation@@UEAAJPEAUIXMLDOMDocument@@PEBG111H@Z
    virtual long LoadFromManifest(IXMLDOMDocument *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadPreinstallTiles@CPackageInformation@@UEAAJPEBGPEAPEAUIPropertyStore@@IH@Z
    virtual long LoadPreinstallTiles(unsigned short const *, IPropertyStore * *, unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadPreinstallTilesFromPackagePath@CPackageInformation@@UEAAJPEBG0IPEAPEBG@Z
    virtual long LoadPreinstallTilesFromPackagePath(unsigned short const *, unsigned short const *, unsigned int, unsigned short const * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Revert@CPackageInformation@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKnownByStore@CPackageInformation@@UEAAJH@Z
    virtual long SetKnownByStore(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOldPackageInformation@CPackageInformation@@UEAAJPEAUIPackageInformation@@@Z
    virtual long SetOldPackageInformation(IPackageInformation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSettingSyncState@CPackageInformation@@UEAAJH@Z
    virtual long SetSettingSyncState(int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateCategory@CPackageInformation@@UEAAJI@Z
    virtual long UpdateCategory(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateTemporaryLogos@CPackageInformation@@UEAAJPEAPEAUIPropertyStore@@I@Z
    virtual long UpdateTemporaryLogos(IPropertyStore * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?VerifyInformation@CPackageInformation@@UEAAJXZ
    virtual long VerifyInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommitApplicationViewNodeInstall@CPackageInformation@@AEAAJXZ
    long _CommitApplicationViewNodeInstall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommitApplicationViewNodeUninstall@CPackageInformation@@AEAAXXZ
    void _CommitApplicationViewNodeUninstall();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPackageInformation@@EEAA@XZ
    virtual ~CPackageInformation();
};
