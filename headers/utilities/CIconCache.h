#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 30 member(s).
class CIconCache {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIconCache@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSparseIcon@CIconCache@@QEAAHPEBUADDICONSINFO@@HPEBGHI@Z
    int AddSparseIcon(ADDICONSINFO const *, int, unsigned short const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToBackIconTable@CIconCache@@QEAAJPEBUADDICONSINFO@@PEAH@Z
    long AddToBackIconTable(ADDICONSINFO const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToIconTable@CIconCache@@QEAAJPEAVCNonFileTable@@PEBGHIH@Z
    long AddToIconTable(CNonFileTable *, unsigned short const *, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AgeAndPrune@CIconCache@@QEAAHXZ
    int AgeAndPrune();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AgeTable@CIconCache@@QEAAXPEAVCNonFileTable@@@Z
    void AgeTable(CNonFileTable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@CIconCache@@QEAAXXZ
    void Detach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractFromOtherImagelist@CIconCache@@QEAAJPEAUIImageList2@@HHPEAPEAUHICON__@@@Z
    long ExtractFromOtherImagelist(IImageList2*, int, int, HICON__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractIconW@CIconCache@@QEAAJHHHPEAPEAUHICON__@@@Z
    long ExtractIconW(int, int, int, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CIconCache@@QEAAJHHPEAPEAUHBITMAP__@@@Z
    long GetIcon(int, int, HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconResourceInfoGivenILIndex@CIconCache@@QEAAJH_KPEAGPEAHPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long GetIconResourceInfoGivenILIndex(int, uint64_t, unsigned short *, int *, _ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CIconCache@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupBackIconIndex@CIconCache@@QEAAHPEBGHI@Z
    int LookupBackIconIndex(unsigned short const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupFrontIconIndex@CIconCache@@QEAAHPEBGHI@Z
    int LookupFrontIconIndex(unsigned short const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeAgeImageList@CIconCache@@QEAAXHPEAUIImageList2@@HI@Z
    void MaybeAgeImageList(int, IImageList2*, int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIconCache@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLocations@CIconCache@@QEAAJPEAUIStream@@@Z
    long ReadLocations(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectShell32Icon@CIconCache@@QEAAXPEAURECOVERY_ENTRY@@@Z
    void RedirectShell32Icon(RECOVERY_ENTRY *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIconCache@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetContent@CIconCache@@QEAAXXZ
    void ResetContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveIcon@CIconCache@@QEAAJHHPEAUHICON__@@@Z
    long SaveIcon(int, int, HICON__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageListSize@CIconCache@@QEAAJXZ
    long SetImageListSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLocations@CIconCache@@QEAAJPEAUIStream@@@Z
    long WriteLocations(IStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFreeImage@CIconCache@@AEAAHXZ
    int _GetFreeImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconCount@CIconCache@@AEAAHXZ
    int _GetIconCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCaseSensitiveFolder@CIconCache@@AEAAHPEBG@Z
    int _IsCaseSensitiveFolder(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PurgeIcons@CIconCache@@AEAAHHH@Z
    int _PurgeIcons(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetImageListCallback@CIconCache@@AEAAJPEAUIImageList2@@I@Z
    long _SetImageListCallback(IImageList2*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLayerImageListCallback@CIconCache@@AEAAJXZ
    long _SetLayerImageListCallback();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIconCache@@AEAA@XZ
    ~CIconCache();
};
