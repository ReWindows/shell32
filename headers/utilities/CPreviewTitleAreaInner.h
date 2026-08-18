#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 35 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CPreviewTitleAreaInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CPreviewTitleAreaInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreviewTitleAreaInner@@QEAA@XZ
    CPreviewTitleAreaInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPreviewTitleAreaInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewTitleAreaInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?LayoutInitialized@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CPreviewTitleAreaInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CPreviewTitleAreaInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanged@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CPreviewTitleAreaInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewTitleAreaInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CPreviewTitleAreaInner@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewTitleAreaInner@@MEAA@XZ
    virtual ~CPreviewTitleAreaInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureNullSelectCache@CPreviewTitleAreaInner@@AEAA_NPEAUIFrameTaskManager@@@Z
    bool _EnsureNullSelectCache(IFrameTaskManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNullSelectTitleString@CPreviewTitleAreaInner@@AEAAJPEAPEAG@Z
    long _GetNullSelectTitleString(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedCount@CPreviewTitleAreaInner@@AEAAJPEAI@Z
    long _GetSelectedCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewItem@CPreviewTitleAreaInner@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetViewItem(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDifferentSelection@CPreviewTitleAreaInner@@AEAA_NPEAUIShellItemArray@@KK@Z
    bool _IsDifferentSelection(IShellItemArray *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueUpExtractionWorkItem@CPreviewTitleAreaInner@@AEAAJPEAUIShellItemArray@@KK@Z
    long _QueueUpExtractionWorkItem(IShellItemArray *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshMetadata@CPreviewTitleAreaInner@@AEAAJXZ
    long _RefreshMetadata();
};
