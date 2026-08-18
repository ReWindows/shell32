#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CTransferConfirmation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransferConfirmation@@QEAA@XZ
    CTransferConfirmation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Confirm@CTransferConfirmation@@UEAAJPEBUCONFIRMOP@@PEAW4CONFIRMATIONRESPONSE@@PEAHPEAI@Z
    virtual long Confirm(CONFIRMOP const *, int *, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialogType@CTransferConfirmation@@UEBAPEBU_GUID@@XZ
    virtual _GUID const * GetDialogType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransferConfirmation@@UEAA@XZ
    virtual ~CTransferConfirmation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDialogDescriptionText@CTransferConfirmation@@AEAA?AUtagRECT@@PEAUHWND__@@PEAUtagSIZE@@K@Z
    tagRECT SetDialogDescriptionText(HWND__*, tagSIZE *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItems@CTransferConfirmation@@AEAAJHPEBUCONFIRM_ITEM_INFO@@@Z
    long _AddItems(int, CONFIRM_ITEM_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddStatus@CTransferConfirmation@@AEAAJXZ
    long _AddStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateMetrics@CTransferConfirmation@@AEAAHPEAUHWND__@@@Z
    int _CalculateMetrics(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConfirmDialogProc@CTransferConfirmation@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t _ConfirmDialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayItemVertical@CTransferConfirmation@@AEAAJIPEAUHWND__@@PEAUtagPOINT@@PEAUtagSIZE@@@Z
    long _DisplayItemVertical(unsigned int, HWND__*, tagPOINT *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormatDescriptionText@CTransferConfirmation@@AEAAJPEAUHWND__@@@Z
    long _FormatDescriptionText(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeDialogSettings@CTransferConfirmation@@AEAAJXZ
    long _FreeDialogSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDialogSettings@CTransferConfirmation@@AEAAJXZ
    long _GetDialogSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElevatedDialogSettings@CTransferConfirmation@@AEAAJPEBUtagDLGINFO@@@Z
    long _GetElevatedDialogSettings(tagDLGINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@CTransferConfirmation@@AEAA_JHHPEAUHWND__@@@Z
    int64_t _OnCommand(int, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDialog@CTransferConfirmation@@AEAA_JPEAUHWND__@@_K_J@Z
    int64_t _OnInitDialog(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLaunchDiskCleanup@CTransferConfirmation@@AEAAXXZ
    void _OnLaunchDiskCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNotify@CTransferConfirmation@@AEAA_JPEBUtagNMHDR@@@Z
    int64_t _OnNotify(tagNMHDR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnQueryCancelAutoplay@CTransferConfirmation@@AEAA_JPEAUHWND__@@@Z
    int64_t _OnQueryCancelAutoplay(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimer@CTransferConfirmation@@AEAA_JPEAUHWND__@@_K@Z
    int64_t _OnTimer(HWND__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDialog@CTransferConfirmation@@AEAAXH@Z
    void _SetDialog(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetResources@CTransferConfirmation@@AEAAJHHHW4SHSTOCKICONID@@@Z
    long _SetResources(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupForDeleteMultiple@CTransferConfirmation@@AEAAJPEAUHWND__@@@Z
    long _SetupForDeleteMultiple(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupForDiskFull@CTransferConfirmation@@AEAAJPEAUHWND__@@@Z
    long _SetupForDiskFull(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupForFileNotFound@CTransferConfirmation@@AEAAJXZ
    long _SetupForFileNotFound();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupForInUseByApp@CTransferConfirmation@@AEAAJPEAUHWND__@@H@Z
    long _SetupForInUseByApp(HWND__*, int);
};
