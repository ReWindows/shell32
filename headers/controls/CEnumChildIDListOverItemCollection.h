#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CEnumChildIDListOverItemCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumChildIDListOverItemCollection@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumChildIDListOverItemCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumChildIDListOverItemCollection@@UEAAJXZ
    virtual long Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumChildIDListOverItemCollection@@UEAA@XZ
    virtual ~CEnumChildIDListOverItemCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CEnumChildIDListOverItemCollection@@EEAAHPEAPEAU_ITEMID_CHILD@@@Z
    virtual int _Next(_ITEMID_CHILD * *);
};
