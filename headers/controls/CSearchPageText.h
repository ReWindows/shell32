#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CSearchPageText {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CSearchPageText@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSearchPageText@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CSearchPageText@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@CSearchPageText@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CSearchPageText@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CSearchPageText@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPageText@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CSearchPageText@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSingleSubQuery@CSearchPageText@@AEAAJPEAUIScope@@PEAUIShellItemArray@@H@Z
    long _CheckSingleSubQuery(IScope *, IShellItemArray *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSubQueryStack@CSearchPageText@@AEAAJPEAUIShellItem@@@Z
    long _CheckSubQueryStack(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateScopeList@CSearchPageText@@AEAAJPEAUIShellItem@@H@Z
    long _GenerateScopeList(IShellItem *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPageText@@EEAA@XZ
    virtual ~CSearchPageText();
};
