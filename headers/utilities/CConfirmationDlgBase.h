#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CConfirmationDlgBase {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConfirmationDlgBase@@QEAA@XZ
    ~CConfirmationDlgBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConfirmationDlgBase@@IEAA@XZ
    CConfirmationDlgBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SHFusionDialogBoxParam@CConfirmationDlgBase@@IEAA_JPEAUHINSTANCE__@@PEBGPEAUHWND__@@@Z
    int64_t SHFusionDialogBoxParam(HINSTANCE__*, unsigned short const *, HWND__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTheme@CConfirmationDlgBase@@AEAAXPEAUHWND__@@_N@Z
    void ApplyTheme(HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorForDialog@CConfirmationDlgBase@@AEAAXPEAUHWND__@@@Z
    void SetColorForDialog(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ConfirmDialogProc@CConfirmationDlgBase@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ConfirmDialogProc(HWND__*, unsigned int, uint64_t, int64_t);
};
