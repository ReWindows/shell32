#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CControlPanelIconWorkItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelIconWorkItem@@QEAA@PEAVElement@DirectUI@@PEAVCControlPanelItem@@_N@Z
    CControlPanelIconWorkItem(::DirectUI::Element *, CControlPanelItem *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CControlPanelIconWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CControlPanelIconWorkItem@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CControlPanelIconWorkItem@@QEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CControlPanelIconWorkItem@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CControlPanelIconWorkItem@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@CControlPanelIconWorkItem@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CControlPanelIconWorkItem@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CControlPanelIconWorkItem@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CControlPanelIconWorkItem@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelIconWorkItem@@MEAA@XZ
    virtual ~CControlPanelIconWorkItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadIcon@CControlPanelIconWorkItem@@AEAAJXZ
    long _LoadIcon();
};
