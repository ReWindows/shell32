#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CExeDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExeDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExeDropTarget@@QEAA@XZ
    CExeDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CExeDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CExeDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CExeDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CExeDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CExeDropTarget@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFile@CExeDropTarget@@UEAAJPEAPEAG@Z
    virtual long GetCurFile(unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CExeDropTarget@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CExeDropTarget@@UEAAJPEBGK@Z
    virtual long Load(unsigned short const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExeDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExeDropTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CExeDropTarget@@UEAAJPEBGH@Z
    virtual long Save(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveCompleted@CExeDropTarget@@UEAAJPEBG@Z
    virtual long SaveCompleted(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDescriptionToDataObject@CExeDropTarget@@AEAAXK@Z
    void _AddDescriptionToDataObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetParameters@CExeDropTarget@@AEAAHPEAUIDataObject@@PEAPEAGPEAGKPEAK@Z
    int _GetParameters(IDataObject *, unsigned short * *, unsigned short *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitICIX@CExeDropTarget@@AEAAJPEBG0PEAU_CMINVOKECOMMANDINFOEX@@PEAPEAX@Z
    long _InitICIX(unsigned short const *, unsigned short const *, _CMINVOKECOMMANDINFOEX *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeContextMenu@CExeDropTarget@@AEAAJPEAUIContextMenu@@PEBG1@Z
    long _InvokeContextMenu(IContextMenu *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExeDropTarget@@EEAA@XZ
    virtual ~CExeDropTarget();
};
