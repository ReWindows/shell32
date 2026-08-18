#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
class CUndoManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CUndoManager@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long Add(IOleUndoUnit *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRedo@CUndoManager@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long AddRedo(IOleUndoUnit *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUndoManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUndo@CUndoManager@@UEAAJPEAUIOleUndoUnit@@H@Z
    virtual long AddUndo(IOleUndoUnit *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUndoManager@@QEAA@PEAUIThreadUndoManager@@@Z
    CUndoManager(IThreadUndoManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CUndoManager@@UEAAJPEAUIOleParentUndoUnit@@H@Z
    virtual long Close(IOleParentUndoUnit *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CUndoManager@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardFrom@CUndoManager@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long DiscardFrom(IOleUndoUnit *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CUndoManager@@UEAAJH@Z
    virtual long Enable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRedoable@CUndoManager@@UEAAJPEAPEAUIEnumOleUndoUnits@@@Z
    virtual long EnumRedoable(IEnumOleUndoUnits * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumUndoable@CUndoManager@@UEAAJPEAPEAUIEnumOleUndoUnits@@@Z
    virtual long EnumUndoable(IEnumOleUndoUnits * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastRedoDescription@CUndoManager@@UEAAJPEAPEAG@Z
    virtual long GetLastRedoDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUndoDescription@CUndoManager@@UEAAJPEAPEAG@Z
    virtual long GetLastUndoDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenParentState@CUndoManager@@UEAAJPEAK@Z
    virtual long GetOpenParentState(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStackDepths@CUndoManager@@UEAAJPEAK0@Z
    virtual long GetStackDepths(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUndoRedoInProgress@CUndoManager@@UEAAJXZ
    virtual long IsUndoRedoInProgress();
    // Category: Method | Source: PE Export
    // Symbol: ?LockServer@CUndoManager@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CUndoManager@@UEAAJPEAUIOleParentUndoUnit@@@Z
    virtual long Open(IOleParentUndoUnit *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareRedo@CUndoManager@@UEAAJPEAPEAUIOleUndoUnit@@@Z
    virtual long PrepareRedo(IOleUndoUnit * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareUndo@CUndoManager@@UEAAJPEAPEAUIOleUndoUnit@@@Z
    virtual long PrepareUndo(IOleUndoUnit * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUndoManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedoTo@CUndoManager@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long RedoTo(IOleUndoUnit *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUndoManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoRedoCompleted@CUndoManager@@UEAAJXZ
    virtual long UndoRedoCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoRedoStarted@CUndoManager@@UEAAJXZ
    virtual long UndoRedoStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoTo@CUndoManager@@UEAAJPEAUIOleUndoUnit@@@Z
    virtual long UndoTo(IOleUndoUnit *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRedoStackToParent@CUndoManager@@AEAAJXZ
    long _AddRedoStackToParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddUndoStackToParent@CUndoManager@@AEAAJXZ
    long _AddUndoStackToParent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUndoManager@@AEAA@XZ
    ~CUndoManager();
};
