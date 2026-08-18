#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CPinPropertyControl {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPinPropertyControl@@UEAA@XZ
    virtual ~CPinPropertyControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImageList@CPinPropertyControl@@AEAAJXZ
    long EnsureImageList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CPinPropertyControl@@EEAAJXZ
    virtual long OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CPinPropertyControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Cancel@CPinPropertyControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PE Export
    // Symbol: ?v_Commit@CPinPropertyControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateActiveWindow@CPinPropertyControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_DestroyActiveWindow@CPinPropertyControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CPinPropertyControl@@EEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CPinPropertyControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CPinPropertyControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
};
