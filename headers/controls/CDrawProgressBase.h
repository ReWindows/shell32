#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 27 member(s).
class CDrawProgressBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrawProgressBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AdjustWindowRectPCB@CDrawProgressBase@@UEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long AdjustWindowRectPCB(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawProgressBase@@QEAA@XZ
    CDrawProgressBase();
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@CDrawProgressBase@@UEAAJXZ
    virtual long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawFlags@CDrawProgressBase@@UEAAJPEAH@Z
    virtual long GetDrawFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CDrawProgressBase@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatFlags@CDrawProgressBase@@UEAAJPEAW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long GetFormatFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipInfo@CDrawProgressBase@@UEAAJPEAUHDC__@@PEBUtagSIZE@@PEAH@Z
    virtual long GetTooltipInfo(HDC__*, tagSIZE const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@CDrawProgressBase@@UEAAJXZ
    virtual long HasVisibleContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawProgressBase@@UEAAJPEAUIUnknown@@W4tagPROPDESC_CONTROL_TYPE@@@Z
    virtual long Initialize(IUnknown *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeDefaultAction@CDrawProgressBase@@UEAAJXZ
    virtual long InvokeDefaultAction();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDPIChanged@CDrawProgressBase@@UEAAJXZ
    virtual long OnDPIChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrawProgressBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CDrawProgressBase@@UEAAJHH@Z
    virtual long SetFlags(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CDrawProgressBase@@UEAAJPEAUHFONT__@@@Z
    virtual long SetFont(HFONT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatFlags@CDrawProgressBase@@UEAAJW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long SetFormatFlags(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTextColor@CDrawProgressBase@@UEAAJK@Z
    virtual long SetTextColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CDrawProgressBase@@UEAAJPEBG0@Z
    virtual long SetWindowTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWindowlessParentWindow@CDrawProgressBase@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindowlessParentWindow(HWND__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawBorder@CDrawProgressBase@@IEAAJPEAUHDC__@@PEBUtagRECT@@KW4TRANSPARENTBARSTATES@@@Z
    long _DrawBorder(HDC__*, tagRECT const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawMarquee@CDrawProgressBase@@IEAAJPEAUHDC__@@PEBUtagRECT@@KW4FILLSTATES@@IH@Z
    long _DrawMarquee(HDC__*, tagRECT const *, unsigned long, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawNormal@CDrawProgressBase@@IEAAJPEAUHDC__@@PEBUtagRECT@@KW4TRANSPARENTBARSTATES@@W4FILLSTATES@@II@Z
    long _DrawNormal(HDC__*, tagRECT const *, unsigned long, int, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillRectColor@CDrawProgressBase@@IEAAJPEAUHDC__@@PEBUtagRECT@@1KW4FILLSTATES@@@Z
    long _FillRectColor(HDC__*, tagRECT const *, tagRECT const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MakeColor@CDrawProgressBase@@MEAAXPEAKPEAW4FILLSTATES@@KH@Z
    virtual void v_MakeColor(unsigned long *, int *, unsigned long, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawProgressBase@@MEAA@XZ
    virtual ~CDrawProgressBase();
};
