#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CLayoutDefinition {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLayoutDefinition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLayoutDefinition@@QEAA@PEAUIStream@@PEAVCLayoutFolder@@@Z
    CLayoutDefinition(IStream *, CLayoutFolder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutDefinition@CLayoutDefinition@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetLayoutDefinition(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPossibleRedirectTarget@CLayoutDefinition@@UEAAJAEBU_GUID@@PEAHPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPossibleRedirectTarget(_GUID const &, int *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLayoutDefinition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CLayoutDefinition@@UEAAJXZ
    virtual long Register();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLayoutDefinition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegister@CLayoutDefinition@@UEAAJXZ
    virtual long UnRegister();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutDefinition@@UEAA@XZ
    virtual ~CLayoutDefinition();
};
