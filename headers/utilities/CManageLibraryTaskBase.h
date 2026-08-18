#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CManageLibraryTaskBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManageLibraryTaskBase@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunTask@CManageLibraryTaskBase@@QEAAJXZ
    long RunTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RunTask@CManageLibraryTaskBase@@SAKPEAX@Z
    static unsigned long s_RunTask(void *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CManageLibraryTaskBase@@IEAAJPEAUHWND__@@PEAUIShellItem@@II@Z
    long _Initialize(HWND__*, IShellItem *, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManageLibraryTaskBase@@MEAA@XZ
    virtual ~CManageLibraryTaskBase();
};
