#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CFolderOptionsCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderOptionsCommand@@QEAA@XZ
    CFolderOptionsCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CFolderOptionsCommand@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CFolderOptionsCommand@@UEAAJPEAUIShellItemArray@@PEAPEAG@Z
    virtual long GetTitle(IShellItemArray *, unsigned short * *);
};
