#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 54 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CPreviewMetadataInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CPreviewMetadataInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreviewMetadataInner@@QEAA@XZ
    CPreviewMetadataInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPreviewMetadataInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewMetadataInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CPreviewMetadataInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CPreviewMetadataInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CPreviewMetadataInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CPreviewMetadataInner@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CPreviewMetadataInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanged@CPreviewMetadataInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CPreviewMetadataInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CPreviewMetadataInner@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CPreviewMetadataInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@CPreviewMetadataInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CPreviewMetadataInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewMetadataInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CPreviewMetadataInner@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelEdits@CPreviewMetadataInner@@IEAAXXZ
    void _CancelEdits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearPreviewPane@CPreviewMetadataInner@@IEAAJXZ
    long _ClearPreviewPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNullSelectPropLists@CPreviewMetadataInner@@IEAAJPEAPEAG0@Z
    long _GetNullSelectPropLists(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNullSelectPropListsFromFolder@CPreviewMetadataInner@@IEAAJPEAPEAG0@Z
    long _GetNullSelectPropListsFromFolder(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewItem@CPreviewMetadataInner@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetViewItem(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Persist@CPreviewMetadataInner@@IEAAXXZ
    void _Persist();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistCore@CPreviewMetadataInner@@IEAAJXZ
    long _PersistCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Remember@CPreviewMetadataInner@@MEAAXPEAVCMetadataElement@@@Z
    virtual void _Remember(CMetadataElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTargetInfo@CPreviewMetadataInner@@IEAAXPEAUIShellItemArray@@PEAUIPropertyStore@@@Z
    void _SetTargetInfo(IShellItemArray *, IPropertyStore *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewMetadataInner@@MEAA@XZ
    virtual ~CPreviewMetadataInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearPane@CPreviewMetadataInner@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void _ClearPane(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearPaneAndSetDefaults@CPreviewMetadataInner@@AEAAXXZ
    void _ClearPaneAndSetDefaults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureNullSelectCache@CPreviewMetadataInner@@AEAAHPEAUIFrameTaskManager@@@Z
    int _EnsureNullSelectCache(IFrameTaskManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillPreviewPane@CPreviewMetadataInner@@AEAAJPEAUIShellItemArray@@KK@Z
    long _FillPreviewPane(IShellItemArray *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireDoneWithFocus@CPreviewMetadataInner@@AEAAXXZ
    void _FireDoneWithFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedCount@CPreviewMetadataInner@@AEAAJPEAI@Z
    long _GetSelectedCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideSaveCancelButtons@CPreviewMetadataInner@@AEAAXXZ
    void _HideSaveCancelButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDifferentSelection@CPreviewMetadataInner@@AEAAHPEAUIShellItemArray@@KK@Z
    int _IsDifferentSelection(IShellItemArray *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMetadataInteractionEvent@CPreviewMetadataInner@@AEAAXPEAVCMetadataElement@@W4REASON@MetadataInteractionEvent@@PEBGH@Z
    void _OnMetadataInteractionEvent(CMetadataElement *, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueUpExtractionWorkItem@CPreviewMetadataInner@@AEAAJPEAUIShellItemArray@@KK@Z
    long _QueueUpExtractionWorkItem(IShellItemArray *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshMetadata@CPreviewMetadataInner@@AEAAJXZ
    long _RefreshMetadata();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetPreviewPane@CPreviewMetadataInner@@AEAAXXZ
    void _ResetPreviewPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItemsShowingMode@CPreviewMetadataInner@@AEAAXW4PREVIEWMETADATA_MODE@1@@Z
    void _SetItemsShowingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSaveCancelButtons@CPreviewMetadataInner@@AEAAXXZ
    void _ShowSaveCancelButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimedClearPane@CPreviewMetadataInner@@AEAAXXZ
    void _StopTimedClearPane();
};
