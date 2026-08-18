#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CDetailsContainer {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CDetailsContainer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDetailsContainer@@QEAA@XZ
    CDetailsContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDetailsContainer@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CDetailsContainer@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CDetailsContainer@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CDetailsContainer@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CDetailsContainer@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CDetailsContainer@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CDetailsContainer@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDetailsContainer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CDetailsContainer@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CDetailsContainer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CDetailsContainer@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibilitySetting@CDetailsContainer@@UEAAXPEAH@Z
    virtual void SetVisibilitySetting(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDetailsContainer@@UEAA@XZ
    virtual ~CDetailsContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDUIDetailsPane@CDetailsContainer@@AEAAXXZ
    void DestroyDUIDetailsPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallBackToDUIDetailsPane@CDetailsContainer@@AEAAXXZ
    void FallBackToDUIDetailsPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDetailsPaneHWNDHost@CDetailsContainer@@AEAAJXZ
    long InitDetailsPaneHWNDHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveSQMInfoPaneStateChanging@CDetailsContainer@@AEAAXW4PANE_TRACKING_STATE@1@0@Z
    void _SaveSQMInfoPaneStateChanging(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveToStream@CDetailsContainer@@AEAAJXZ
    long _SaveToStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisibility@CDetailsContainer@@AEAAXH@Z
    void _SetVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@CDetailsContainer@@AEAAXXZ
    void _Update();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePaneTrackingStateFromVisibleSettings@CDetailsContainer@@AEAAXXZ
    void _UpdatePaneTrackingStateFromVisibleSettings();
};
