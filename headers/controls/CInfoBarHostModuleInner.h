#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 30 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CInfoBarHostModuleInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CInfoBarHostModuleInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInfoBarHostModuleInner@@QEAA@XZ
    CInfoBarHostModuleInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelInform@CInfoBarHostModuleInner@@UEAAJAEBU_GUID@@@Z
    virtual long CancelInform(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CInfoBarHostModuleInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Inform@CInfoBarHostModuleInner@@UEAAJPEAUIInfoBarMessage@@@Z
    virtual long Inform(IInfoBarMessage *);
    // Category: Method | Source: PE Export
    // Symbol: ?LayoutInitialized@CInfoBarHostModuleInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@CInfoBarHostModuleInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CInfoBarHostModuleInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CInfoBarHostModuleInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInfoBarHostModuleInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CInfoBarHostModuleInner@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CInfoBarHostModuleInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CInfoBarHostModuleInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInfoBarHostModuleInner@@UEAA@XZ
    virtual ~CInfoBarHostModuleInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProfferToBrowser@CInfoBarHostModuleInner@@AEAAXH@Z
    void _ProfferToBrowser(int);
};
