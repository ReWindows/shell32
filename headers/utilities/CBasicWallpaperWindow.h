#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CBasicWallpaperWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBasicWallpaperWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBasicWallpaperWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CBasicWallpaperWindow@@SAJPEAPEAV1@@Z
    static long s_CreateInstance(CBasicWallpaperWindow * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CBasicWallpaperWindow@@AEAAJXZ
    long _Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Resize@CBasicWallpaperWindow@@AEAAXXZ
    void _Resize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MonitorEnumProc@CBasicWallpaperWindow@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_MonitorEnumProc(HMONITOR__*, HDC__*, tagRECT *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CBasicWallpaperWindow@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
