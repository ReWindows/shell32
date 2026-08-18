#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CWallpaperWindow {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWallpaperWindow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWallpaperWindow@@SAJPEAUHWND__@@PEAUIWallpaperHost@@PEAPEAV1@@Z
    static long Create(HWND__*, IWallpaperHost *, CWallpaperWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CWallpaperWindow@@UEAAXXZ
    virtual void DestroyWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FadeIn@CWallpaperWindow@@UEAAJPEAUIWallpaperWindow@@KKUIMMERSIVE_COLOR_PREFERENCE@@@Z
    virtual long FadeIn(IWallpaperWindow *, unsigned long, unsigned long, IMMERSIVE_COLOR_PREFERENCE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CWallpaperWindow@@UEBAPEAUHWND__@@XZ
    virtual HWND__* GetWindow() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWallpaperWindow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWallpaperWindow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedDesktopVisualXamlHostHwnd@CWallpaperWindow@@UEAAJPEAUHWND__@@@Z
    virtual long SetSharedDesktopVisualXamlHostHwnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CWallpaperWindow@@UEAAJ_N@Z
    virtual long Update(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWallpaperVisuals@CWallpaperWindow@@IEAAJXZ
    long CreateWallpaperVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWallpaperWindow@@IEAAJPEAUHWND__@@@Z
    long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationTimer@CWallpaperWindow@@IEAAXXZ
    void OnAnimationTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWallpaperUpdated@CWallpaperWindow@@IEAAXXZ
    void RegisterWallpaperUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CWallpaperWindow@@IEAA_NXZ
    bool StopAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRootVisual@CWallpaperWindow@@IEAAXXZ
    void UpdateRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWallpaper@CWallpaperWindow@@IEAAJM@Z
    long UpdateWallpaper(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowPos@CWallpaperWindow@@IEBAJPEAUtagSIZE@@@Z
    long UpdateWindowPos(tagSIZE *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CWallpaperWindow@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWallpaperWindow@@IEAA@XZ
    ~CWallpaperWindow();
};
