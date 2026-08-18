#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CControlPanelDataWorkItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelDataWorkItem@@QEAA@XZ
    CControlPanelDataWorkItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CControlPanelDataWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CControlPanelDataWorkItem@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CControlPanelDataWorkItem@@QEAAJPEAVCControlPanelCategoryModuleInner@@PEAVCControlPanelAppletList@@PEAVCControlPanelCategoryList@@PEAVCControlPanelTasks@@_NPEAUIUnknown@@PEAUIShellFolder2@@PEAUIEnumIDList@@@Z
    long Initialize(CControlPanelCategoryModuleInner *, CControlPanelAppletList *, CControlPanelCategoryList *, CControlPanelTasks *, bool, IUnknown *, IShellFolder2*, IEnumIDList *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelDataWorkItem@@MEAA@XZ
    virtual ~CControlPanelDataWorkItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFastData@CControlPanelDataWorkItem@@AEAAJXZ
    long _LoadFastData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSlowData@CControlPanelDataWorkItem@@AEAAJXZ
    long _LoadSlowData();
};
