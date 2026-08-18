#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CPathPropertyControl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawFlags@CPathPropertyControl@@UEAAJPEAH@Z
    virtual long GetDrawFlags(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathPropertyControl@@UEAA@XZ
    virtual ~CPathPropertyControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CPathPropertyControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_Cancel@CPathPropertyControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PE Export
    // Symbol: ?v_Commit@CPathPropertyControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PE Export
    // Symbol: ?v_CreateActiveWindow@CPathPropertyControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_DestroyActiveWindow@CPathPropertyControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CPathPropertyControl@@EEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CPathPropertyControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CPathPropertyControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
};
