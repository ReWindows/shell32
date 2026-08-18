#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 42 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class CProgressDialogUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProgressDialogUI@@QEAA@XZ
    CProgressDialogUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CProgressDialogUI@@SAJPEAPEAVElement@DirectUI@@HPEAVCProgressDialog@@@Z
    static long Create(::DirectUI::Element * *, int, CProgressDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDialog@CProgressDialogUI@@QEAAXXZ
    void EndDialog();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CProgressDialogUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProgressDialogUI@@UEAA@XZ
    virtual ~CProgressDialogUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DialogProc@CProgressDialogUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t DialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementHeight@CProgressDialogUI@@AEAAHPEAVElement@DirectUI@@@Z
    int GetElementHeight(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CProgressDialogUI@@EEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@CProgressDialogUI@@EEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CProgressDialogUI@@EEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@CProgressDialogUI@@EEAAXPEAVElement@DirectUI@@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeFromToFields@CProgressDialogUI@@AEAAXXZ
    void _ChangeFromToFields();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeHeader@CProgressDialogUI@@AEAAXXZ
    void _ChangeHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteSetExpanded@CProgressDialogUI@@AEAAJH@Z
    long _CompleteSetExpanded(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConstrainLocations@CProgressDialogUI@@AEAAXXZ
    void _ConstrainLocations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateParser@CProgressDialogUI@@AEAAJXZ
    long _CreateParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DialogProc@CProgressDialogUI@@AEAAHPEAUHWND__@@I_K_J@Z
    int _DialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayDialog@CProgressDialogUI@@AEAAXXZ
    void _DisplayDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTaskbarProgress@CProgressDialogUI@@AEAAJXZ
    long _EnsureTaskbarProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FormattedSetContentString@CProgressDialogUI@@AEAAXPEAVElement@DirectUI@@PEBGH@Z
    void _FormattedSetContentString(::DirectUI::Element *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleChangeLine@CProgressDialogUI@@AEAAXKPEBGH@Z
    void _HandleChangeLine(unsigned long, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTimerMessage@CProgressDialogUI@@AEAAHI@Z
    int _HandleTimerMessage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleUpdateLocations@CProgressDialogUI@@AEAAXW4LOCATIONTYPE@@PEAULOCATIONDISPLAYINFO@@@Z
    void _HandleUpdateLocations(int, LOCATIONDISPLAYINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsButton@CProgressDialogUI@@AEAA_NPEAVElement@DirectUI@@@Z
    bool _IsButton(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOneLocationAction@CProgressDialogUI@@AEAAHW4_SPACTION@@@Z
    int _IsOneLocationAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInitDlg@CProgressDialogUI@@AEAAHPEAUHWND__@@_K@Z
    int _OnInitDlg(HWND__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessUpdate@CProgressDialogUI@@AEAAXPEAUPDSIZEUPDATE@@@Z
    void _ProcessUpdate(PDSIZEUPDATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExpandedState@CProgressDialogUI@@AEAAJHH@Z
    long _SetExpandedState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLineHelper@CProgressDialogUI@@AEAAJKPEBGH@Z
    long _SetLineHelper(unsigned long, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProgressState@CProgressDialogUI@@AEAAJK@Z
    long _SetProgressState(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Setup@CProgressDialogUI@@AEAAJPEAUHWND__@@@Z
    long _Setup(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowShutdownError@CProgressDialogUI@@AEAAJXZ
    long _ShowShutdownError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCalcedStats@CProgressDialogUI@@AEAAJ_K@Z
    long _UpdateCalcedStats(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePreflightAndIndeterminateStats@CProgressDialogUI@@AEAAJXZ
    long _UpdatePreflightAndIndeterminateStats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateProgressBar@CProgressDialogUI@@AEAAJXZ
    long _UpdateProgressBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTimedStats@CProgressDialogUI@@AEAAJH@Z
    long _UpdateTimedStats(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTitleBar@CProgressDialogUI@@AEAAJXZ
    long _UpdateTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UserCancelled@CProgressDialogUI@@AEAAXXZ
    void _UserCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UserPaused@CProgressDialogUI@@AEAAXXZ
    void _UserPaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CancelSyncIoThread@CProgressDialogUI@@CAKPEAX@Z
    static unsigned long s_CancelSyncIoThread(void *);
};
