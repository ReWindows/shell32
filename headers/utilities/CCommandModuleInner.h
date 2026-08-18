#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 58 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CCommandModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CCommandModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommandModuleInner@@QEAA@XZ
    CCommandModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCommandModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@CCommandModuleInner@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CCommandModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CCommandModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CCommandModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CCommandModuleInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CCommandModuleInner@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CCommandModuleInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanged@CCommandModuleInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInnerElementDestroyed@CCommandModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CCommandModuleInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectedItemChanged@CCommandModuleInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CCommandModuleInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommandModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CCommandModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CCommandModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CCommandModuleInner@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInAppHostedView@CCommandModuleInner@@AEAA_NXZ
    bool IsInAppHostedView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleHelpButton@CCommandModuleInner@@AEAAX_N@Z
    void ToggleHelpButton(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTrackedElement@CCommandModuleInner@@AEAAJPEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAVElement@DirectUI@@H@Z
    long _AddTrackedElement(_ITEMID_CHILD & volatile *, _GUID const &, ::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanShowPane@CCommandModuleInner@@AEAAHPEBGAEBU_GUID@@U2@@Z
    int _CanShowPane(unsigned short const *, _GUID const &, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckShouldHideCommands@CCommandModuleInner@@AEAAXXZ
    void _CheckShouldHideCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateButton@CCommandModuleInner@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEBUExplorerCommandItem@@PEAVElement@DirectUI@@PEAKPEAPEAV56@@Z
    long _CreateButton(IShellFolder *, _ITEMID_CHILD & volatile *, ExplorerCommandItem const *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateButtons@CCommandModuleInner@@AEAAJXZ
    long _CreateButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCustomElement@CCommandModuleInner@@AEAAJIPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    long _CreateCustomElement(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSplitButton@CCommandModuleInner@@AEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEBUExplorerCommandItem@@PEAVElement@DirectUI@@PEAKPEAPEAV56@@Z
    long _CreateSplitButton(IShellFolder *, _ITEMID_CHILD & volatile *, ExplorerCommandItem const *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeferRefreshButtons@CCommandModuleInner@@AEAAXH@Z
    void _DeferRefreshButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyButton@CCommandModuleInner@@AEAAJH@Z
    long _DestroyButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyButtons@CCommandModuleInner@@AEAAJXZ
    long _DestroyButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndRefreshEvent@CCommandModuleInner@@AEAAXXZ
    void _EndRefreshEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetButtonStyles@CCommandModuleInner@@AEAAJXZ
    long _GetButtonStyles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCommandElementParser@CCommandModuleInner@@AEAAJIPEAPEAVDUIXmlParser@DirectUI@@@Z
    long _GetCommandElementParser(unsigned int, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayedAndTotalCommands@CCommandModuleInner@@AEAAXPEAH00@Z
    void _GetDisplayedAndTotalCommands(int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitRefreshButtons@CCommandModuleInner@@AEAAXH@Z
    void _InitRefreshButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertBackgroundTaskButton@CCommandModuleInner@@AEAAXPEBUExplorerCommandItem@@I@Z
    void _InsertBackgroundTaskButton(ExplorerCommandItem const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertButtonToBand@CCommandModuleInner@@AEAAJAEBU_GUID@@PEAVElement@DirectUI@@@Z
    long _InsertButtonToBand(_GUID const &, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshButtons@CCommandModuleInner@@AEAAJXZ
    long _RefreshButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowOverflowMenu@CCommandModuleInner@@AEAAJPEAVElement@DirectUI@@@Z
    long _ShowOverflowMenu(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartRefreshEvent@CCommandModuleInner@@AEAAXXZ
    void _StartRefreshEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TogglePane@CCommandModuleInner@@AEAAXPEBG@Z
    void _TogglePane(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateButton@CCommandModuleInner@@AEAAJPEAUIShellFolder@@PEAU_ITEMID_CHILD@@PEAUIShellItemArray@@PEAH33@Z
    long _UpdateButton(IShellFolder *, _ITEMID_CHILD *, IShellItemArray *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePreviewButton@CCommandModuleInner@@AEAAXXZ
    void _UpdatePreviewButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSheetCallback@CCommandModuleInner@@CAPEAVValue@DirectUI@@PEBGPEAX@Z
    static ::DirectUI::Value * s_GetSheetCallback(unsigned short const *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandModuleInner@@EEAA@XZ
    virtual ~CCommandModuleInner();
};
