#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CWallpaperCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CWallpaperCollection@@QEAAKXZ
    unsigned long GetCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CWallpaperCollection@@QEAAJPEAPEAG@Z
    long Pop(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushUnusedImage@CWallpaperCollection@@QEAAJPEBUWALLPAPER_SLIDESHOW_IMAGE_ENTRY@@@Z
    long PushUnusedImage(WALLPAPER_SLIDESHOW_IMAGE_ENTRY const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWallpaperCollection@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shuffle@CWallpaperCollection@@QEAAXPEBG@Z
    void Shuffle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CWallpaperCollection@@SAJPEAV?$CRefCountedDPA@V?$CDPAItemIdList@U_ITEMIDLIST_ABSOLUTE@@@@@@PEAPEAV1@@Z
    static long s_CreateInstance(WindissectOpaque *, CWallpaperCollection * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWallpaperCollection@@AEAA@XZ
    ~CWallpaperCollection();
};
