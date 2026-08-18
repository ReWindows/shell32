#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CPlayExecute {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPlayExecute@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CPlayExecute@@UEAAJXZ
    virtual long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPlayExecute@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPlayExecute@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPlayExecute@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPlayExecute@@UEAA@XZ
    virtual ~CPlayExecute();
};
