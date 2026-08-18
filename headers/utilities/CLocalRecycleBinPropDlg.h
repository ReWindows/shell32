#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CLocalRecycleBinPropDlg {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalRecycleBinPropDlg@@UEAA@XZ
    virtual ~CLocalRecycleBinPropDlg();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CLocalRecycleBinPropDlg@@EEAA_J_K_J@Z
    virtual int64_t OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CLocalRecycleBinPropDlg@@EEAA_J_K_J@Z
    virtual int64_t OnDestroy(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitDialog@CLocalRecycleBinPropDlg@@EEAA_J_K_J@Z
    virtual int64_t OnInitDialog(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@CLocalRecycleBinPropDlg@@EEAA_J_K_J@Z
    virtual int64_t OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CLocalRecycleBinPropDlg@@EEAA_JI_K_J@Z
    virtual int64_t WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateBitBuckets@CLocalRecycleBinPropDlg@@AEAAJXZ
    long _EnumerateBitBuckets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedItem@CLocalRecycleBinPropDlg@@AEAAPEAVCRecycleBinData@@XZ
    CRecycleBinData * _GetSelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeListView@CLocalRecycleBinPropDlg@@AEAAXXZ
    void _InitializeListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertItemsIntoListView@CLocalRecycleBinPropDlg@@AEAAXXZ
    void _InsertItemsIntoListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnApply@CLocalRecycleBinPropDlg@@AEAAXXZ
    void _OnApply();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStateFromSelectedItem@CLocalRecycleBinPropDlg@@AEAAXXZ
    void _SetStateFromSelectedItem();
};
