#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CViewSlider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAccessible@CViewSlider@@QEAA_JXZ
    int64_t MakeAccessible();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewSlider@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CViewSlider@@QEAAXPEAUIFolderView2@@PEBUtagRECT@@PEAUHWND__@@@Z
    void Show(IFolderView2*, tagRECT const *, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewSlider@@UEAA@XZ
    virtual ~CViewSlider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeSnapSpotsAndSizes@CViewSlider@@AEAAXXZ
    void ComputeSnapSpotsAndSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SliderWndProc@CViewSlider@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t SliderWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CViewSlider@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustStartPosition@CViewSlider@@AEAAXH@Z
    void _AdjustStartPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadStringAndRemoveSeperators@CViewSlider@@AEAAXHPEAGH@Z
    void _LoadStringAndRemoveSeperators(int, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnArrowKeyOrMouseWheel@CViewSlider@@AEAAHH@Z
    int _OnArrowKeyOrMouseWheel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CViewSlider@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCreate@CViewSlider@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnCreate(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CViewSlider@@AEAA_JPEAUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPageKey@CViewSlider@@AEAA_JH@Z
    int64_t _OnPageKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterViewControlWindow@CViewSlider@@AEAAXXZ
    void _RegisterViewControlWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePosition@CViewSlider@@AEAA_JHHPEAH@Z
    int64_t _UpdatePosition(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SliderWndProc@CViewSlider@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SliderWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CViewSlider@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
