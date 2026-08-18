#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 29 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CInfoPaneInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CInfoPaneInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInfoPaneInner@@QEAA@XZ
    CInfoPaneInner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CInfoPaneInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CInfoPaneInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PE Export
    // Symbol: ?Notify@CInfoPaneInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CInfoPaneInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChanged@CInfoPaneInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CInfoPaneInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CInfoPaneInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectedItemChanged@CInfoPaneInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChanged@CInfoPaneInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInfoPaneInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CInfoPaneInner@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInfoPaneInner@@MEAA@XZ
    virtual ~CInfoPaneInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLayout@CInfoPaneInner@@AEAAJXZ
    long _EnsureLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LinkNotifyHandler@CInfoPaneInner@@CAHI_K_JPEA_JPEAX@Z
    static int _LinkNotifyHandler(unsigned int, uint64_t, int64_t, int64_t *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetText@CInfoPaneInner@@AEAAJXZ
    long _SetText();
};
