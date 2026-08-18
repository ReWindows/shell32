#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
namespace CMultimonWallpaperState {
class CMultimonWallpaperEntry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMultimonWallpaperEntry@CMultimonWallpaperState@@QEAA@HPEBGPEAUHMONITOR__@@@Z
    CMultimonWallpaperEntry(int, unsigned short const *, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsiderEntry@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEBA_NW4GET_NEXT_MONITOR_MODE@2@PEBGH_N@Z
    bool ConsiderEntry(int, unsigned short const *, int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorPrimary@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEBA_NXZ
    bool IsMonitorPrimary() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameMonitor@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEBA_NAEBUtagRECT@@@Z
    bool IsSameMonitor(tagRECT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStarving@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEBA_NH@Z
    bool IsStarving(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsImage@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEBA_N_N@Z
    bool NeedsImage(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsImageDispatch@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEBA_N_N@Z
    bool NeedsImageDispatch(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetColorInfoChangeToken@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEAAXXZ
    void ResetColorInfoChangeToken();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorInfoChangeToken@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEAAXPEAUIDisplayInformation5@Display@Graphics@Windows@@UEventRegistrationToken@@@Z
    void SetColorInfoChangeToken(::Windows::Graphics::Display::IDisplayInformation5*, EventRegistrationToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CMultimonWallpaperEntry@CMultimonWallpaperState@@QEAAXPEAUHMONITOR__@@@Z
    void SetMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MultimonWallpaperEntrySort@CMultimonWallpaperEntry@CMultimonWallpaperState@@SAHPEBV12@0_J@Z
    static int s_MultimonWallpaperEntrySort(WindissectOpaque const *, WindissectOpaque const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultimonWallpaperEntry@CMultimonWallpaperState@@QEAA@XZ
    ~CMultimonWallpaperEntry();
};
} // namespace CMultimonWallpaperState
