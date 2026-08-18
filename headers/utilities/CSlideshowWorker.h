#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CSlideshowWorker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWallpaperChangeWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long BeginWallpaperChangeWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayChangeWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long DisplayChangeWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillDisabledSlideshowWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long KillDisabledSlideshowWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LightRefreshWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long LightRefreshWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long RefreshWorkItem(unsigned long *, bool, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSlideshowWorker@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadFileSourceWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long ReloadFileSourceWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long StartupWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long StopWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long TickWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WallpaperChangedWorkItem@CSlideshowWorker@@QEAAJPEAK_N_J@Z
    long WallpaperChangedWorkItem(unsigned long *, bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WorkItemCallback@CSlideshowWorker@@SAKPEAX@Z
    static unsigned long s_WorkItemCallback(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddImageEntry@CSlideshowWorker@@AEAA_NPEBGPEAUWALLPAPER_SLIDESHOW_IMAGE_ENTRY@@@Z
    bool _AddImageEntry(unsigned short const *, WALLPAPER_SLIDESHOW_IMAGE_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdvanceSlideshowToWallpaper@CSlideshowWorker@@AEAAXPEBG@Z
    void _AdvanceSlideshowToWallpaper(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageDimensions@CSlideshowWorker@@AEAA_NPEBGPEAUtagSIZE@@@Z
    bool _GetImageDimensions(unsigned short const *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextTimerDuration@CSlideshowWorker@@AEAAKXZ
    unsigned long _GetNextTimerDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextWallpaper@CSlideshowWorker@@AEAAJPEBGPEAGK@Z
    long _GetNextWallpaper(unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTransitionAnimationDuration@CSlideshowWorker@@CAKXZ
    static unsigned long _GetTransitionAnimationDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCurrentWallpaperInFileSource@CSlideshowWorker@@AEAA_NXZ
    bool _IsCurrentWallpaperInFileSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RoundNextTick@CSlideshowWorker@@AEAAKK@Z
    unsigned long _RoundNextTick(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendImages@CSlideshowWorker@@AEAA_NPEBG_N@Z
    bool _SendImages(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSlideshow@CSlideshowWorker@@AEAAJPEAVCSetSlideshowState@@@Z
    long _SetSlideshow(CSetSlideshowState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCurrentSystemTime@CSlideshowWorker@@CAJPEA_K@Z
    static long s_GetCurrentSystemTime(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTimeAtMidnight@CSlideshowWorker@@CAJPEA_K@Z
    static long s_GetTimeAtMidnight(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSlideshowWorker@@AEAA@XZ
    ~CSlideshowWorker();
};
