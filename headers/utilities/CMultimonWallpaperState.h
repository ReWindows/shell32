#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
class CMultimonWallpaperState {
public:
    class CMultimonSpanLayout;
    class CMultimonWallpaperEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutospanSupported@CMultimonWallpaperState@@QEBA_N_N@Z
    bool AutospanSupported(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAnyMonitorHaveAnImage@CMultimonWallpaperState@@QEBA_NXZ
    bool DoesAnyMonitorHaveAnImage() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAnyMonitorNeedAnImage@CMultimonWallpaperState@@QEBA_NXZ
    bool DoesAnyMonitorNeedAnImage() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMultimonWallpaperState@@QEBAHXZ
    int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayInfo@CMultimonWallpaperState@@QEAAPEAUIDisplayInformationStaticsInterop@@XZ
    IDisplayInformationStaticsInterop * GetDisplayInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageAt@CMultimonWallpaperState@@QEAAPEAVCTranscodedImage@@H@Z
    CTranscodedImage * GetImageAt(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageForMonitor@CMultimonWallpaperState@@QEAAPEAVCTranscodedImage@@PEBUtagRECT@@@Z
    CTranscodedImage * GetImageForMonitor(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageForMonitor@CMultimonWallpaperState@@QEAAPEAVCTranscodedImage@@PEAUHMONITOR__@@PEAM@Z
    CTranscodedImage * GetImageForMonitor(HMONITOR__*, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageOrientation@CMultimonWallpaperState@@QEBA?AW4IMAGE_ORIENTATION@@AEBUtagSIZE@@_N@Z
    int GetImageOrientation(tagSIZE const &, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUpdatedImage@CMultimonWallpaperState@@QEAAPEAVCTranscodedImage@@_N@Z
    CTranscodedImage * GetLastUpdatedImage(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorAt@CMultimonWallpaperState@@QEAAPEAUHMONITOR__@@H@Z
    HMONITOR__* GetMonitorAt(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRectAt@CMultimonWallpaperState@@QEAA_NHPEAUtagRECT@@@Z
    bool GetMonitorRectAt(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMonitorAt@CMultimonWallpaperState@@QEAA_NH@Z
    bool HasMonitorAt(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMultimonWallpaperState@@QEAAJPEAUHWND__@@PEA_N@Z
    long Init(HWND__*, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLastUpdatedMonitorPrimary@CMultimonWallpaperState@@QEBA_NXZ
    bool IsLastUpdatedMonitorPrimary() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayChanged@CMultimonWallpaperState@@QEAAXPEA_N@Z
    void OnDisplayChanged(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshDisplayConfig@CMultimonWallpaperState@@QEAAJPEA_N@Z
    long RefreshDisplayConfig(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMultimonWallpaperState@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetImages@CMultimonWallpaperState@@QEAAXXZ
    void ResetImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNextMonitor@CMultimonWallpaperState@@QEAAJPEBUWALLPAPER_SLIDESHOW_IMAGE_ENTRY@@W4DESKTOP_WALLPAPER_POSITION@@_N@Z
    long UpdateNextMonitor(WALLPAPER_SLIDESHOW_IMAGE_ENTRY const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateImageOrientationThreshold@CMultimonWallpaperState@@QEAAX_N@Z
    void _CalculateImageOrientationThreshold(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextMonitor@CMultimonWallpaperState@@QEAAHHW4IMAGE_ORIENTATION@@W4GET_NEXT_MONITOR_MODE@1@PEBG_N@Z
    int _GetNextMonitor(int, int, int, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasEntries@CMultimonWallpaperState@@QEAA_NW4IMAGE_ORIENTATION@@W4GET_NEXT_MONITOR_MODE@1@PEBG@Z
    bool _HasEntries(int, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshDisplayConfigForMonitor@CMultimonWallpaperState@@SAJPEAUREFRESH_DISPLAY_CONFIG_DATA@1@PEAUHMONITOR__@@UtagRECT@@PEBGI@Z
    static long _RefreshDisplayConfigForMonitor(WindissectOpaque *, HMONITOR__*, tagRECT, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CMultimonWallpaperState@@SAJPEBGPEAUHWND__@@PEAPEAV1@PEA_N@Z
    static long s_CreateInstance(unsigned short const *, HWND__*, CMultimonWallpaperState * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RefreshDisplayMonitorEnumProc@CMultimonWallpaperState@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_RefreshDisplayMonitorEnumProc(HMONITOR__*, HDC__*, tagRECT *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultimonWallpaperState@@QEAA@XZ
    ~CMultimonWallpaperState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntryForMonitor@CMultimonWallpaperState@@IEAAPEAVCMultimonWallpaperEntry@1@PEAUHMONITOR__@@@Z
    WindissectOpaque * _GetEntryForMonitor(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetMaxEntryCount@CMultimonWallpaperState@@KAHXZ
    static int s_GetMaxEntryCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ResetImagesCB@CMultimonWallpaperState@@KAHPEAVCMultimonWallpaperEntry@1@PEAX@Z
    static int s_ResetImagesCB(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ResetLiveDataCB@CMultimonWallpaperState@@KAHPEAVCMultimonWallpaperEntry@1@PEAX@Z
    static int s_ResetLiveDataCB(WindissectOpaque *, void *);
};
