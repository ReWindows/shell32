#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 87 member(s).
class CDesktopWallpaper {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CDesktopWallpaper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceSlideshow@CDesktopWallpaper@@UEAAJPEBGW4DESKTOP_SLIDESHOW_DIRECTION@@@Z
    virtual long AdvanceSlideshow(unsigned short const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopWallpaper@@QEAA@PEAUHWND__@@@Z
    CDesktopWallpaper(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeImageColorizationColor@CDesktopWallpaper@@UEAAJPEAK@Z
    virtual long ComputeImageColorizationColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CDesktopWallpaper@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CDesktopWallpaper@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableSpotlightCollection@CDesktopWallpaper@@UEAAJXZ
    virtual long DisableSpotlightCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CDesktopWallpaper@@UEAAJH@Z
    virtual long Enable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CDesktopWallpaper@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CDesktopWallpaper@@UEAAJPEAK@Z
    virtual long GetBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CDesktopWallpaper@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDevicePathAt@CDesktopWallpaper@@UEAAJIPEAPEAG@Z
    virtual long GetMonitorDevicePathAt(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDevicePathCount@CDesktopWallpaper@@UEAAJPEAI@Z
    virtual long GetMonitorDevicePathCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorNumber@CDesktopWallpaper@@UEAAJPEBGPEAI@Z
    virtual long GetMonitorNumber(unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRECT@CDesktopWallpaper@@UEAAJPEBGPEAUtagRECT@@@Z
    virtual long GetMonitorRECT(unsigned short const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CDesktopWallpaper@@UEAAJPEAW4DESKTOP_WALLPAPER_POSITION@@@Z
    virtual long GetPosition(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CDesktopWallpaper@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlideshow@CDesktopWallpaper@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetSlideshow(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlideshowOptions@CDesktopWallpaper@@UEAAJPEAW4DESKTOP_SLIDESHOW_OPTIONS@@PEAI@Z
    virtual long GetSlideshowOptions(int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CDesktopWallpaper@@UEAAJPEAW4DESKTOP_SLIDESHOW_STATE@@@Z
    virtual long GetStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWallpaper@CDesktopWallpaper@@UEAAJPEBGPEAPEAG@Z
    virtual long GetWallpaper(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDisplayChangeMessage@CDesktopWallpaper@@QEAA_JXZ
    int64_t HandleDisplayChangeMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePowerBroadcastMessage@CDesktopWallpaper@@QEAA_J_K_J@Z
    int64_t HandlePowerBroadcastMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSlideshowMessage@CDesktopWallpaper@@QEAA_JI_K_J@Z
    int64_t HandleSlideshowMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopWallpaper@@QEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CDesktopWallpaper@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDesktopWallpaper@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PE Export
    // Symbol: ?LockServer@CDesktopWallpaper@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintWallpaper@CDesktopWallpaper@@QEAAXPEAUHWND__@@PEAUHDC__@@IPEA_KPEAUtagRECT@@@Z
    void PaintWallpaper(HWND__*, HDC__*, unsigned int, uint64_t *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintWallpaperBitmapFromShellTask@CDesktopWallpaper@@UEAAJXZ
    virtual long PaintWallpaperBitmapFromShellTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintWallpaperThumbnail@CDesktopWallpaper@@UEAAJ_JHH@Z
    virtual long PaintWallpaperThumbnail(int64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayPauseSpotlightVideoWallpaper@CDesktopWallpaper@@UEAAJE@Z
    virtual long PlayPauseSpotlightVideoWallpaper(unsigned char);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDesktopWallpaper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClassObject@CDesktopWallpaper@@QEAAJXZ
    long RegisterClassObject();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CDesktopWallpaper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeClassObject@CDesktopWallpaper@@QEAAJXZ
    long RevokeClassObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CDesktopWallpaper@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleSpotlightImageFile@CDesktopWallpaper@@UEAAJPEBG0UtagSIZE@@@Z
    virtual long ScaleSpotlightImageFile(unsigned short const *, unsigned short const *, tagSIZE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CDesktopWallpaper@@UEAAJK@Z
    virtual long SetBackgroundColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CDesktopWallpaper@@UEAAJW4DESKTOP_WALLPAPER_POSITION@@@Z
    virtual long SetPosition(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSlideshow@CDesktopWallpaper@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSlideshow(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSlideshowOptions@CDesktopWallpaper@@UEAAJW4DESKTOP_SLIDESHOW_OPTIONS@@I@Z
    virtual long SetSlideshowOptions(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpotlightCollection@CDesktopWallpaper@@UEAAJPEBG00@Z
    virtual long SetSpotlightCollection(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaper@CDesktopWallpaper@@UEAAJPEBG0@Z
    virtual long SetWallpaper(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaperNoGP@CDesktopWallpaper@@UEAAJPEBG0@Z
    virtual long SetWallpaperNoGP(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsHDRWallpaperActive@CDesktopWallpaper@@SA_NXZ
    static bool s_IsHDRWallpaperActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CDesktopWallpaper@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopWallpaper@@QEAA@XZ
    ~CDesktopWallpaper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommitModifiedState@CDesktopWallpaper@@AEAAJXZ
    long _CommitModifiedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelayUpdate@CDesktopWallpaper@@AEAAJXZ
    long _DelayUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImagesInitialized@CDesktopWallpaper@@AEAAXW4EnsureImagesInitializedCaller@1@@Z
    void _EnsureImagesInitialized(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureModifiedState@CDesktopWallpaper@@AEAA_NXZ
    bool _EnsureModifiedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSlideshow@CDesktopWallpaper@@AEAA_NXZ
    bool _EnsureSlideshow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FullyInitializeSlideshow@CDesktopWallpaper@@AEAAXXZ
    void _FullyInitializeSlideshow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDefaultSpotlightImageCollection@CDesktopWallpaper@@AEAA_NPEBG@Z
    bool _IsDefaultSpotlightImageCollection(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Read@CDesktopWallpaper@@CAJPEAUIStream@@PEAUtagRECT@@@Z
    static long _Read(IStream *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadHeader@CDesktopWallpaper@@AEAAJPEAUIStream@@@Z
    long _ReadHeader(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadImages@CDesktopWallpaper@@AEAAJPEAUIStream@@_N@Z
    long _ReadImages(IStream *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadMonitors@CDesktopWallpaper@@AEAAJPEAUIStream@@_N@Z
    long _ReadMonitors(IStream *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadOptions@CDesktopWallpaper@@AEAAJPEAUIStream@@_N@Z
    long _ReadOptions(IStream *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadSlideshow@CDesktopWallpaper@@AEAAJPEAUIStream@@_N@Z
    long _ReadSlideshow(IStream *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshCDMSpotlightHotspot@CDesktopWallpaper@@AEAAJPEBG@Z
    long _RefreshCDMSpotlightHotspot(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPosition@CDesktopWallpaper@@AEAAJW4DESKTOP_WALLPAPER_POSITION@@@Z
    long _SetPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSlideshow@CDesktopWallpaper@@AEAAJPEAVCFileSource@@@Z
    long _SetSlideshow(CFileSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSlideshowOptions@CDesktopWallpaper@@AEAAJW4DESKTOP_SLIDESHOW_OPTIONS@@I@Z
    long _SetSlideshowOptions(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSpotlightContent@CDesktopWallpaper@@AEAAJPEBG00@Z
    long _SetSpotlightContent(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWallpaper@CDesktopWallpaper@@AEAAJPEBG0@Z
    long _SetWallpaper(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWallpaperFromModifiedState@CDesktopWallpaper@@AEAAJXZ
    long _SetWallpaperFromModifiedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateScreenWithAnimation@CDesktopWallpaper@@AEAAX_N@Z
    void _UpdateScreenWithAnimation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteHeader@CDesktopWallpaper@@AEAAJPEAUIStream@@@Z
    long _WriteHeader(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteImages@CDesktopWallpaper@@AEAAJPEAUIStream@@@Z
    long _WriteImages(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteMonitors@CDesktopWallpaper@@AEAAJPEAUIStream@@@Z
    long _WriteMonitors(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteOptions@CDesktopWallpaper@@AEAAJPEAUIStream@@@Z
    long _WriteOptions(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteSlideshow@CDesktopWallpaper@@AEAAJPEAUIStream@@@Z
    long _WriteSlideshow(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReadShellItemArrayFromStream@CDesktopWallpaper@@CAJPEAUIStream@@PEAPEAUIShellItemArray@@@Z
    static long s_ReadShellItemArrayFromStream(IStream *, IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RegistryChangeCallback_Wallpaper@CDesktopWallpaper@@CAXPEAX@Z
    static void s_RegistryChangeCallback_Wallpaper(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetBackgroundColor@CDesktopWallpaper@@CAJK@Z
    static long s_SetBackgroundColor(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateImageHistory@CDesktopWallpaper@@CAJPEBG@Z
    static long s_UpdateImageHistory(unsigned short const *);
};
