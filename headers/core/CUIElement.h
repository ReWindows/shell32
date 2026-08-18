#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CUIElement {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIElement@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIElement@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIElement@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icon@CUIElement@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Icon(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CUIElement@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Name(IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tooltip@CUIElement@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long get_Tooltip(IShellItemArray *, unsigned short * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIElement@@MEAA@XZ
    virtual ~CUIElement();
};
