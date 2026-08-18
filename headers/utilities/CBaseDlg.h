#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CBaseDlg {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BaseDlgPropSheetCallback@CBaseDlg@@SAIPEAUHWND__@@IPEAU_PROPSHEETPAGEW@@@Z
    static unsigned int BaseDlgPropSheetCallback(HWND__*, unsigned int, _PROPSHEETPAGEW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BaseDlgWndProc@CBaseDlg@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t BaseDlgWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBaseDlg@@QEAAKXZ
    unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancel@CBaseDlg@@MEAA_JG@Z
    virtual int64_t OnCancel(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CBaseDlg@@MEAA_J_K_J@Z
    virtual int64_t OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CBaseDlg@@MEAA_J_K_J@Z
    virtual int64_t OnDestroy(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@CBaseDlg@@MEAA_J_K_J@Z
    virtual int64_t OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnOK@CBaseDlg@@MEAA_JG@Z
    virtual int64_t OnOK(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CBaseDlg@@MEAA_JI_K_J@Z
    virtual int64_t WndProc(unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseDlg@@MEAA@XZ
    virtual ~CBaseDlg();
};
