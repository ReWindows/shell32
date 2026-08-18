#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BannerBase@Banners@FileExplorer@Windows@Microsoft@@QEAA@XZ
    BannerBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePreviousBanner@BannerBase@Banners@FileExplorer@Windows@Microsoft@@QEAAXW4BannerVisibility@2345@@Z
    void ClosePreviousBanner(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMinimumSpace@BannerBase@Banners@FileExplorer@Windows@Microsoft@@QEAAXUtagSIZE@@@Z
    void EnsureMinimumSpace(tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@BannerBase@Banners@FileExplorer@Windows@Microsoft@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@BannerBase@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@BannerBase@Banners@FileExplorer@Windows@Microsoft@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BannerBase@Banners@FileExplorer@Windows@Microsoft@@UEAA@XZ
    virtual ~BannerBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDarkModeForButton@BannerBase@Banners@FileExplorer@Windows@Microsoft@@IEAAXPEAUHWND__@@@Z
    void EnableDarkModeForButton(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAndToggleContainerVisibility@BannerBase@Banners@FileExplorer@Windows@Microsoft@@IEAAXW4BANNER_NOTIFICATION_EVENT@@W4BannerVisibility@2345@@Z
    void NotifyAndToggleContainerVisibility(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@BannerBase@Banners@FileExplorer@Windows@Microsoft@@MEAAXXZ
    virtual void Reset();
};
} // namespace Microsoft::Windows::FileExplorer::Banners
