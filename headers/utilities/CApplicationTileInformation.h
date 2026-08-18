#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 39 member(s).
class CApplicationTileInformation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationTileInformation@@QEAA@XZ
    CApplicationTileInformation();
    // Category: Method | Source: PE Export
    // Symbol: ?Commit@CApplicationTileInformation@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DidCommitChanges@CApplicationTileInformation@@UEAAJXZ
    virtual long DidCommitChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesApplicationIdMatch@CApplicationTileInformation@@UEAAJPEBG@Z
    virtual long DoesApplicationIdMatch(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationDisplayName@CApplicationTileInformation@@UEAAJHPEAPEAG@Z
    virtual long GetApplicationDisplayName(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationId@CApplicationTileInformation@@UEAAJPEAPEAG@Z
    virtual long GetApplicationId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CApplicationTileInformation@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastError@CApplicationTileInformation@@UEAAJPEAW4TILE_INSTALLATION_ERROR_INFO@@PEAPEAG@Z
    virtual long GetLastError(int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinWidth@CApplicationTileInformation@@UEAAJPEAW4APPLICATION_VIEW_MIN_WIDTH@@@Z
    virtual long GetMinWidth(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOldPropertyStore@CApplicationTileInformation@@UEAAJPEAPEAUIPropertyStore@@@Z
    virtual long GetOldPropertyStore(IPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRelativeApplicationId@CApplicationTileInformation@@UEAAJPEAPEAG@Z
    virtual long GetPackageRelativeApplicationId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CApplicationTileInformation@@UEAAJPEAPEAUIPropertyStore@@@Z
    virtual long GetPropertyStore(IPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CApplicationTileInformation@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CApplicationTileInformation@@UEAAJPEAW4APPINFO_TYPE@@@Z
    virtual long GetType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePreinstallTile@CApplicationTileInformation@@UEAAJPEBGPEAUIPropertyStore@@H@Z
    virtual long InitializePreinstallTile(unsigned short const *, IPropertyStore *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSecondaryTile@CApplicationTileInformation@@UEAAJPEAUIPropertyStore@@@Z
    virtual long InitializeSecondaryTile(IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSecondaryTilesInstallation@CApplicationTileInformation@@UEAAJPEAUIPropertyStore@@W4SECONDARY_TILES_COMMIT_TYPE@@@Z
    virtual long InitializeSecondaryTilesInstallation(IPropertyStore *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithFlags@CApplicationTileInformation@@UEAAJPEBG0KK@Z
    virtual long InitializeWithFlags(unsigned short const *, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithPackageInformation@CApplicationTileInformation@@UEAAJPEBG000H@Z
    virtual long InitializeWithPackageInformation(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithPropertyStore@CApplicationTileInformation@@UEAAJPEAUIPropertyStore@@@Z
    virtual long InitializeWithPropertyStore(IPropertyStore *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CApplicationTileInformation@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PE Export
    // Symbol: ?Load@CApplicationTileInformation@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PE Export
    // Symbol: ?Revert@CApplicationTileInformation@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CApplicationTileInformation@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundTaskExtensionsList@CApplicationTileInformation@@UEAAJPEAUIXMLDOMNodeList@@@Z
    virtual long SetBackgroundTaskExtensionsList(IXMLDOMNodeList *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInUpdate@CApplicationTileInformation@@UEAAJPEAUIApplicationTileInformation@@@Z
    virtual long SetInUpdate(IApplicationTileInformation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinWidth@CApplicationTileInformation@@UEAAXW4APPLICATION_VIEW_MIN_WIDTH@@@Z
    virtual void SetMinWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestFlags@CApplicationTileInformation@@UEAAJK@Z
    virtual long SetTestFlags(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyInformation@CApplicationTileInformation@@UEAAJXZ
    virtual long VerifyInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyFlags@CApplicationTileInformation@@AEAAJAEBVCPropertyStoreHelper@@AEAV2@K@Z
    long _CopyFlags(CPropertyStoreHelper const &, CPropertyStoreHelper &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAppUserModelId@CApplicationTileInformation@@AEAAJXZ
    long _EnsureAppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureValidDefaultProperties@CApplicationTileInformation@@AEAAJAEAVCPropertyStoreHelper@@@Z
    long _EnsureValidDefaultProperties(CPropertyStoreHelper &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWithPropertyStore@CApplicationTileInformation@@AEAAJPEAUIPropertyStore@@@Z
    long _InitializeWithPropertyStore(IPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistToStream@CApplicationTileInformation@@AEAAJPEAUIUnknown@@PEAUIStream@@@Z
    long _PersistToStream(IUnknown *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SerializeAppInfo@CApplicationTileInformation@@AEAAJPEAUIStream@@W4SERIALIZE_INFO_TYPE@1@@Z
    long _SerializeAppInfo(IStream *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationTileInformation@@EEAA@XZ
    virtual ~CApplicationTileInformation();
};
