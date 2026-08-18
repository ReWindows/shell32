#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CLibraryDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CLibraryDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CLibraryDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CLibraryDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibraryDropTarget@@EEAA@XZ
    virtual ~CLibraryDropTarget();
};
