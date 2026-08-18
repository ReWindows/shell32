#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CEnumIDListBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumIDListBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumIDListBase@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumIDListBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumIDListBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@CEnumIDListBase@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CEnumIDListBase@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumIDListBase@@IEAA@XZ
    CEnumIDListBase();
};
