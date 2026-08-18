#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CFSIconOverlayManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFSIconOverlayManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CFSIconOverlayManager@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileOverlayInfo@CFSIconOverlayManager@@UEAAJPEBGKPEAHK@Z
    virtual long GetFileOverlayInfo(unsigned short const *, unsigned long, int *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedOverlayInfo@CFSIconOverlayManager@@UEAAJPEBGKPEAHKH@Z
    virtual long GetReservedOverlayInfo(unsigned short const *, unsigned long, int *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadNonloadedOverlayIdentifiers@CFSIconOverlayManager@@UEAAJXZ
    virtual long LoadNonloadedOverlayIdentifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlayIndexFromImageIndex@CFSIconOverlayManager@@UEAAJHPEAHH@Z
    virtual long OverlayIndexFromImageIndex(int, int *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFSIconOverlayManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshOverlayImages@CFSIconOverlayManager@@UEAAJK@Z
    virtual long RefreshOverlayImages(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFSIconOverlayManager@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIconOverlayCLSID@CFSIconOverlayManager@@CAHPEBUFSIconOverlay@@0_J@Z
    static int CompareIconOverlayCLSID(FSIconOverlay const *, FSIconOverlay const *, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconInformation@CFSIconOverlayManager@@CAJPEBV?$CDSA@U_GUID@@@@PEAV?$CDSA@UFSIconOverlay@@@@PEAU_DCA@@_N3@Z
    static long GetOverlayIconInformation(WindissectOpaque const *, WindissectOpaque *, _DCA *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadIconOverlayIdentifiers@CFSIconOverlayManager@@CAJPEBV?$CDSA@U_GUID@@@@PEAV?$CDSA@UFSIconOverlay@@@@@Z
    static long LoadIconOverlayIdentifiers(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeAddIconOverlayHandlersFromStateRepo@CFSIconOverlayManager@@CAJPEAU_DCA@@PEA_N@Z
    static long MaybeAddIconOverlayHandlersFromStateRepo(_DCA *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileOverlayInfo@CFSIconOverlayManager@@AEAAJPEBGKHPEAHK@Z
    long _GetFileOverlayInfo(unsigned short const *, unsigned long, int, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageIndex@CFSIconOverlayManager@@AEAAHPEBUFSIconOverlay@@@Z
    int _GetImageIndex(FSIconOverlay const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeReservedOverlays@CFSIconOverlayManager@@AEAAJXZ
    long _InitializeReservedOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_CompareCLSID@CFSIconOverlayManager@@CAHPEBU_GUID@@0_J@Z
    static int _s_CompareCLSID(_GUID const *, _GUID const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_LoadIconOverlayIdentifiers@CFSIconOverlayManager@@CAJPEBV?$CDSA@U_GUID@@@@PEAV?$CDSA@UFSIconOverlay@@@@@Z
    static long _s_LoadIconOverlayIdentifiers(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_ReleaseOverlay@CFSIconOverlayManager@@CAHPEAUFSIconOverlay@@PEAX@Z
    static int _s_ReleaseOverlay(FSIconOverlay *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFSIconOverlayManager@@AEAA@XZ
    ~CFSIconOverlayManager();
};
