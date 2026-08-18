#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 65 member(s).
class CWallpaperRenderer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWallpaperRenderer@@QEAA@XZ
    CWallpaperRenderer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeImageColorizationColor@CWallpaperRenderer@@QEAAJPEAK@Z
    long ComputeImageColorizationColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountActiveMonitors@CWallpaperRenderer@@QEBAIXZ
    unsigned int CountActiveMonitors() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayImage@CWallpaperRenderer@@QEAAJ_J@Z
    long DisplayImage(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpireImages@CWallpaperRenderer@@QEAAJ_J@Z
    long ExpireImages(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMonitor@CWallpaperRenderer@@QEBAHPEBG@Z
    int FindMonitor(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentImages@CWallpaperRenderer@@QEAAJ_J@Z
    long GetCurrentImages(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageAt@CWallpaperRenderer@@QEAAJHPEAGI@Z
    long GetImageAt(int, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageColorizationColor@CWallpaperRenderer@@QEAAJPEAKPEAUIMMERSIVE_COLOR_PREFERENCE@@@Z
    long GetImageColorizationColor(unsigned long *, IMMERSIVE_COLOR_PREFERENCE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageCount@CWallpaperRenderer@@QEAAHXZ
    int GetImageCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageForMonitor@CWallpaperRenderer@@QEAAJHPEAGI@Z
    long GetImageForMonitor(int, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageRectAt@CWallpaperRenderer@@QEAAJHPEAUtagRECT@@@Z
    long GetImageRectAt(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUpdatedIndex@CWallpaperRenderer@@QEBAHXZ
    int GetLastUpdatedIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatestImage@CWallpaperRenderer@@QEAAJPEAGI@Z
    long GetLatestImage(unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDevicePathAt@CWallpaperRenderer@@QEAAJIPEAGI@Z
    long GetMonitorDevicePathAt(unsigned int, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDevicePathCount@CWallpaperRenderer@@QEAAIXZ
    unsigned int GetMonitorDevicePathCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorNumber@CWallpaperRenderer@@QEAAJIPEAI@Z
    long GetMonitorNumber(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRECT@CWallpaperRenderer@@QEAAJIPEAUtagRECT@@@Z
    long GetMonitorRECT(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveVideoWallpaper@CWallpaperRenderer@@QEBA_NXZ
    bool HasActiveVideoWallpaper() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasStaticMultimonAssignments@CWallpaperRenderer@@QEBA_NXZ
    bool HasStaticMultimonAssignments() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWallpaperRenderer@@QEAAXPEAUHWND__@@0@Z
    void Initialize(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeImages@CWallpaperRenderer@@QEAAX_N@Z
    void InitializeImages(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CWallpaperRenderer@@QEAAX_N0@Z
    void Invalidate(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayChanged@CWallpaperRenderer@@QEAAXXZ
    void OnDisplayChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintDesktopWatermarkText@CWallpaperRenderer@@QEAAXPEAUHWND__@@PEAUHDC__@@IPEAPEAUHMONITOR__@@PEBUtagRECT@@_N@Z
    void PaintDesktopWatermarkText(HWND__*, HDC__*, unsigned int, HMONITOR__* *, tagRECT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintMonitor@CWallpaperRenderer@@QEAAXIPEAUHWND__@@PEAUHMONITOR__@@1PEAUHDC__@@PEBUtagRECT@@33@Z
    void PaintMonitor(unsigned int, HWND__*, HMONITOR__*, HMONITOR__*, HDC__*, tagRECT const *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintWallpaper@CWallpaperRenderer@@QEAAXPEAUHWND__@@PEAUHDC__@@IPEAPEAUHMONITOR__@@PEAUtagRECT@@@Z
    void PaintWallpaper(HWND__*, HDC__*, unsigned int, HMONITOR__* *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintWallpaperThumbnail@CWallpaperRenderer@@QEBAJPEAUHDC__@@HH@Z
    long PaintWallpaperThumbnail(HDC__*, int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayPauseVideoWallpaper@CWallpaperRenderer@@QEAAXPEBVCTranscodedImage@@_N@Z
    void PlayPauseVideoWallpaper(CTranscodedImage const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResolutionIndependentImageResources@CWallpaperRenderer@@QEAAXXZ
    void ReleaseResolutionIndependentImageResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleSpotlightImageHelper@CWallpaperRenderer@@QEAAJPEBGPEBUtagRECT@@PEAUIStream@@@Z
    long ScaleSpotlightImageHelper(unsigned short const *, tagRECT const *, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastUpdatedIndex@CWallpaperRenderer@@QEAAXH@Z
    void SetLastUpdatedIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaperPosition@CWallpaperRenderer@@QEAA_NW4DESKTOP_WALLPAPER_POSITION@@_NPEA_N@Z
    bool SetWallpaperPosition(int, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllVideoWallpapers@CWallpaperRenderer@@QEAAXXZ
    void UpdateAllVideoWallpapers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBlurredWallpaper@CWallpaperRenderer@@QEAAXIPEAPEAUHMONITOR__@@@Z
    void UpdateBlurredWallpaper(unsigned int, HMONITOR__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImage@CWallpaperRenderer@@QEAAXXZ
    void UpdateImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImage@CWallpaperRenderer@@QEAAJHPEBG@Z
    long UpdateImage(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BitBltToScreen@CWallpaperRenderer@@SAXPEAUHBITMAP__@@PEAUHDC__@@AEBUtagRECT@@2@Z
    static void s_BitBltToScreen(HBITMAP__*, HDC__*, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCachePath@CWallpaperRenderer@@SAJPEAGI@Z
    static long s_GetCachePath(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTranscodedImagePath@CWallpaperRenderer@@SAPEBGXZ
    static unsigned short const * s_GetTranscodedImagePath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetWallpaperHelper@CWallpaperRenderer@@SAJPEAGI@Z
    static long s_GetWallpaperHelper(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsInternalFile@CWallpaperRenderer@@SA_NPEBG@Z
    static bool s_IsInternalFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetWallpaperHelper@CWallpaperRenderer@@SAJPEBGK@Z
    static long s_SetWallpaperHelper(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetWallpaperToInternalFile@CWallpaperRenderer@@SAJXZ
    static long s_SetWallpaperToInternalFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ValidateImageFile@CWallpaperRenderer@@SA_NPEBG@Z
    static bool s_ValidateImageFile(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWallpaperRenderer@@QEAA@XZ
    ~CWallpaperRenderer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPauseVideoWallpaper@CWallpaperRenderer@@AEBA_NPEAUHMONITOR__@@@Z
    bool ShouldPauseVideoWallpaper(HMONITOR__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyStaticImage@CWallpaperRenderer@@AEAAJPEAVCMemoryCachedImage@@PEBG@Z
    long _ApplyStaticImage(CMemoryCachedImage *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginPaintBatch@CWallpaperRenderer@@AEAAXI@Z
    void _BeginPaintBatch(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBitmapOfDesktopWallpaper@CWallpaperRenderer@@AEBAXPEAUHDC__@@AEBUtagRECT@@PEAPEAUHBITMAP__@@@Z
    void _CreateBitmapOfDesktopWallpaper(HDC__*, tagRECT const &, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBitmapOfDesktopWallpaperHelper@CWallpaperRenderer@@AEBA_NPEAUHBITMAP__@@AEBUtagRECT@@PEAPEAU2@@Z
    bool _CreateBitmapOfDesktopWallpaperHelper(HBITMAP__*, tagRECT const &, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetermineImageScale@CWallpaperRenderer@@AEBAXPEBUtagRECT@@W4DESKTOP_WALLPAPER_POSITION@@_NPEAI3@Z
    void _DetermineImageScale(tagRECT const *, int, bool, unsigned int *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndPaintBatch@CWallpaperRenderer@@AEAAXXZ
    void _EndPaintBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlagImagesForRetranscode@CWallpaperRenderer@@AEAAXXZ
    void _FlagImagesForRetranscode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentColorizationImages@CWallpaperRenderer@@AEAAJPEAPEAPEAVCMemoryCachedImage@@PEAI@Z
    long _GetCurrentColorizationImages(CMemoryCachedImage * * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageForPrimaryMonitorWithGlobalFallback@CWallpaperRenderer@@AEBAXPEAPEAVCMemoryCachedImage@@@Z
    void _GetImageForPrimaryMonitorWithGlobalFallback(CMemoryCachedImage * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOffsetAndTileMode@CWallpaperRenderer@@AEBAXPEBUtagRECT@@PEBUtagBITMAP@@W4DESKTOP_WALLPAPER_POSITION@@_NPEAH4@Z
    void _GetOffsetAndTileMode(tagRECT const *, tagBITMAP const *, int, bool, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWallpaperBitmap@CWallpaperRenderer@@AEBA_NPEAUHDC__@@PEBUtagRECT@@PEAW4DESKTOP_WALLPAPER_POSITION@@PEAPEAUHBITMAP__@@@Z
    bool _GetWallpaperBitmap(HDC__*, tagRECT const *, int *, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWallpaperBitmapHelper@CWallpaperRenderer@@AEBA_NPEAUHDC__@@PEBUtagRECT@@PEAVCMemoryCachedImage@@PEAW4DESKTOP_WALLPAPER_POSITION@@PEAPEAUHBITMAP__@@@Z
    bool _GetWallpaperBitmapHelper(HDC__*, tagRECT const *, CMemoryCachedImage *, int *, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAnyAsyncTranscodePending@CWallpaperRenderer@@AEBA_NXZ
    bool _IsAnyAsyncTranscodePending() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintDesktopWatermarkText@CWallpaperRenderer@@AEAAXIPEAUHDC__@@PEAUHMONITOR__@@PEBUtagRECT@@_N@Z
    void _PaintDesktopWatermarkText(unsigned int, HDC__*, HMONITOR__*, tagRECT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropagateAsyncTranscodeCallback@CWallpaperRenderer@@AEAAXXZ
    void _PropagateAsyncTranscodeCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreWindowPaintDC@CWallpaperRenderer@@AEAAXPEAUHDC__@@AEBUtagPOINT@@1K@Z
    void _RestoreWindowPaintDC(HDC__*, tagPOINT const &, tagPOINT const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupWindowPaintDC@CWallpaperRenderer@@AEAAXPEAUHWND__@@PEAUHDC__@@PEAUtagPOINT@@2PEAK@Z
    void _SetupWindowPaintDC(HWND__*, HDC__*, tagPOINT *, tagPOINT *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImageColorizationColorHelper@CWallpaperRenderer@@AEAAXXZ
    void _UpdateImageColorizationColorHelper();
};
