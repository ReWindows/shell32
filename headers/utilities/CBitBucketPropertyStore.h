#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CBitBucketPropertyStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitBucketPropertyStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CBitBucketPropertyStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CBitBucketPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassIdentity@CBitBucketPropertyStore@@UEAAJPEAPEAG@Z
    virtual long GetClassIdentity(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CBitBucketPropertyStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CBitBucketPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitBucketPropertyStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitBucketPropertyStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBitBucketPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CBitBucketPropertyStore@@SAJPEAVCBitBucket@@PEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CBitBucket *, _ITEMID_CHILD & volatile *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitBucketPropertyStore@@AEAA@PEAVCBitBucket@@@Z
    CBitBucketPropertyStore(CBitBucket *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitBucketPropertyStore@@AEAA@XZ
    ~CBitBucketPropertyStore();
};
