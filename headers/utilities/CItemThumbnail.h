#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 26 member(s).
class CItemThumbnail {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CItemThumbnail@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CItemThumbnail@@UEAAJPEAUHDC__@@PEBUtagRECT@@H@Z
    virtual long Draw(HDC__*, tagRECT const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CItemThumbnail@@UEAAJPEBUtagRECT@@PEAU2@@Z
    virtual long GetContentBounds(tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxImageCount@CItemThumbnail@@UEAAJPEAI@Z
    virtual long GetMaxImageCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrefetchTask@CItemThumbnail@@UEAAJHHPEAUIItemThumbnailCallback@@PEAPEAUIFrameWorkItem@@@Z
    virtual long GetPrefetchTask(int, int, IItemThumbnailCallback *, IFrameWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CItemThumbnail@@QEAAJHHHHH@Z
    long Initialize(int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImagePrefetchComplete@CItemThumbnail@@QEAAJAEBUIMAGE_PREFETCH_RESULT@@@Z
    long NotifyImagePrefetchComplete(IMAGE_PREFETCH_RESULT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CItemThumbnail@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CItemThumbnail@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CItemThumbnail@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsync@CItemThumbnail@@UEAAJH@Z
    virtual long SetAsync(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItems@CItemThumbnail@@UEAAJPEAUIShellItemArray@@W4ITSIF@@@Z
    virtual long SetItems(IShellItemArray *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiItemLayout@CItemThumbnail@@UEAAJHHH@Z
    virtual long SetMultiItemLayout(int, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemImage@CItemThumbnail@@AEAAJPEAUIShellFolder@@PEBUCHILDID_AND_ITEM@1@@Z
    long _AddItemImage(IShellFolder *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateChildIdArray@CItemThumbnail@@AEAAJPEAUIShellItemArray@@IPEAV?$CDSA@UCHILDID_AND_ITEM@CItemThumbnail@@@@PEAPEAUIShellFolder@@@Z
    long _CreateChildIdArray(IShellItemArray *, unsigned int, WindissectOpaque *, IShellFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImageLoadSnapSizesAvailable@CItemThumbnail@@AEAAJHHHPEBV?$CDSA@UITEM_IMAGE_RESULT@@@@@Z
    long _EnsureImageLoadSnapSizesAvailable(int, int, int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageScaledRect@CItemThumbnail@@AEAAJPEAUIImageList2@@HUtagSIZE@@PEAUtagRECT@@@Z
    long _GetImageScaledRect(IImageList2*, int, tagSIZE, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaxImageDimensions@CItemThumbnail@@AEAAJPEAUtagRECT@@@Z
    long _GetMaxImageDimensions(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewItemsEqualToCurrent@CItemThumbnail@@AEAAHPEAUIShellFolder@@PEAV?$CDSA@UCHILDID_AND_ITEM@CItemThumbnail@@@@@Z
    int _NewItemsEqualToCurrent(IShellFolder *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseItems@CItemThumbnail@@AEAAXXZ
    void _ReleaseItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetTLT@CItemThumbnail@@AEAAJIH@Z
    long _ResetTLT(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Resize@CItemThumbnail@@AEAAJH@Z
    long _Resize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncPrefetch@CItemThumbnail@@AEAAJHH@Z
    long _SyncPrefetch(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWithImageResult@CItemThumbnail@@AEAAJHPEAUIShellFolder@@AEBUIMAGE_PREFETCH_RESULT@@@Z
    long _UpdateWithImageResult(int, IShellFolder *, IMAGE_PREFETCH_RESULT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ChildIdAndItemDestroyCB@CItemThumbnail@@CAHPEAUCHILDID_AND_ITEM@1@PEAX@Z
    static int s_ChildIdAndItemDestroyCB(WindissectOpaque *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemThumbnail@@AEAA@XZ
    ~CItemThumbnail();
};
