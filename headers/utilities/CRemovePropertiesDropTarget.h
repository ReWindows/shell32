#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CRemovePropertiesDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRemovePropertiesDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?DragEnter@CRemovePropertiesDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?DragLeave@CRemovePropertiesDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PE Export
    // Symbol: ?DragOver@CRemovePropertiesDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CRemovePropertiesDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRemovePropertiesDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRemovePropertiesDropTarget@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRemovePropertiesDropTarget@@EEAA@XZ
    virtual ~CRemovePropertiesDropTarget();
};
