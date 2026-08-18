#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
namespace Microsoft::Windows::FileExplorer::Banners {
class BannerData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAA@XZ
    BannerData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderScope@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAAJPEAPEAG@Z
    long GetFolderScope(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoBitmap@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEBAJUtagSIZE@@PEAPEAUHBITMAP__@@@Z
    long GetLogoBitmap(tagSIZE, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAAJPEBG00@Z
    long Initialize(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromContentId@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAAJPEBG0@Z
    long InitializeFromContentId(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAA_NXZ
    bool IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matches@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAA_NPEAUISyncRootManager@@PEBG1@Z
    bool Matches(ISyncRootManager *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEvent@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAAJW4BANNER_NOTIFICATION_EVENT@@_N@Z
    long NotifyEvent(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingDeletion@BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAAXXZ
    void SetPendingDeletion();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BannerData@Banners@FileExplorer@Windows@Microsoft@@QEAA@XZ
    ~BannerData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocations@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEAAJPEBG0@Z
    long AddLocations(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHBitmapFromTargetedContentValue@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEAAJPEAUITargetedContentValue@TargetedContent@Services@4@PEAPEAUHBITMAP__@@@Z
    long GetHBitmapFromTargetedContentValue(::Windows::Services::TargetedContent::ITargetedContentValue *, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledHBitmap@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEBAJPEAUHBITMAP__@@UtagSIZE@@PEAPEAU6@@Z
    long GetScaledHBitmap(HBITMAP__*, tagSIZE, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotificationTask@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEAAJW4BANNER_NOTIFICATION_EVENT@@@Z
    long SendNotificationTask(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlyph@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEAAJPEBG@Z
    long SetGlyph(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePendingNotifications@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEAA_K_NW4BANNER_NOTIFICATION_EVENT@@@Z
    uint64_t UpdatePendingNotifications(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettings@BannerData@Banners@FileExplorer@Windows@Microsoft@@AEAAJW4BANNER_NOTIFICATION_EVENT@@@Z
    long UpdateSettings(int);
};
} // namespace Microsoft::Windows::FileExplorer::Banners
