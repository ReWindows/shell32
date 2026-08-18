#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 41 member(s).
class CTrackPopupBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrackPopupBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrackPopupBar@@QEAA@PEAXHPEAUHMENU__@@PEAUHWND__@@@Z
    CTrackPopupBar(void *, int, HMENU__*, HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CTrackPopupBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWindow@CTrackPopupBar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelect@CTrackPopupBar@@UEAAJK@Z
    virtual long OnSelect(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Popup@CTrackPopupBar@@UEAAJPEAU_POINTL@@PEAU_RECTL@@H@Z
    virtual long Popup(_POINTL *, _RECTL *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrackPopupBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTrackPopupBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrackPopupBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSubMenu@CTrackPopupBar@@UEAAJPEAUIMenuPopup@@H@Z
    virtual long SetSubMenu(IMenuPopup *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrackPopupBar@@UEAA@XZ
    virtual ~CTrackPopupBar();
};
