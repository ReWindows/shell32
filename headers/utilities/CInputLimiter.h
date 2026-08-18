#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CInputLimiter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubclassEditControl@CInputLimiter@@QEAAHPEAUHWND__@@PEBUtagLIMITINPUT@@@Z
    int SubclassEditControl(HWND__*, tagLIMITINPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubclassProc@CInputLimiter@@SA_JPEAUHWND__@@I_K_J11@Z
    static int64_t SubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputLimiter@@QEAA@XZ
    ~CInputLimiter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateToolTipWindow@CInputLimiter@@IEAAXXZ
    void CreateToolTipWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideToolTip@CInputLimiter@@IEAAXXZ
    void HideToolTip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidChar@CInputLimiter@@IEAAHGH@Z
    int IsValidChar(unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChar@CInputLimiter@@IEAAHPEAUHWND__@@AEA_K_J@Z
    int OnChar(HWND__*, uint64_t &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaste@CInputLimiter@@IEAA_JPEAUHWND__@@_K_J@Z
    int64_t OnPaste(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToolTip@CInputLimiter@@IEAAXXZ
    void ShowToolTip();
};
