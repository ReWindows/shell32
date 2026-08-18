#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CThumbnailAdornerFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CThumbnailAdornerFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CThumbnailAdornerFactory@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailAdorner@CThumbnailAdornerFactory@@UEAAJPEAUIShellItem2@@HPEAPEAUIImageListImageDecorator@@@Z
    virtual long GetThumbnailAdorner(IShellItem2*, int, IImageListImageDecorator * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CThumbnailAdornerFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThumbnailAdornerFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildTypeOverlayAdorner@CThumbnailAdornerFactory@@AEAAJPEAUIShellItem2@@PEBGPEAPEAUIImageListImageDecorator@@@Z
    long _BuildTypeOverlayAdorner(IShellItem2*, unsigned short const *, IImageListImageDecorator * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailAdornerFactory@@EEAA@XZ
    virtual ~CThumbnailAdornerFactory();
};
