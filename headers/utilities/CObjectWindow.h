#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CObjectWindow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectWindow@@QEAA@XZ
    CObjectWindow();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@CObjectWindow@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CObjectWindow@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
};
