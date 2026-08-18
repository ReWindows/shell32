#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 39 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerContainer {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BannerContainer@Banners@FileExplorer@Windows@Microsoft@@QEAA@XZ
    BannerContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV67@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInnerElementDestroyed@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAVElement@DirectUI@@PEAUEvent@7@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@7@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@7@HPEAVValue@7@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@7@HPEAVValue@7@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@QEAAJ_N@Z
    long SetVisible(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BannerContainer@Banners@FileExplorer@Windows@Microsoft@@UEAA@XZ
    virtual ~BannerContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBanner@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@AEAAJW4TemplateVersion@2345@@Z
    long AddBanner(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBannerId@BannerContainer@Banners@FileExplorer@Windows@Microsoft@@AEAAPEBGW4TemplateVersion@2345@@Z
    unsigned short const * GetBannerId(int);
};
} // namespace Microsoft::Windows::FileExplorer::Banners
