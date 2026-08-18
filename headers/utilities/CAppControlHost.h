#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
// Base evidence: HWNDFloat (likely; classinfo-template-instantiation).
class CAppControlHost {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CAppControlHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAppControlHost@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CAppControlHost@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@CAppControlHost@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateSize@CAppControlHost@@UEAAJXZ
    virtual long InvalidateSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CAppControlHost@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CAppControlHost@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CAppControlHost@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CAppControlHost@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CAppControlHost@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CAppControlHost@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@CAppControlHost@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppControlHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CAppControlHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppControl@CAppControlHost@@QEAAJPEAUIAppControl@@@Z
    long SetAppControl(IAppControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlEnabled@CAppControlHost@@UEAAJH@Z
    virtual long SetControlEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlVisible@CAppControlHost@@UEAAJH@Z
    virtual long SetControlVisible(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CAppControlHost@@UEAAJXZ
    virtual long SetFocus();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHWND@CAppControlHost@@MEAAPEAUHWND__@@PEAU2@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CAppControlHost@@MEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@CAppControlHost@@MEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
};
