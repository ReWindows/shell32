#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class MessageBoxConfirmation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndConfirm@MessageBoxConfirmation@@SAJHHHPEAUHWND__@@AEAW4CONFIRMATIONRESPONSE@@@Z
    static long CreateAndConfirm(int, int, int, HWND__*, int &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageBoxConfirmation@@QEAA@XZ
    ~MessageBoxConfirmation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMetrics@MessageBoxConfirmation@@AEAAHPEAUHWND__@@@Z
    int CalculateMetrics(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialogType@MessageBoxConfirmation@@EEBAPEBU_GUID@@XZ
    virtual _GUID const * GetDialogType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitDialog@MessageBoxConfirmation@@AEAA_JPEAUHWND__@@@Z
    int64_t OnInitDialog(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDialogDescriptionText@MessageBoxConfirmation@@AEAA?AUtagRECT@@PEAUHWND__@@AEBKAEAUtagSIZE@@@Z
    tagRECT SetDialogDescriptionText(HWND__*, unsigned long const &, tagSIZE &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConfirmDialogProc@MessageBoxConfirmation@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _ConfirmDialogProc(HWND__*, unsigned int, uint64_t, int64_t);
};
