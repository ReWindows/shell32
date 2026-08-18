#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerV1 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@BannerV1@Banners@FileExplorer@Windows@Microsoft@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV67@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@BannerV1@Banners@FileExplorer@Windows@Microsoft@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalMinSize@BannerV1@Banners@FileExplorer@Windows@Microsoft@@UEAA?AUtagSIZE@@XZ
    virtual tagSIZE GetPhysicalMinSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@BannerV1@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@7@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshData@BannerV1@Banners@FileExplorer@Windows@Microsoft@@UEAAJPEAVBannerData@2345@@Z
    virtual long RefreshData(::Microsoft::Windows::FileExplorer::Banners::BannerData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@BannerV1@Banners@FileExplorer@Windows@Microsoft@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@BannerV1@Banners@FileExplorer@Windows@Microsoft@@EEAAXXZ
    virtual void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBodyTextHeight@BannerV1@Banners@FileExplorer@Windows@Microsoft@@AEAAJPEAVElement@DirectUI@@H@Z
    long SetBodyTextHeight(::DirectUI::Element *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColors@BannerV1@Banners@FileExplorer@Windows@Microsoft@@EEAAXXZ
    virtual void SetColors();
    // Category: Method | Source: PE Export
    // Symbol: ?TextSizeChanged@BannerV1@Banners@FileExplorer@Windows@Microsoft@@EEAAXXZ
    virtual void TextSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImages@BannerV1@Banners@FileExplorer@Windows@Microsoft@@AEAAXXZ
    void UpdateImages();
};
} // namespace Microsoft::Windows::FileExplorer::Banners
