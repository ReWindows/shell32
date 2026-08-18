#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CDVDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CDVDropTarget@@QEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CDVDropTarget@@QEAAJXZ
    long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CDVDropTarget@@QEAAJKU_POINTL@@PEAK@Z
    long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CDVDropTarget@@QEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetForIItem@CDVDropTarget@@QEAAXPEAUIItem@@PEAPEAUIDropTarget@@@Z
    void GetDropTargetForIItem(IItem *, IDropTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CDVDropTarget@@QEAAJPEAH@Z
    long IsEvaluatingEdpPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCurrentDropTarget@CDVDropTarget@@QEAAXXZ
    void ReleaseCurrentDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDataObject@CDVDropTarget@@QEAAXXZ
    void ReleaseDataObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CDVDropTarget@@QEAAJPEBG@Z
    long SetDropSourceEnterpriseId(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemAfterInsertMark@CDVDropTarget@@AEAAJPEAPEAUIChildId@@@Z
    long _GetItemAfterInsertMark(IChildId * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformDrop@CDVDropTarget@@AEAAXPEAUHWND__@@PEAUIDropTarget@@PEAUIDataObject@@KU_POINTL@@PEFBU_ITEMID_CHILD@@PEAK@Z
    void _PerformDrop(HWND__*, IDropTarget *, IDataObject *, unsigned long, _POINTL, _ITEMID_CHILD & volatile *, unsigned long *);
};
