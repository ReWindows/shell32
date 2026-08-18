#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CAnimationCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideElementOnAnimationComplete@CAnimationCallback@@QEAAJPEAVElement@DirectUI@@@Z
    long HideElementOnAnimationComplete(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComplete@CAnimationCallback@@UEAAXPEAUIAnimation@@W4ETime@2@@Z
    virtual void OnComplete(IAnimation *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CAnimationCallback@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CAnimationCallback@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@CAnimationCallback@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CAnimationCallback@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CAnimationCallback@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@CAnimationCallback@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSetTime@CAnimationCallback@@UEAAXPEAUIAnimation@@W4ETime@2@@Z
    virtual void OnSetTime(IAnimation *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationCallback@@UEAAKXZ
    virtual unsigned long Release();
};
