#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 18 member(s).
class CIDLDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIDLDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIDLDropTarget@@QEAA@PEAUHWND__@@@Z
    CIDLDropTarget(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CIDLDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CIDLDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CIDLDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Drop@CIDLDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIDLDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIDLDropTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CIDLDropTarget@@QEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _Init(_ITEMIDLIST_ABSOLUTE const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragDropMenu@CIDLDropTarget@@IEAAJKPEAUIDataObject@@U_POINTL@@PEAKPEAUHKEY__@@3IK@Z
    long DragDropMenu(unsigned long, IDataObject *, _POINTL, unsigned long *, HKEY__*, HKEY__*, unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragDropMenuEx@CIDLDropTarget@@IEAAJPEAUDRAGDROPMENUPARAM@@@Z
    long DragDropMenuEx(DRAGDROPMENUPARAM *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIDLDropTarget@@MEAA@XZ
    virtual ~CIDLDropTarget();
};
