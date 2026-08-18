#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CControlPanelAppletList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppletMatchesQuery@CControlPanelAppletList@@SA_NPEAVCControlPanelItem@@PEBGPEAUICondition@@PEA_N@Z
    static bool AppletMatchesQuery(CControlPanelItem *, unsigned short const *, ICondition *, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelAppletList@@QEAA@XZ
    CControlPanelAppletList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLoaded@CControlPanelAppletList@@QEAAJKPEAPEAUIShellFolder2@@PEAPEAUIEnumIDList@@@Z
    long EnsureLoaded(unsigned long, IShellFolder2* *, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSlowApplets@CControlPanelAppletList@@QEAAJPEAUIShellFolder2@@PEAUIEnumIDList@@PEA_N@Z
    long LoadSlowApplets(IShellFolder2*, IEnumIDList *, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppletsToCategories@CControlPanelAppletList@@AEAAJPEAUIShellFolder2@@PEAUIEnumIDList@@_N@Z
    long _AddAppletsToCategories(IShellFolder2*, IEnumIDList *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FindAppletInSortArray@CControlPanelAppletList@@CAHPEBGPEBQEBGH@Z
    static int s_FindAppletInSortArray(unsigned short const *, unsigned short const * const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortAppletsAlphabetically@CControlPanelAppletList@@CAHPEBH0_J@Z
    static int s_SortAppletsAlphabetically(int const *, int const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortAppletsInCategory@CControlPanelAppletList@@CAHPEBH0_J@Z
    static int s_SortAppletsInCategory(int const *, int const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelAppletList@@EEAA@XZ
    virtual ~CControlPanelAppletList();
};
