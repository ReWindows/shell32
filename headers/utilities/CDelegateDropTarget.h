#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CDelegateDropTarget {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelegateDropTarget@@QEAA@XZ
    CDelegateDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CDelegateDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CDelegateDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CDelegateDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CDelegateDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDelegateDropTarget@@QEAAJXZ
    long Init();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CDelegateDropTarget@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropSourceEnterpriseId@CDelegateDropTarget@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelegateDropTarget@@MEAA@XZ
    virtual ~CDelegateDropTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCurrentDropTarget@CDelegateDropTarget@@AEAAXXZ
    void _ReleaseCurrentDropTarget();
};
