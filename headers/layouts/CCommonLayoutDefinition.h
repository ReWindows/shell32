#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CCommonLayoutDefinition {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommonLayoutDefinition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommonLayoutDefinition@@QEAA@XZ
    CCommonLayoutDefinition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseLayout@CCommonLayoutDefinition@@UEAAJW4tagLAYOUTTYPE@@@Z
    virtual long ChooseLayout(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutDefinition@CCommonLayoutDefinition@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetLayoutDefinition(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutProperties@CCommonLayoutDefinition@@UEAAJPEAW4LAYOUTPROPERTYFLAGS@@@Z
    virtual long GetLayoutProperties(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPossibleRedirectTarget@CCommonLayoutDefinition@@UEAAJAEBU_GUID@@PEAHPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPossibleRedirectTarget(_GUID const &, int *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommonLayoutDefinition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommonLayoutDefinition@@UEAAKXZ
    virtual unsigned long Release();
};
