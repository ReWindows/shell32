#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CColumnDlg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDialog@CColumnDlg@@QEAAJPEAUHWND__@@@Z
    long ShowDialog(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CColumnDlg@@QEAA@XZ
    ~CColumnDlg();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDialogHeightToFitWithinMonitor@CColumnDlg@@AEAAXXZ
    void AdjustDialogHeightToFitWithinMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DlgProc@CColumnDlg@@AEAA_JI_K_J@Z
    int64_t DlgProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitListView@CColumnDlg@@AEAAXXZ
    void _InitListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveItem@CColumnDlg@@AEAAXH@Z
    void _MoveItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDlg@CColumnDlg@@AEAAXXZ
    void _OnInitDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveState@CColumnDlg@@AEAAHXZ
    int _SaveState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDlgButtons@CColumnDlg@@AEAAXPEBUtagNMLISTVIEW@@@Z
    void _UpdateDlgButtons(tagNMLISTVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DlgProc@CColumnDlg@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DlgProc(HWND__*, unsigned int, uint64_t, int64_t);
};
