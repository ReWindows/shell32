#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CWaitTask {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWaitTask@@QEAAKXZ
    unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursor@CWaitTask@@QEAAJW4CURSORID@@@Z
    long SetCursor(int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWaitTask@@AEAA@W4CURSORID@@@Z
    CWaitTask(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CWaitTask@@AEAAJXZ
    long _Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Process@CWaitTask@@AEAAX_N@Z
    void _Process(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartWaitCursor@CWaitTask@@AEAAXXZ
    void _StartWaitCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WaitBeforeCursing@CWaitTask@@CAXPEAXE@Z
    static void s_WaitBeforeCursing(void *, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWaitTask@@AEAA@XZ
    ~CWaitTask();
};
