#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CDropListControlBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDropListControlBase@@QEAA@XZ
    CDropListControlBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayText@CDropListControlBase@@UEAAJPEAPEAG@Z
    virtual long GetDisplayText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDropListControlBase@@UEAAJW4PROPCTL_RECT_TYPE@@PEAUHDC__@@PEBUtagSIZE@@PEAU4@@Z
    virtual long GetSize(int, HDC__*, tagSIZE const *, tagSIZE *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCompositeMismatch@CDropListControlBase@@KAJPEAPEAG@Z
    static long _GetCompositeMismatch(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIndex@CDropListControlBase@@IEAAJHI@Z
    long _SetIndex(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CDropListControlBase@@MEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Cancel@CDropListControlBase@@MEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Commit@CDropListControlBase@@MEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateActiveWindow@CDropListControlBase@@MEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DestroyActiveWindow@CDropListControlBase@@MEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CDropListControlBase@@MEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CDropListControlBase@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnBaseSetCursor@CDropListControlBase@@MEAAHXZ
    virtual int v_OnBaseSetCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CDropListControlBase@@MEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDropListControlBase@@MEAA@XZ
    virtual ~CDropListControlBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateComboBox@CDropListControlBase@@AEAAJXZ
    long _PopulateComboBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubclassBaseWndProc@CDropListControlBase@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SubclassBaseWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubclassWndProc@CDropListControlBase@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSelection@CDropListControlBase@@AEAAJXZ
    long _UpdateSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_subclassBaseProc@CDropListControlBase@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_subclassBaseProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_subclassProc@CDropListControlBase@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_subclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
