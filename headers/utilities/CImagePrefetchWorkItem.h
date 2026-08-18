#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CImagePrefetchWorkItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CImagePrefetchWorkItem@@SAJAEBUIMAGE_PREFETCH_PARAMS@@PEAPEAUIFrameWorkItem@@@Z
    static long CreateInstance(IMAGE_PREFETCH_PARAMS const &, IFrameWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CImagePrefetchWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CImagePrefetchWorkItem@@UEAAJXZ
    virtual long DoWork();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImagePrefetchWorkItem@@AEAAJAEBUIMAGE_PREFETCH_PARAMS@@@Z
    long Initialize(IMAGE_PREFETCH_PARAMS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildILIconSize@CImagePrefetchWorkItem@@AEAAJIPEAH@Z
    long _GetChildILIconSize(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaxImageDimensions@CImagePrefetchWorkItem@@AEAAJIPEAUtagRECT@@@Z
    long _GetMaxImageDimensions(unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetILAndLoadSize@CImagePrefetchWorkItem@@AEAAJHHPEAIPEAH1@Z
    long _GetTargetILAndLoadSize(int, int, unsigned int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailImageList@CImagePrefetchWorkItem@@AEAAJIAEBU_GUID@@PEAPEAX@Z
    long _GetThumbnailImageList(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadThumbnail@CImagePrefetchWorkItem@@AEAAJHPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@PEAUIItem@@PEAPEAUISharedBitmap@@@Z
    long _LoadThumbnail(int, IShellFolder2*, _ITEMID_CHILD & volatile *, IItem *, ISharedBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveBmpPtrsFromFirstToFinal@CImagePrefetchWorkItem@@AEAAXXZ
    void _MoveBmpPtrsFromFirstToFinal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchIcon@CImagePrefetchWorkItem@@AEAAJPEAUITEM_IMAGE_RESULT@@PEAUIShellFolder2@@I@Z
    long _PrefetchIcon(ITEM_IMAGE_RESULT *, IShellFolder2*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchImages@CImagePrefetchWorkItem@@AEAAJHPEAUIShellFolder2@@IH@Z
    long _PrefetchImages(int, IShellFolder2*, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrefetchThumbnail@CImagePrefetchWorkItem@@AEAAJHHPEAUITEM_IMAGE_RESULT@@PEAUIShellFolder2@@I@Z
    long _PrefetchThumbnail(int, int, ITEM_IMAGE_RESULT *, IShellFolder2*, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImagePrefetchWorkItem@@EEAA@XZ
    virtual ~CImagePrefetchWorkItem();
};
