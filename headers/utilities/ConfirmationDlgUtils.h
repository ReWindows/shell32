#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class ConfirmationDlgUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CenterWindow@ConfirmationDlgUtils@@YAHPEAUHWND__@@PEBUtagRECT@@PEAUtagPOINT@@@Z
    int CenterWindow(HWND__*, tagRECT const *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawTextExtent@ConfirmationDlgUtils@@YAJPEAUHWND__@@PEBGKPEAUtagSIZE@@@Z
    long GetDrawTextExtent(HWND__*, unsigned short const *, unsigned long, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAttribs@ConfirmationDlgUtils@@YAJPEAUIShellItem@@PEAPEAG@Z
    long GetItemAttribs(IShellItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftDialogItem@ConfirmationDlgUtils@@YAXPEAUHWND__@@HHH@Z
    void ShiftDialogItem(HWND__*, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftLeftCallBack@ConfirmationDlgUtils@@YAHPEAUHWND__@@_J@Z
    int ShiftLeftCallBack(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftMultipleDialogItems@ConfirmationDlgUtils@@YAXPEAUHWND__@@PEBHIHH@Z
    void ShiftMultipleDialogItems(HWND__*, int const *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftWindow@ConfirmationDlgUtils@@YAXPEAUHWND__@@HH@Z
    void ShiftWindow(HWND__*, int, int);
};
