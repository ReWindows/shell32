#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CUniversalDelegateFolder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CUniversalDelegateFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildClassID@CUniversalDelegateFolder@@MEAAJPEAU_GUID@@PEAUIPropertyBag@@@Z
    virtual long GetChildClassID(_GUID *, IPropertyBag *);
};
