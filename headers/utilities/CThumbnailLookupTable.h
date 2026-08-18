#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 44 member(s).
class CThumbnailLookupTable {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CThumbnailLookupTable@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllNewSystemIconExtractions@CThumbnailLookupTable@@QEAAXXZ
    void ClearAllNewSystemIconExtractions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNewSystemIconExtraction@CThumbnailLookupTable@@QEAAXH@Z
    void ClearNewSystemIconExtraction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearOverlayExtraction@CThumbnailLookupTable@@QEAAXH@Z
    void ClearOverlayExtraction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpContents@CThumbnailLookupTable@@UEAAJHPEAUIDebugOutput@@PEA_K@Z
    virtual long DumpContents(int, IDebugOutput *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeImageForItem@CThumbnailLookupTable@@QEAAXKH@Z
    void FreeImageForItem(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAggregatedImageList@CThumbnailLookupTable@@QEBAJIAEBU_GUID@@PEAPEAX@Z
    long GetAggregatedImageList(unsigned int, _GUID const &, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGangedImageList@CThumbnailLookupTable@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetGangedImageList(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGangedImageListCount@CThumbnailLookupTable@@QEAAJPEAI@Z
    long GetGangedImageListCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconImageList@CThumbnailLookupTable@@QEAAJIAEBU_GUID@@PEAPEAX@Z
    long GetIconImageList(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageListSize@CThumbnailLookupTable@@QEBAJIPEAI@Z
    long GetImageListSize(unsigned int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextImageListIndexForItem@CThumbnailLookupTable@@QEAAHPEAK@Z
    int GetNextImageListIndexForItem(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemIcon@CThumbnailLookupTable@@QEAAJHPEAH@Z
    long GetSystemIcon(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetImageList@CThumbnailLookupTable@@QEAAJH_NPEAI@Z
    long GetTargetImageList(int, bool, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailImageList@CThumbnailLookupTable@@QEBAJIAEBU_GUID@@PEAPEAX@Z
    long GetThumbnailImageList(unsigned int, _GUID const &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitThumbnailLookupTable@CThumbnailLookupTable@@QEAAJIIHHW4TLT_CONFIGFLAGS@@PEAPEAU_IMAGELIST@@@Z
    long InitThumbnailLookupTable(unsigned int, unsigned int, int, int, int, _IMAGELIST * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawingSystemIcon@CThumbnailLookupTable@@QEAA_NHI@Z
    bool IsDrawingSystemIcon(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTempSystemIcon@CThumbnailLookupTable@@QEAA_NH@Z
    bool IsTempSystemIcon(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CThumbnailLookupTable@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThumbnailLookupTable@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CThumbnailLookupTable@@QEAAJHH@Z
    long Resize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageToDraw@CThumbnailLookupTable@@QEAAJHIW4IMAGELIST_TYPE@1@_NPEAUIImageListImageDecorator@@@Z
    long SetImageToDraw(int, unsigned int, int, bool, IImageListImageDecorator *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemIcon@CThumbnailLookupTable@@QEAAJH_NH@Z
    long SetSystemIcon(int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOverlayImageListIfNeeded@CThumbnailLookupTable@@QEAAJI_NAEBU_GUID@@PEAPEAX@Z
    long _CreateOverlayImageListIfNeeded(unsigned int, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTargetImageList@CThumbnailLookupTable@@SAJHKPEAUIGangImageList@@H_NPEAI@Z
    static long s_GetTargetImageList(int, unsigned long, IGangImageList *, int, bool, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailLookupTable@@QEAA@XZ
    ~CThumbnailLookupTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearThumbnailExtraction@CThumbnailLookupTable@@AEAAXHI@Z
    void _ClearThumbnailExtraction(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAggregateImageList@CThumbnailLookupTable@@AEAAJHPEAUIImageList@@0AEBU_GUID@@PEAPEAX@Z
    long _CreateAggregateImageList(int, IImageList *, IImageList *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetPerfectCallback@CThumbnailLookupTable@@AEAAJPEAUIImageList2@@@Z
    long _CreateAndSetPerfectCallback(IImageList2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFixedImageList@CThumbnailLookupTable@@AEAAJI_NAEBU_GUID@@PEAPEAX@Z
    long _CreateFixedImageList(unsigned int, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateImageList@CThumbnailLookupTable@@AEAAJAEBU_GUID@@HH_N0PEAPEAX@Z
    long _CreateImageList(_GUID const &, int, int, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMinimalImageList@CThumbnailLookupTable@@AEAAJAEBU_GUID@@H0PEAPEAX@Z
    long _CreateMinimalImageList(_GUID const &, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePerfectImageList@CThumbnailLookupTable@@AEAAJHHAEBU_GUID@@PEAPEAX@Z
    long _CreatePerfectImageList(int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeNode@CThumbnailLookupTable@@AEAAXHPEAU_tltnode@@@Z
    void _FreeNode(int, _tltnode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextImageListIndex@CThumbnailLookupTable@@AEAAHPEAPEAU_tltnode@@@Z
    int _GetNextImageListIndex(_tltnode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailHeight@CThumbnailLookupTable@@AEAAHH@Z
    int _GetThumbnailHeight(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveThumbnailCallbackFromAggregateIL@CThumbnailLookupTable@@AEAAJPEAUIImageList@@@Z
    long _RemoveThumbnailCallbackFromAggregateIL(IImageList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceAggregated@CThumbnailLookupTable@@AEBAJIHIH@Z
    long _ReplaceAggregated(unsigned int, int, unsigned int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetAggregateImageList@CThumbnailLookupTable@@AEAAJPEAUIAggregateImageList@@H@Z
    long _ResetAggregateImageList(IAggregateImageList *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetImage@CThumbnailLookupTable@@AEAAJPEAU_tltnode@@H@Z
    long _ResetImage(_tltnode *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetOriginalSize@CThumbnailLookupTable@@AEAAXXZ
    void _ResetOriginalSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SnapOriginalImageList@CThumbnailLookupTable@@AEAAJPEAUIImageList@@HHPEAPEAU2@PEA_N@Z
    long _SnapOriginalImageList(IImageList *, int, int, IImageList * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePerfectImageIfNecessary@CThumbnailLookupTable@@AEAAJHIIH@Z
    long _UpdatePerfectImageIfNecessary(int, unsigned int, unsigned int, int);
};
