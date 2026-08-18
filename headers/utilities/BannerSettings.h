#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowBanner@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@QEAA_NW4ScenarioType@2345@PEBG1@Z
    bool CanShowBanner(int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBannersEnabled@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@QEAA_NXZ
    bool IsBannersEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBannerHide@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@QEAAJW4ScenarioType@2345@PEBG_N1@Z
    long OnBannerHide(int, unsigned short const *, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBannerShow@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@QEAAJW4ScenarioType@2345@PEBG1@Z
    long OnBannerShow(int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@QEAAXXZ
    void Uninitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@AEAAPEAVBannerMetaData@2345@W4ScenarioType@2345@PEBG@Z
    ::Microsoft::Windows::FileExplorer::Banners::BannerMetaData * Find(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Persist@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@AEBAJPEAVBannerMetaData@2345@_N1@Z
    long Persist(::Microsoft::Windows::FileExplorer::Banners::BannerMetaData *, bool, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPreviousBannerUpTime@BannerSettings@Banners@FileExplorer@Windows@Microsoft@@AEAAJW4ScenarioType@2345@PEBG1@Z
    long ResetPreviousBannerUpTime(int, unsigned short const *, unsigned short const *);
};
} // namespace Microsoft::Windows::FileExplorer::Banners
