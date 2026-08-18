#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CControlPanelCategoryModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CControlPanelCategoryModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelCategoryModuleInner@@QEAA@XZ
    CControlPanelCategoryModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CControlPanelCategoryModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CControlPanelCategoryModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CControlPanelCategoryModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CControlPanelCategoryModuleInner@@QEAAJXZ
    long Load();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CControlPanelCategoryModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CControlPanelCategoryModuleInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CControlPanelCategoryModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CControlPanelCategoryModuleInner@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsLoaded@CControlPanelCategoryModuleInner@@QEAAX_NPEAUIShellFolder2@@PEAUIEnumIDList@@@Z
    void OnItemsLoaded(bool, IShellFolder2*, IEnumIDList *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CControlPanelCategoryModuleInner@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CControlPanelCategoryModuleInner@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CControlPanelCategoryModuleInner@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CControlPanelCategoryModuleInner@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CControlPanelCategoryModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CControlPanelCategoryModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptionallyTakeInitialFocus@CControlPanelCategoryModuleInner@@UEAAJPEAH@Z
    virtual long OptionallyTakeInitialFocus(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CControlPanelCategoryModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CControlPanelCategoryModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CControlPanelCategoryModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@CControlPanelCategoryModuleInner@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelCategoryModuleInner@@MEAA@XZ
    virtual ~CControlPanelCategoryModuleInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRedirectApplet@CControlPanelCategoryModuleInner@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long TryRedirectApplet(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddElements@CControlPanelCategoryModuleInner@@AEAAJXZ
    long _AddElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddHelpLink@CControlPanelCategoryModuleInner@@AEAAJPEAVElement@DirectUI@@@Z
    long _AddHelpLink(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRankedAppletsToPanel@CControlPanelCategoryModuleInner@@AEAAXPEAV?$CDSA@USEARCHRESULTAPPLET@CControlPanelCategoryModuleInner@@@@PEAVElement@DirectUI@@@Z
    void _AddRankedAppletsToPanel(WindissectOpaque *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTasks@CControlPanelCategoryModuleInner@@AEAAJPEAVCControlPanelTaskEnum@@PEAVElement@DirectUI@@@Z
    long _AddTasks(CControlPanelTaskEnum *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddViewByButton@CControlPanelCategoryModuleInner@@AEAAXPEAVElement@DirectUI@@@Z
    void _AddViewByButton(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSectionElement@CControlPanelCategoryModuleInner@@AEAAJPEAVCControlPanelItem@@PEAVCControlPanelTaskEnum@@PEAW4TASKMATCH@@PEAPEAVCControlPanelLink@@@Z
    long _CreateSectionElement(CControlPanelItem *, CControlPanelTaskEnum *, int *, CControlPanelLink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteApplet@CControlPanelCategoryModuleInner@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _ExecuteApplet(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchQuery@CControlPanelCategoryModuleInner@@AEAAJXZ
    long _GetSearchQuery();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadIconSizePref@CControlPanelCategoryModuleInner@@AEAA?AW4CPICONPREF_VAL@@XZ
    int _LoadIconSizePref();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Navigate@CControlPanelCategoryModuleInner@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _Navigate(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClickedViewByButton@CControlPanelCategoryModuleInner@@AEAAXPEAUtagPOINT@@@Z
    void _OnClickedViewByButton(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchHelp@CControlPanelCategoryModuleInner@@AEAAXPEBG@Z
    void _SearchHelp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusToFirstItem@CControlPanelCategoryModuleInner@@AEAAJXZ
    long _SetFocusToFirstItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldAppletOpenInNewWindow@CControlPanelCategoryModuleInner@@AEAA_NPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    bool _ShouldAppletOpenInNewWindow(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAppletContextMenu@CControlPanelCategoryModuleInner@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUtagPOINT@@@Z
    long _ShowAppletContextMenu(_ITEMIDLIST_ABSOLUTE const *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartIconWorkerThread@CControlPanelCategoryModuleInner@@AEAAJPEAVElement@DirectUI@@PEAVCControlPanelItem@@_N@Z
    long _StartIconWorkerThread(::DirectUI::Element *, CControlPanelItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CControlPanelCategoryModuleInner@@AEAA_JI_K_J@Z
    int64_t _WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSheetCallback@CControlPanelCategoryModuleInner@@CAPEAVValue@DirectUI@@PEBGPEAX@Z
    static ::DirectUI::Value * s_GetSheetCallback(unsigned short const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortAppletsInSearchResultsRank@CControlPanelCategoryModuleInner@@CAHPEBUSEARCHRESULTAPPLET@1@0_J@Z
    static int s_SortAppletsInSearchResultsRank(WindissectOpaque const *, WindissectOpaque const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CControlPanelCategoryModuleInner@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
