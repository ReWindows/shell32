#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CCDBurnFolderPropertyStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurnFolderPropertyStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CCDBurnFolderPropertyStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CCDBurnFolderPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassIdentity@CCDBurnFolderPropertyStore@@UEAAJPEAPEAG@Z
    virtual long GetClassIdentity(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CCDBurnFolderPropertyStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CCDBurnFolderPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurnFolderPropertyStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurnFolderPropertyStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CCDBurnFolderPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CCDBurnFolderPropertyStore@@SAJPEAVCCDBurnFolder@@PEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CCDBurnFolder *, _ITEMID_CHILD & volatile *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCDBurnFolderPropertyStore@@AEAA@PEAVCCDBurnFolder@@@Z
    CCDBurnFolderPropertyStore(CCDBurnFolder *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCDBurnFolderPropertyStore@@AEAA@XZ
    ~CCDBurnFolderPropertyStore();
};
