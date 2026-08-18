#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CBooleanCheckMarkControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBooleanCheckMarkControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AdjustWindowRectPCB@CBooleanCheckMarkControl@@UEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long AdjustWindowRectPCB(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBooleanCheckMarkControl@@QEAA@XZ
    CBooleanCheckMarkControl();
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@CBooleanCheckMarkControl@@UEAAJXZ
    virtual long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayText@CBooleanCheckMarkControl@@UEAAJPEAPEAG@Z
    virtual long GetDisplayText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawFlags@CBooleanCheckMarkControl@@UEAAJPEAH@Z
    virtual long GetDrawFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CBooleanCheckMarkControl@@UEAAJPEAH@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatFlags@CBooleanCheckMarkControl@@UEAAJPEAW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long GetFormatFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CBooleanCheckMarkControl@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTooltipInfo@CBooleanCheckMarkControl@@UEAAJPEAUHDC__@@PEBUtagSIZE@@PEAH@Z
    virtual long GetTooltipInfo(HDC__*, tagSIZE const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleContent@CBooleanCheckMarkControl@@UEAAJXZ
    virtual long HasVisibleContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBooleanCheckMarkControl@@UEAAJPEAUIUnknown@@W4tagPROPDESC_CONTROL_TYPE@@@Z
    virtual long Initialize(IUnknown *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeDefaultAction@CBooleanCheckMarkControl@@UEAAJXZ
    virtual long InvokeDefaultAction();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDPIChanged@CBooleanCheckMarkControl@@UEAAJXZ
    virtual long OnDPIChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBooleanCheckMarkControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBooleanCheckMarkControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CBooleanCheckMarkControl@@UEAAJHH@Z
    virtual long SetFlags(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@CBooleanCheckMarkControl@@UEAAJPEAUHFONT__@@@Z
    virtual long SetFont(HFONT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatFlags@CBooleanCheckMarkControl@@UEAAJW4PROPDESC_FORMAT_FLAGS@@@Z
    virtual long SetFormatFlags(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTextColor@CBooleanCheckMarkControl@@UEAAJK@Z
    virtual long SetTextColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBooleanCheckMarkControl@@UEAAJPEAUIUnknown@@@Z
    virtual long SetValue(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CBooleanCheckMarkControl@@UEAAJPEBG0@Z
    virtual long SetWindowTheme(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWindowlessParentWindow@CBooleanCheckMarkControl@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindowlessParentWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowlessDraw@CBooleanCheckMarkControl@@UEAAJPEAUHDC__@@PEBUtagRECT@@H@Z
    virtual long WindowlessDraw(HDC__*, tagRECT const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImageList@CBooleanCheckMarkControl@@AEAAHXZ
    int _EnsureImageList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBooleanCheckMarkControl@@EEAA@XZ
    virtual ~CBooleanCheckMarkControl();
};
