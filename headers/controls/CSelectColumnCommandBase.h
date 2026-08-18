#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 4 member(s).
class CSelectColumnCommandBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSelectColumnCommandBase@@QEAA@AEBU_tagpropertykey@@@Z
    CSelectColumnCommandBase(_tagpropertykey const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSelectColumnCommandBase@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
};
