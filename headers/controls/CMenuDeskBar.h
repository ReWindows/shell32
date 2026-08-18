#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 68 member(s).
class CMenuDeskBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMenuDeskBar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMenuDeskBar@@QEAA@XZ
    CMenuDeskBar();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CMenuDeskBar@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exec@CMenuDeskBar@@UEAAJPEBU_GUID@@KKPEAUtagVARIANT@@1@Z
    virtual long Exec(_GUID const *, unsigned long, unsigned long, tagVARIANT *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CMenuDeskBar@@UEAAJPEAPEAUHBITMAP__@@@Z
    virtual long GetBitmap(HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClient@CMenuDeskBar@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetClient(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSize@CMenuDeskBar@@UEAAJPEAK@Z
    virtual long GetIconSize(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CMenuDeskBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CMenuDeskBar@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CMenuDeskBar@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFocusChangeIS@CMenuDeskBar@@UEAAJPEAUIUnknown@@H@Z
    virtual long OnFocusChangeIS(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPosRectChangeDB@CMenuDeskBar@@UEAAJPEAUtagRECT@@@Z
    virtual long OnPosRectChangeDB(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelect@CMenuDeskBar@@UEAAJK@Z
    virtual long OnSelect(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Popup@CMenuDeskBar@@UEAAJPEAU_POINTL@@PEAU_RECTL@@H@Z
    virtual long Popup(_POINTL *, _RECTL *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMenuDeskBar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CMenuDeskBar@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMenuDeskBar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmap@CMenuDeskBar@@UEAAJPEAUHBITMAP__@@@Z
    virtual long SetBitmap(HBITMAP__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClient@CMenuDeskBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetClient(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconSize@CMenuDeskBar@@UEAAJK@Z
    virtual long SetIconSize(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CMenuDeskBar@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubMenu@CMenuDeskBar@@UEAAJPEAUIMenuPopup@@H@Z
    virtual long SetSubMenu(IMenuPopup *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoNCPaint@CMenuDeskBar@@IEAAXPEAUHWND__@@PEAUHDC__@@@Z
    void _DoNCPaint(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPaint@CMenuDeskBar@@IEAA_JPEAUHWND__@@PEAUHDC__@@K@Z
    int64_t _DoPaint(HWND__*, HDC__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClassStyle@CMenuDeskBar@@MEAAKXZ
    virtual unsigned long _GetClassStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExStyle@CMenuDeskBar@@MEAAKXZ
    virtual unsigned long _GetExStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMenuBarParent@CMenuDeskBar@@IEAAPEAUIMenuPopup@@PEAUIUnknown@@@Z
    IMenuPopup * _GetMenuBarParent(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPopupWindowPosition@CMenuDeskBar@@MEAAXPEAUtagRECT@@00PEAUtagSIZE@@I@Z
    virtual void _GetPopupWindowPosition(tagRECT *, tagRECT *, tagRECT *, tagSIZE *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMyParent@CMenuDeskBar@@IEAAHPEAUHWND__@@@Z
    int _IsMyParent(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CMenuDeskBar@@MEAAXXZ
    virtual void _OnCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSize@CMenuDeskBar@@MEAAXXZ
    virtual void _OnSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopDown@CMenuDeskBar@@IEAAXXZ
    void _PopDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionWindow@CMenuDeskBar@@IEAAJPEAU_POINTL@@PEAU_RECTL@@K@Z
    long _PositionWindow(_POINTL *, _RECTL *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CMenuDeskBar@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMenuDeskBar@@MEAA@XZ
    virtual ~CMenuDeskBar();
};
