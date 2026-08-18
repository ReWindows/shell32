#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CSearchPropSheet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DialogProc@CSearchPropSheet@@QEAAHPEAUHWND__@@I_K_J@Z
    int DialogProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeAdvSearchDlg@CSearchPropSheet@@AEAAXXZ
    void _InitializeAdvSearchDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveAdvSearchDlg@CSearchPropSheet@@AEAAXXZ
    void _SaveAdvSearchDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAdvSearchRegBoolValue@CSearchPropSheet@@AEAAXPEBG0HK@Z
    void _SetAdvSearchRegBoolValue(unsigned short const *, unsigned short const *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAdvSearchDlg@CSearchPropSheet@@AEAAXH@Z
    void _UpdateAdvSearchDlg(int);
};
