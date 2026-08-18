#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CStaticPropertyControl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStaticPropertyControl@@QEAA@XZ
    CStaticPropertyControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CStaticPropertyControl@@UEAAJPEAUIUnknown@@W4tagPROPDESC_CONTROL_TYPE@@@Z
    virtual long Initialize(IUnknown *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CStaticPropertyControl@@UEAAJHH@Z
    virtual long SetFlags(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CStaticPropertyControl@@UEAAJPEAUHFONT__@@@Z
    virtual long SetFont(HFONT__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextColor@CStaticPropertyControl@@UEAAJK@Z
    virtual long SetTextColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CStaticPropertyControl@@UEAAJPEBG0@Z
    virtual long SetWindowTheme(unsigned short const *, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CStaticPropertyControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Cancel@CStaticPropertyControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PE Export
    // Symbol: ?v_Commit@CStaticPropertyControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateActiveWindow@CStaticPropertyControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_DestroyActiveWindow@CStaticPropertyControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CStaticPropertyControl@@EEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetDrawClientRect@CStaticPropertyControl@@EEAAXPEAUHWND__@@PEAUHDC__@@PEAUtagRECT@@@Z
    virtual void v_GetDrawClientRect(HWND__*, HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CStaticPropertyControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_HasTooltip@CStaticPropertyControl@@EEAAHXZ
    virtual int v_HasTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CStaticPropertyControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStaticPropertyControl@@EEAA@XZ
    virtual ~CStaticPropertyControl();
};
