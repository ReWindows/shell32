#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CInsertDiscDialog {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendHelpLink@CInsertDiscDialog@@AEAAPEAGPEBG@Z
    unsigned short * _AppendHelpLink(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DialogCallbackProc@CInsertDiscDialog@@AEAAJPEAUHWND__@@I_K_J@Z
    long _DialogCallbackProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleChangeNotify@CInsertDiscDialog@@AEAAI_K_J@Z
    unsigned int _HandleChangeNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidMediaPresent@CInsertDiscDialog@@AEAAHXZ
    int _IsValidMediaPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDialogCreated@CInsertDiscDialog@@AEAAJPEAUHWND__@@@Z
    long _OnDialogCreated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Show@CInsertDiscDialog@@AEAAHPEAUHWND__@@@Z
    int _Show(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHelp@CInsertDiscDialog@@AEAAXPEAUHWND__@@@Z
    void _ShowHelp(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InsertDiscDialogCallbackProc@CInsertDiscDialog@@CAJPEAUHWND__@@I_K_J2@Z
    static long s_InsertDiscDialogCallbackProc(HWND__*, unsigned int, uint64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InsertDiscDlgWorkerWndProc@CInsertDiscDialog@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_InsertDiscDlgWorkerWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInsertDiscDialog@@AEAA@XZ
    ~CInsertDiscDialog();
};
