#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CSplitButton {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSplitButton@@QEAA@XZ
    CSplitButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSplitButton@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@H@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@CSplitButton@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSplitButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CSplitButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CSplitButton@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CSplitButton@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CSplitButton@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CSplitButton@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CSplitButton@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CSplitButton@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@CSplitButton@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CSplitButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEvaluatingAsyncState@CSplitButton@@QEAAX_N@Z
    void SetEvaluatingAsyncState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CSplitButton@@QEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEBUExplorerCommandItem@@PEAUIServiceProvider@@@Z
    long SetItem(IShellFolder *, _ITEMID_CHILD & volatile *, ExplorerCommandItem const *, IServiceProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSplitButton@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplitButton@@UEAA@XZ
    virtual ~CSplitButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIcon@CSplitButton@@AEAAXH@Z
    void UpdateIcon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoAction@CSplitButton@@AEAAXH@Z
    void _DoAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDisplay@CSplitButton@@AEAAXPEBUExplorerCommandItem@@@Z
    void _UpdateDisplay(ExplorerCommandItem const *);
};
