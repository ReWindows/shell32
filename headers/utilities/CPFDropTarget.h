#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CPFDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPFDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CPFDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CPFDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CPFDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CPFDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPFDropTarget@@QEAAJXZ
    long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPFDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPFDropTarget@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllowDrop@CPFDropTarget@@AEAAHPEAUIDataObject@@@Z
    int _AllowDrop(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilteredDataObject@CPFDropTarget@@AEAAJPEAUIDataObject@@PEAPEAU2@@Z
    long _GetFilteredDataObject(IDataObject *, IDataObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubstituteDescriptionOnDataObject@CPFDropTarget@@AEAAXKPEAUIDataObject@@@Z
    void _SubstituteDescriptionOnDataObject(unsigned long, IDataObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPFDropTarget@@EEAA@XZ
    virtual ~CPFDropTarget();
};
