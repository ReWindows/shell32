#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class COpenPowershellAsAdmin {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@COpenPowershellAsAdmin@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenPowershellAsAdmin@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
};
