#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CFrameWorkItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFrameWorkItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameWorkItem@@QEAA@XZ
    CFrameWorkItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatchable@CFrameWorkItem@@UEAAJPEAH@Z
    virtual long GetDispatchable(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFrameWorkItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFrameWorkItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDispatchable@CFrameWorkItem@@UEAAJH@Z
    virtual long SetDispatchable(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldContinue@CFrameWorkItem@@IEAAHXZ
    int _ShouldContinue();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameWorkItem@@MEAA@XZ
    virtual ~CFrameWorkItem();
};
