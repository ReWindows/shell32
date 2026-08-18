#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CUserEventTimer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUserEventTimer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserEventTimerElapsed@CUserEventTimer@@UEAAJPEAUHWND__@@KPEAI@Z
    virtual long GetUserEventTimerElapsed(HWND__*, unsigned long, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitTimerTickInterval@CUserEventTimer@@UEAAJI@Z
    virtual long InitTimerTickInterval(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KillUserEventTimer@CUserEventTimer@@UEAAJPEAUHWND__@@K@Z
    virtual long KillUserEventTimer(HWND__*, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUserEventTimer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUserEventTimer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserEventTimer@CUserEventTimer@@UEAAJPEAUHWND__@@IIPEAUIUserEventTimerCallback@@PEAK@Z
    virtual long SetUserEventTimer(HWND__*, unsigned int, unsigned int, IUserEventTimerCallback *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindow@CUserEventTimer@@AEAAHXZ
    int _CreateWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTimerDetailsIndex@CUserEventTimer@@AEAAHPEAUHWND__@@K@Z
    int _GetTimerDetailsIndex(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KillIntervalTimer@CUserEventTimer@@AEAAXXZ
    void _KillIntervalTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CUserEventTimer@@AEAAXXZ
    void _OnTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUserEventTimer@CUserEventTimer@@AEAAJPEAUHWND__@@IIPEAUIUserEventTimerCallback@@PEAK@Z
    long _SetUserEventTimer(HWND__*, unsigned int, unsigned int, IUserEventTimerCallback *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CUserEventTimer@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUserEventTimer@@EEAA@XZ
    virtual ~CUserEventTimer();
};
