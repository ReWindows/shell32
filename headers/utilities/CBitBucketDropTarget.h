#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 21 member(s).
class CBitBucketDropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitBucketDropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CBitBucketDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CBitBucketDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CBitBucketDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CBitBucketDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEvaluatingEdpPolicy@CBitBucketDropTarget@@UEAAJPEAH@Z
    virtual long IsEvaluatingEdpPolicy(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitBucketDropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitBucketDropTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDropSourceEnterpriseId@CBitBucketDropTarget@@UEAAJPEBG@Z
    virtual long SetDropSourceEnterpriseId(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDescriptionToDataObject@CBitBucketDropTarget@@AEAAXXZ
    void _AddDescriptionToDataObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckWebFoldersOverride@CBitBucketDropTarget@@AEAAHPEAUIDataObject@@PEAK@Z
    int _CheckWebFoldersOverride(IDataObject *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitBucketDropTarget@@EEAA@XZ
    virtual ~CBitBucketDropTarget();
};
