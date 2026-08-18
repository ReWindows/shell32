#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 48 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CProperTreeModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CProperTreeModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProperTreeModuleInner@@QEAA@XZ
    CProperTreeModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CProperTreeModuleInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CProperTreeModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CProperTreeModuleInner@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CProperTreeModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CProperTreeModuleInner@@QEAAJXZ
    long Load();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CProperTreeModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@CProperTreeModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CProperTreeModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CProperTreeModuleInner@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CProperTreeModuleInner@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CProperTreeModuleInner@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CProperTreeModuleInner@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CProperTreeModuleInner@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CProperTreeModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@CProperTreeModuleInner@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CProperTreeModuleInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CProperTreeModuleInner@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProperTreeModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CProperTreeModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSQMData@CProperTreeModuleInner@@QEAAXK@Z
    void SendSQMData(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CProperTreeModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CProperTreeModuleInner@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?UIActivateIO@CProperTreeModuleInner@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandFolders@CProperTreeModuleInner@@AEAAXH@Z
    void _ExpandFolders(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindFolderTreeHost@CProperTreeModuleInner@@AEAAPEAVCProperTreeHost@@XZ
    CProperTreeHost * _FindFolderTreeHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindSizer@CProperTreeModuleInner@@AEAAPEAVCDUISizerElement@@PEBG@Z
    CDUISizerElement * _FindSizer(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FolderTreeHasFocus@CProperTreeModuleInner@@AEAAHXZ
    int _FolderTreeHasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExpandoSize@CProperTreeModuleInner@@AEAAJPEAH@Z
    long _GetExpandoSize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEventClick@CProperTreeModuleInner@@AEAAHPEAUInputEvent@DirectUI@@PEAH@Z
    int _IsEventClick(::DirectUI::InputEvent *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInputExpando@CProperTreeModuleInner@@AEAAHPEAUInputEvent@DirectUI@@@Z
    int _OnInputExpando(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveSettings@CProperTreeModuleInner@@AEAAJXZ
    long _SaveSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExpandoSize@CProperTreeModuleInner@@AEAAJH@Z
    long _SetExpandoSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncExtent@CProperTreeModuleInner@@AEAAXXZ
    void _SyncExtent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateButton@CProperTreeModuleInner@@AEAAXXZ
    void _UpdateButton();
};
