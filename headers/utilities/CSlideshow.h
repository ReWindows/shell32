#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CSlideshow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSlideshow@@QEAA@PEAUHWND__@@_KI@Z
    CSlideshow(HWND__*, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimatePersistCount@CSlideshow@@QEAAJXZ
    long EstimatePersistCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileSourceChanged@CSlideshow@@QEAAXXZ
    void FileSourceChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlideshow@CSlideshow@@QEAAJPEAPEAUIShellItemArray@@@Z
    long GetSlideshow(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntervalShorterThanPersistedTick@CSlideshow@@QEAA_NXZ
    bool IsIntervalShorterThanPersistedTick();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@CSlideshow@@QEAAHPEAPEAVCSlideshowWorker@@@Z
    int IsRunning(CSlideshowWorker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWallpaperChanged@CSlideshow@@QEAAX_K_J@Z
    void OnWallpaperChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PowerChanged@CSlideshow@@QEAAX_K_J@Z
    void PowerChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshAfterDisplayChange@CSlideshow@@QEAAJXZ
    long RefreshAfterDisplayChange();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSlideshow@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionChanged@CSlideshow@@QEAAX_K@Z
    void SessionChanged(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSlideshow@CSlideshow@@QEAAJPEAVCFileSource@@PEAG@Z
    long SetSlideshow(CFileSource *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@CSlideshow@@QEAAJ_J@Z
    long Tick(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCurrentWallpaper@CSlideshow@@SAJPEAGK@Z
    static long s_GetCurrentWallpaper(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RemoteWallpaperAllowed@CSlideshow@@SAHXZ
    static int s_RemoteWallpaperAllowed();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWorker@CSlideshow@@AEAAPEAVCSlideshowWorker@@XZ
    CSlideshowWorker * _GetWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InstallFileChangeNotification@CSlideshow@@AEAAXPEAVCFileSource@@@Z
    void _InstallFileChangeNotification(CFileSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LightRefresh@CSlideshow@@AEAAJK@Z
    long _LightRefresh(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueWorkItem@CSlideshow@@AEAAJP8CSlideshowWorker@@EAAJPEAK_N_J@Z2W4WORKITEMCALLBACK_FLAGS@@@Z
    long _QueueWorkItem(long ( ::CSlideshowWorker::*)(unsigned long *, bool, int64_t), int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Refresh@CSlideshow@@AEAAJPEAVCSetSlideshowState@@PEAH@Z
    long _Refresh(CSetSlideshowState *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopWorkerThread@CSlideshow@@AEAAXXZ
    void _StopWorkerThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UninstallFileChangeNotification@CSlideshow@@AEAAXXZ
    void _UninstallFileChangeNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NotificatonTimerCB@CSlideshow@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_NotificatonTimerCB(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSlideshow@@AEAA@XZ
    ~CSlideshow();
};
