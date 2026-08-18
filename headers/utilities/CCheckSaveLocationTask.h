#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CCheckSaveLocationTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CCheckSaveLocationTask@@SAJPEAUHWND__@@PEAUIShellItem@@W4SAVE_LOCATION_TYPE@@IIPEAPEAV1@@Z
    static long s_CreateInstance(HWND__*, IShellItem *, int, unsigned int, unsigned int, CCheckSaveLocationTask * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckLocation@CCheckSaveLocationTask@@IEAAJXZ
    long _CheckLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_RunTask@CCheckSaveLocationTask@@MEAAXXZ
    virtual void v_RunTask();
};
