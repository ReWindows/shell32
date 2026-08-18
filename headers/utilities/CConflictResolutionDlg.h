#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 31 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class CConflictResolutionDlg {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConflictResolutionDlg@@QEAA@XZ
    CConflictResolutionDlg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CConflictResolutionDlg@@SAJPEAPEAVElement@DirectUI@@PEAUHINSTANCE__@@@Z
    static long Create(::DirectUI::Element * *, HINSTANCE__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CConflictResolutionDlg@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDialog@CConflictResolutionDlg@@SAJPEBUCONFIRM_CONFLICT_PARAMS@@PEAUISyncMgrConflictItems@@PEAUCONFIRM_CONFLICT_RESULT@@PEAPEAUISyncMgrConflictResolutionItems@@@Z
    static long ShowDialog(CONFIRM_CONFLICT_PARAMS const *, ISyncMgrConflictItems *, CONFIRM_CONFLICT_RESULT *, ISyncMgrConflictResolutionItems * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConflictResolutionDlg@@UEAA@XZ
    virtual ~CConflictResolutionDlg();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DialogProc@CConflictResolutionDlg@@IEAA_JI_K_J@Z
    int64_t DialogProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CConflictResolutionDlg@@MEAA_J_K_J@Z
    virtual int64_t OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@CConflictResolutionDlg@@MEAA_J_K_J@Z
    virtual int64_t OnDestroy(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CConflictResolutionDlg@@MEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@CConflictResolutionDlg@@MEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHelp@CConflictResolutionDlg@@MEAA_JXZ
    virtual int64_t OnHelp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitDialog@CConflictResolutionDlg@@MEAA_J_K_J@Z
    virtual int64_t OnInitDialog(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResolve@CConflictResolutionDlg@@MEAA_JXZ
    virtual int64_t OnResolve();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@CConflictResolutionDlg@@MEAAXPEAUThemeChangedEvent@DirectUI@@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DialogProc@CConflictResolutionDlg@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DialogProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HelpNotifyHandler@CConflictResolutionDlg@@KAHI_K_JPEA_JPEAX@Z
    static int s_HelpNotifyHandler(unsigned int, uint64_t, int64_t, int64_t *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ResolveNotifyHandler@CConflictResolutionDlg@@KAHI_K_JPEA_JPEAX@Z
    static int s_ResolveNotifyHandler(unsigned int, uint64_t, int64_t, int64_t *, void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMainElementWidth@CConflictResolutionDlg@@AEAAXXZ
    void UpdateMainElementWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollBarHeight@CConflictResolutionDlg@@AEAAXXZ
    void UpdateScrollBarHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForDeletedItem@CConflictResolutionDlg@@AEAAXXZ
    void _CheckForDeletedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareDates@CConflictResolutionDlg@@AEAA_NPEAVCItemTile@@@Z
    bool _CompareDates(CItemTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareSizes@CConflictResolutionDlg@@AEAA_NPEAVCItemTile@@@Z
    bool _CompareSizes(CItemTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddItem@CConflictResolutionDlg@@AEAAJIAEBUCONFIRM_CONFLICT_ITEM@@PEAVElement@DirectUI@@PEAPEAVCItemTile@@@Z
    long _CreateAndAddItem(unsigned int, CONFIRM_CONFLICT_ITEM const &, ::DirectUI::Element *, CItemTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItems@CConflictResolutionDlg@@AEAAJPEAIPEAPEAPEAUIShellItem@@@Z
    long _GetShellItems(unsigned int *, IShellItem * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFileConflictUI@CConflictResolutionDlg@@AEAAJXZ
    long _InitFileConflictUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitItems@CConflictResolutionDlg@@AEAAJXZ
    long _InitItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMainUI@CConflictResolutionDlg@@AEAAJXZ
    long _InitMainUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitResolveWith@CConflictResolutionDlg@@AEAAJXZ
    long _InitResolveWith();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSyncConflictUI@CConflictResolutionDlg@@AEAAJXZ
    long _InitSyncConflictUI();
};
