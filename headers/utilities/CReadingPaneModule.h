#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
// Base evidence: CFrameModule (likely; classinfo-template-instantiation).
class CReadingPaneModule {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CReadingPaneModule@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadingPaneModule@@QEAA@XZ
    CReadingPaneModule();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInnerObject@CReadingPaneModule@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateInnerObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CReadingPaneModule@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?LayoutInitialized@CReadingPaneModule@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CReadingPaneModule@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CReadingPaneModule@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CReadingPaneModule@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReadingPaneModule@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CReadingPaneModule@@UEAAKXZ
    virtual unsigned long Release();
};
