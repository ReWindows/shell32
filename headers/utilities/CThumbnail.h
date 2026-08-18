#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CThumbnail {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CThumbnail@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CThumbnail@@UEAAJPEBGKJJ@Z
    virtual long GetBitmap(unsigned short const *, unsigned long, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapFromIDList@CThumbnail@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@KJJ@Z
    virtual long GetBitmapFromIDList(_ITEMIDLIST_ABSOLUTE const *, unsigned long, long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapFromShellItem@CThumbnail@@UEAAJPEAUIShellItem@@KJJ@Z
    virtual long GetBitmapFromShellItem(IShellItem *, unsigned long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CThumbnail@@UEAAJPEAUHWND__@@I@Z
    virtual long Init(HWND__*, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CThumbnail@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThumbnail@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BitmapFromIDListInternal@CThumbnail@@SAJPEAUIShellItem@@IHPEAUIUnknown@@PEAPEAUISharedBitmap@@@Z
    static long s_BitmapFromIDListInternal(IShellItem *, unsigned int, int, IUnknown *, ISharedBitmap * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnail@@EEAA@XZ
    virtual ~CThumbnail();
};
