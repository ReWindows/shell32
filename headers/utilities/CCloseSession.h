#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CCloseSession {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCloseSession@@QEAA@XZ
    ~CCloseSession();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseThreadProc@CCloseSession@@AEAAKXZ
    unsigned long _CloseThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNotifyIcon@CCloseSession@@AEAAHPEAUHWND__@@@Z
    int _CreateNotifyIcon(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TipThreadProc@CCloseSession@@AEAAKXZ
    unsigned long _TipThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNotifyIcon@CCloseSession@@AEAAHPEAUHWND__@@@Z
    int _UpdateNotifyIcon(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CCloseSession@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CloseThreadProc@CCloseSession@@CAKPEAX@Z
    static unsigned long s_CloseThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TipThreadProc@CCloseSession@@CAKPEAX@Z
    static unsigned long s_TipThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CCloseSession@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
