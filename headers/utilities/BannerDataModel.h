#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerDataModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureReady@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@QEAAJK@Z
    long EnsureReady(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeInstance@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@SAXXZ
    static void FreeInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBannerDataForFolder@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@QEAAJPEAUIShellFolder@@QEAPEAVBannerData@2345@@Z
    long GetBannerDataForFolder(IShellFolder *, ::Microsoft::Windows::FileExplorer::Banners::BannerData * * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@SAPEAV12345@XZ
    static ::Microsoft::Windows::FileExplorer::Banners::BannerDataModel * GetInstance();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSchema@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@MEAAJXZ
    virtual long LoadSchema();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@AEAA@XZ
    BannerDataModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@AEAAJPEBG0QEAPEAVBannerData@2345@@Z
    long Find(unsigned short const *, unsigned short const *, ::Microsoft::Windows::FileExplorer::Banners::BannerData * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireUniqueOpportunityEventForBanners@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@AEBAXPEAUISyncRootManager@@PEBG1_N@Z
    void FireUniqueOpportunityEventForBanners(ISyncRootManager *, unsigned short const *, unsigned short const *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDataModelRefresh@BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@AEAAXXZ
    void TriggerDataModelRefresh();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BannerDataModel@Banners@FileExplorer@Windows@Microsoft@@AEAA@XZ
    ~BannerDataModel();
};
} // namespace Microsoft::Windows::FileExplorer::Banners
