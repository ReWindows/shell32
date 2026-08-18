#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
namespace CAssocListBase {
class CAssocListBaseEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAssocListBaseEnum@CAssocListBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@CAssocListBaseEnum@CAssocListBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrent(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@CAssocListBaseEnum@CAssocListBase@@UEAAJXZ
    virtual long MoveNext();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAssocListBaseEnum@CAssocListBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAssocListBaseEnum@CAssocListBase@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAssocListBaseEnum@CAssocListBase@@AEAA@XZ
    ~CAssocListBaseEnum();
};
} // namespace CAssocListBase
