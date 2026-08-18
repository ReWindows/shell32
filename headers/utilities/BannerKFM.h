#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerKFM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV67@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@UEAAJPEAVInvokeHelper@DirectUI@@PEAPEAVElementProvider@7@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalMinSize@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@UEAA?AUtagSIZE@@XZ
    virtual tagSIZE GetPhysicalMinSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshData@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@UEAAJPEAVBannerData@2345@@Z
    virtual long RefreshData(::Microsoft::Windows::FileExplorer::Banners::BannerData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFontSize@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@AEAAXXZ
    void ResetFontSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColors@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@EEAAXXZ
    virtual void SetColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextSizeChanged@BannerKFM@Banners@FileExplorer@Windows@Microsoft@@EEAAXXZ
    virtual void TextSizeChanged();
};
} // namespace Microsoft::Windows::FileExplorer::Banners
