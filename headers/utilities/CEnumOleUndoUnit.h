#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CEnumOleUndoUnit {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumOleUndoUnit@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumOleUndoUnit@@QEAA@PEAUIUnknown@@PEAV?$CDPA@UIOleUndoUnit@@V?$CTContainer_PolicyUnOwned@UIOleUndoUnit@@@@@@@Z
    CEnumOleUndoUnit(IUnknown *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumOleUndoUnit@@UEAAJPEAPEAUIEnumOleUndoUnits@@@Z
    virtual long Clone(IEnumOleUndoUnits * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumOleUndoUnit@@UEAAJKPEAPEAUIOleUndoUnit@@PEAK@Z
    virtual long Next(unsigned long, IOleUndoUnit * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumOleUndoUnit@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumOleUndoUnit@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumOleUndoUnit@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumOleUndoUnit@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumOleUndoUnit@@AEAA@XZ
    ~CEnumOleUndoUnit();
};
