#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CTaskCondition {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskCondition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Eval@CTaskCondition@@UEAAJPEAW4tagCACHEDTASKCONDITION@@HPEAH@Z
    virtual long Eval(int *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTaskCondition@@UEAAJPEBGHPEAUINamedPropertyStore@@@Z
    virtual long Init(unsigned short const *, int, INamedPropertyStore *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskCondition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskCondition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskCondition@@UEAA@XZ
    virtual ~CTaskCondition();
};
