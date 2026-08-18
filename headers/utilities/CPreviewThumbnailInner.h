#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 62 member(s).
// Base evidence: CElementWithSite (likely; classinfo-template-instantiation).
class CPreviewThumbnailInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CPreviewThumbnailInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPreviewThumbnailInner@@QEAA@XZ
    CPreviewThumbnailInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPreviewThumbnailInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CPreviewThumbnailInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@CPreviewThumbnailInner@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@CPreviewThumbnailInner@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@CPreviewThumbnailInner@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CPreviewThumbnailInner@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutInitialized@CPreviewThumbnailInner@@UEAAJXZ
    virtual long LayoutInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CPreviewThumbnailInner@@UEAAJPEBG@Z
    virtual long Notify(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CPreviewThumbnailInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CPreviewThumbnailInner@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFileOk@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFileOk(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChange@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFolderChange(IFileDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanged@CPreviewThumbnailInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChanging@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@@Z
    virtual long OnFolderChanging(IFileDialog *, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInnerElementDestroyed@CPreviewThumbnailInner@@UEAAJXZ
    virtual long OnInnerElementDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CPreviewThumbnailInner@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigateAway@CPreviewThumbnailInner@@UEAAJXZ
    virtual long OnNavigateAway();
    // Category: Method | Source: PE Export
    // Symbol: ?OnOverwrite@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_OVERWRITE_RESPONSE@@@Z
    virtual long OnOverwrite(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CPreviewThumbnailInner@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@CPreviewThumbnailInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChange@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnSelectionChange(IFileDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CPreviewThumbnailInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnShareViolation@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_SHAREVIOLATION_RESPONSE@@@Z
    virtual long OnShareViolation(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTypeChange@CPreviewThumbnailInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnTypeChange(IFileDialog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewThumbnailInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CPreviewThumbnailInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CPreviewThumbnailInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@CPreviewThumbnailInner@@MEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@CPreviewThumbnailInner@@MEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewThumbnailInner@@MEAA@XZ
    virtual ~CPreviewThumbnailInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeThumbnailSizes@CPreviewThumbnailInner@@AEAAXXZ
    void ComputeThumbnailSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectToView@CPreviewThumbnailInner@@AEAAJH@Z
    long _ConnectToView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FetchThumbnail@CPreviewThumbnailInner@@AEAAJPEAVCThumbnailControlHost@@UtagSIZE@@@Z
    long _FetchThumbnail(CThumbnailControlHost *, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaxImageCount@CPreviewThumbnailInner@@AEAAHXZ
    int _GetMaxImageCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedCount@CPreviewThumbnailInner@@AEAAJPEAI@Z
    long _GetSelectedCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailControlHost@CPreviewThumbnailInner@@AEAAJPEAPEAVCThumbnailControlHost@@@Z
    long _GetThumbnailControlHost(CThumbnailControlHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasSelection@CPreviewThumbnailInner@@AEAAHXZ
    int _HasSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeDefaultVerb@CPreviewThumbnailInner@@AEAAJXZ
    long _InvokeDefaultVerb();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchContextMenu@CPreviewThumbnailInner@@AEAAJPEBUMouseEvent@DirectUI@@@Z
    long _LaunchContextMenu(::DirectUI::MouseEvent const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueUpFetchWorkItem@CPreviewThumbnailInner@@AEAAJAEBUSELECTION_DEVIRTUALIZATION_PARAMS@@@Z
    long _QueueUpFetchWorkItem(SELECTION_DEVIRTUALIZATION_PARAMS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAndFetch@CPreviewThumbnailInner@@AEAAJPEAUIShellItemArray@@HHH@Z
    long _SetAndFetch(IShellItemArray *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateItems@CPreviewThumbnailInner@@AEAAJHH@Z
    long _UpdateItems(int, int);
};
