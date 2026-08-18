#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 59 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class IndividualConflictsDialogHWNDElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTooltip@IndividualConflictsDialogHWNDElement@@UEAAXPEAVElement@DirectUI@@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@IndividualConflictsDialogHWNDElement@@SAJW4OPERATION_TYPE@@PEAUIShellItem@@1PEAUIConflictDialogData@@PEAUIConflictInterruptFilter@@PEAVCollectedConflictTelemetry@@PEAPEAVElement@DirectUI@@@Z
    static long CreateInstance(int, IShellItem *, IShellItem *, IConflictDialogData *, IConflictInterruptFilter *, CollectedConflictTelemetry *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@IndividualConflictsDialogHWNDElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiscoveringString@IndividualConflictsDialogHWNDElement@@QEAAPEBGXZ
    unsigned short const * GetDiscoveringString();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertySystem@IndividualConflictsDialogHWNDElement@@QEAAJPEAPEAUIPropertySystem@@@Z
    long GetPropertySystem(IPropertySystem * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IndividualConflictsDialogHWNDElement@@QEAA@XZ
    IndividualConflictsDialogHWNDElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildTileUpdatedCheckbox@IndividualConflictsDialogHWNDElement@@QEAAJKW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@H@Z
    long OnChildTileUpdatedCheckbox(unsigned long, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@IndividualConflictsDialogHWNDElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@IndividualConflictsDialogHWNDElement@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@IndividualConflictsDialogHWNDElement@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@IndividualConflictsDialogHWNDElement@@UEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@IndividualConflictsDialogHWNDElement@@UEAAXPEAUThemeChangedEvent@DirectUI@@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictData@IndividualConflictsDialogHWNDElement@@QEAAJW4CONFLICT_FILTER@@KPEBUINDIVIDUAL_CONFLICT_FAST_DATA@@PEAUIShellItem@@2@Z
    long SetConflictData(int, unsigned long, INDIVIDUAL_CONFLICT_FAST_DATA const *, IShellItem *, IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItemState@IndividualConflictsDialogHWNDElement@@QEAAJW4CONFLICT_FILTER@@KW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    long SetConflictItemState(int, unsigned long, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItemThumbnail@IndividualConflictsDialogHWNDElement@@QEAAJW4CONFLICT_FILTER@@KW4CONFLICT_ITEM_DATA_FLAGS@@PEAVValue@DirectUI@@@Z
    long SetConflictItemThumbnail(int, unsigned long, int, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalItemState@IndividualConflictsDialogHWNDElement@@QEAAJW4CONFLICT_FILTER@@W4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    long SetGlobalItemState(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDialog@IndividualConflictsDialogHWNDElement@@SA?AW4INDIVIDUAL_CONFLICT_DIALOG_RESULT@@PEAUHWND__@@W4OPERATION_TYPE@@PEAUIShellItem@@2PEAUIConflictDialogData@@PEAUIConflictInterruptFilter@@PEAVCollectedConflictTelemetry@@@Z
    static int ShowDialog(HWND__*, int, IShellItem *, IShellItem *, IConflictDialogData *, IConflictInterruptFilter *, CollectedConflictTelemetry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@IndividualConflictsDialogHWNDElement@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IndividualConflictsDialogHWNDElement@@UEAA@XZ
    virtual ~IndividualConflictsDialogHWNDElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@IndividualConflictsDialogHWNDElement@@MEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyThemeToElement@IndividualConflictsDialogHWNDElement@@AEAAXPEAVElement@DirectUI@@_N@Z
    void ApplyThemeToElement(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyThemeToTooltip@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void ApplyThemeToTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMainElementSize@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void UpdateMainElementSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeOnSettingChange@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void UpdateThemeOnSettingChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupCurrentDataMode@IndividualConflictsDialogHWNDElement@@AEAAJXZ
    long _CleanupCurrentDataMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddTile@IndividualConflictsDialogHWNDElement@@AEAAJKW4CONFLICT_FILTER@@PEAPEAVIndividualConflictTileElement@@@Z
    long _CreateAndAddTile(unsigned long, int, IndividualConflictTileElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DialogProc@IndividualConflictsDialogHWNDElement@@AEAA_JI_K_J@Z
    int64_t _DialogProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DiscardKeyFocusTile@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void _DiscardKeyFocusTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureConflictItemIsRealizedForKeyFocus@IndividualConflictsDialogHWNDElement@@AEAAXK_NPEAPEAVElement@DirectUI@@@Z
    void _EnsureConflictItemIsRealizedForKeyFocus(unsigned long, bool, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureKeyFocusTileIsAtCorrectEdge@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void _EnsureKeyFocusTileIsAtCorrectEdge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetConflictTileElement@IndividualConflictsDialogHWNDElement@@AEAAPEAVIndividualConflictTileElement@@K@Z
    IndividualConflictTileElement * _GetConflictTileElement(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@IndividualConflictsDialogHWNDElement@@AEAAJW4OPERATION_TYPE@@PEAUIShellItem@@1PEAUIConflictDialogData@@PEAUIConflictInterruptFilter@@PEAVCollectedConflictTelemetry@@@Z
    long _Initialize(int, IShellItem *, IShellItem *, IConflictDialogData *, IConflictInterruptFilter *, CollectedConflictTelemetry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeLocation@IndividualConflictsDialogHWNDElement@@AEAAJPEAUIShellItem@@_NPEBG22222PEAVElement@DirectUI@@I@Z
    long _InitializeLocation(IShellItem *, bool, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, ::DirectUI::Element *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeLocationElements@IndividualConflictsDialogHWNDElement@@AEAAJXZ
    long _InitializeLocationElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeMasterCheckboxes@IndividualConflictsDialogHWNDElement@@AEAAJW4CONFLICT_FILTER@@@Z
    long _InitializeMasterCheckboxes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeModeData@IndividualConflictsDialogHWNDElement@@AEAAJW4CONFLICT_FILTER@@PEAUIConflictInterruptFilter@@PEAUIConflictDialogData@@PEAVCSafeElementProxy@@@Z
    long _InitializeModeData(int, IConflictInterruptFilter *, IConflictDialogData *, CSafeElementProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRealizedTiles@IndividualConflictsDialogHWNDElement@@AEAAJW4CONFLICT_FILTER@@@Z
    long _InitializeRealizedTiles(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCommand@IndividualConflictsDialogHWNDElement@@AEAA_J_K_J@Z
    int64_t _OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnGlobalCheckboxClicked@IndividualConflictsDialogHWNDElement@@AEAAJPEAVCheckboxElement@@@Z
    long _OnGlobalCheckboxClicked(CheckboxElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDialog@IndividualConflictsDialogHWNDElement@@AEAA_J_K_J@Z
    int64_t _OnInitDialog(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardNavigate@IndividualConflictsDialogHWNDElement@@AEAAXPEAUKeyboardNavigateEvent@DirectUI@@@Z
    void _OnKeyboardNavigate(::DirectUI::KeyboardNavigateEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPageDown@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void _OnPageDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPageUp@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void _OnPageUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreserveKeyFocusTile@IndividualConflictsDialogHWNDElement@@AEAAJPEAVIndividualConflictTileElement@@KPEAPEAV2@@Z
    long _PreserveKeyFocusTile(IndividualConflictTileElement *, unsigned long, IndividualConflictTileElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestConflictData@IndividualConflictsDialogHWNDElement@@AEAAJKK@Z
    long _RequestConflictData(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetAndRequestTileContentByTileRange@IndividualConflictsDialogHWNDElement@@AEAAJKK@Z
    long _ResetAndRequestTileContentByTileRange(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreKeyFocusTile@IndividualConflictsDialogHWNDElement@@AEAAJPEAVIndividualConflictTileElement@@PEAPEAV2@@Z
    long _RestoreKeyFocusTile(IndividualConflictTileElement *, IndividualConflictTileElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RotateAndReuseRealizedTilesByConflictRange@IndividualConflictsDialogHWNDElement@@AEAAJKK@Z
    long _RotateAndReuseRealizedTilesByConflictRange(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetConflictTileVisibility@IndividualConflictsDialogHWNDElement@@AEAAJPEAVElement@DirectUI@@_N@Z
    long _SetConflictTileVisibility(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCurrentDataMode@IndividualConflictsDialogHWNDElement@@AEAAJW4CONFLICT_FILTER@@@Z
    long _SetCurrentDataMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScrollAreaContentsVisibility@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void _SetScrollAreaContentsVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwapConflictTilesAndSetVisibility@IndividualConflictsDialogHWNDElement@@AEAAJPEAVElement@DirectUI@@_N01@Z
    long _SwapConflictTilesAndSetVisibility(::DirectUI::Element *, bool, ::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRealizedTileRange@IndividualConflictsDialogHWNDElement@@AEAAJK@Z
    long _UpdateRealizedTileRange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSpacerHeights@IndividualConflictsDialogHWNDElement@@AEAAXXZ
    void _UpdateSpacerHeights();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DialogProc@IndividualConflictsDialogHWNDElement@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetIsSkipModeRegistrySettingDefaultFalse@IndividualConflictsDialogHWNDElement@@CA_NXZ
    static bool s_GetIsSkipModeRegistrySettingDefaultFalse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IndexInRange@IndividualConflictsDialogHWNDElement@@CA_NKKK@Z
    static bool s_IndexInRange(unsigned long, unsigned long, unsigned long);
};
