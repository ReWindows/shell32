#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CCheckLocationIndexedTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CCheckLocationIndexedTask@@SAJPEAUHWND__@@PEAUIShellItem@@IIPEAPEAV1@@Z
    static long s_CreateInstance(HWND__*, IShellItem *, unsigned int, unsigned int, CCheckLocationIndexedTask * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckLocation@CCheckLocationIndexedTask@@IEAAJXZ
    long _CheckLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_RunTask@CCheckLocationIndexedTask@@MEAAXXZ
    virtual void v_RunTask();
};
