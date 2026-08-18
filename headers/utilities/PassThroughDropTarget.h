#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class PassThroughDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@PassThroughDropTarget@@QEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@PassThroughDropTarget@@QEAAJXZ
    long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@PassThroughDropTarget@@QEAAJKU_POINTL@@PEAK@Z
    long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@PassThroughDropTarget@@QEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PassThroughDropTarget@@QEAAJPEAUIItem@@PEAUIDataObject@@PEAUIDefViewDropTargetHelper@@@Z
    long Init(IItem *, IDataObject *, IDefViewDropTargetHelper *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PassThroughDropTarget@@QEAA@XZ
    ~PassThroughDropTarget();
};
