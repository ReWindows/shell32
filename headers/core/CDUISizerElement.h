#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 60 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CDUISizerElement {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CDUISizerElement@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDUISizerElement@@QEAA@XZ
    CDUISizerElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CDUISizerElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownOrRightGrowsTarget@CDUISizerElement@@QEAA_NXZ
    bool GetDownOrRightGrowsTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFramePersistType@CDUISizerElement@@QEAAHXZ
    int GetFramePersistType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrowTargetFirst@CDUISizerElement@@QEAA_NXZ
    bool GetGrowTargetFirst();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialMaxxedOut@CDUISizerElement@@QEAA_NXZ
    bool GetInitialMaxxedOut();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialSize@CDUISizerElement@@QEAAHXZ
    int GetInitialSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialVisibility@CDUISizerElement@@QEAA_NXZ
    bool GetInitialVisibility();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinSize@CDUISizerElement@@QEAAHXZ
    int GetMinSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrioritySizerId@CDUISizerElement@@QEAAGXZ
    unsigned short GetPrioritySizerId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedMasterId@CDUISizerElement@@QEAAGXZ
    unsigned short GetReservedMasterId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedSpace@CDUISizerElement@@QEAAHXZ
    int GetReservedSpace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedTargetId@CDUISizerElement@@QEAAGXZ
    unsigned short GetReservedTargetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlidesUpAndDown@CDUISizerElement@@QEAA_NXZ
    bool GetSlidesUpAndDown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetId@CDUISizerElement@@QEAAGXZ
    unsigned short GetTargetId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CDUISizerElement@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromStream@CDUISizerElement@@QEAAJXZ
    long LoadFromStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CDUISizerElement@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CDUISizerElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CDUISizerElement@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CDUISizerElement@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CDUISizerElement@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CDUISizerElement@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CDUISizerElement@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanging@CDUISizerElement@@UEAA_NPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CDUISizerElement@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@CDUISizerElement@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@CDUISizerElement@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDUISizerElement@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CDUISizerElement@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeByDelta@CDUISizerElement@@QEAAJH@Z
    long ResizeByDelta(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveToStream@CDUISizerElement@@QEAAJXZ
    long SaveToStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialSize@CDUISizerElement@@QEAAJH@Z
    long SetInitialSize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinSize@CDUISizerElement@@QEAAJH@Z
    long SetMinSize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CDUISizerElement@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustTargetSize@CDUISizerElement@@AEAAJXZ
    long _AdjustTargetSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckPaneVisibility@CDUISizerElement@@AEAAXXZ
    void _CheckPaneVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeBoundedSize@CDUISizerElement@@AEAAHH@Z
    int _ComputeBoundedSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLogicalContainerSize@CDUISizerElement@@AEAAJPEAH@Z
    long _GetLogicalContainerSize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPolicyState@CDUISizerElement@@AEAA?AW4POLICYSTATE@@XZ
    int _GetPolicyState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResizeDelta@CDUISizerElement@@AEAAJPEAH@Z
    long _GetResizeDelta(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadMaxxedOutFromPropBag@CDUISizerElement@@AEAAJPEAH@Z
    long _ReadMaxxedOutFromPropBag(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadSizeFromPropBag@CDUISizerElement@@AEAAJPEAH@Z
    long _ReadSizeFromPropBag(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadVisibleFromPropBag@CDUISizerElement@@AEAAJPEAH@Z
    long _ReadVisibleFromPropBag(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Render@CDUISizerElement@@AEAAJXZ
    long _Render();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopListening@CDUISizerElement@@AEAAXXZ
    void _StopListening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteLoadedToPropBag@CDUISizerElement@@AEAAJH@Z
    long _WriteLoadedToPropBag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteMaxxedOutToPropBag@CDUISizerElement@@AEAAJH@Z
    long _WriteMaxxedOutToPropBag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteSizeToPropBag@CDUISizerElement@@AEAAJH@Z
    long _WriteSizeToPropBag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteVisibleToPropBag@CDUISizerElement@@AEAAJH@Z
    long _WriteVisibleToPropBag(int);
};
