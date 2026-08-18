#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CCDBurnFolderPropertyStoreFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurnFolderPropertyStoreFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CCDBurnFolderPropertyStoreFactory@@UEAAJW4GETPROPERTYSTOREFLAGS@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(int, IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStoreForKeys@CCDBurnFolderPropertyStoreFactory@@UEAAJPEBU_tagpropertykey@@IW4GETPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStoreForKeys(_tagpropertykey const *, unsigned int, int, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurnFolderPropertyStoreFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurnFolderPropertyStoreFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CCDBurnFolderPropertyStoreFactory@@SAJPEAVCCDBurnFolder@@PEAUIBindCtx@@PEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CCDBurnFolder *, IBindCtx *, _ITEMID_CHILD & volatile *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCDBurnFolderPropertyStoreFactory@@AEAA@PEAVCCDBurnFolder@@@Z
    CCDBurnFolderPropertyStoreFactory(CCDBurnFolder *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCDBurnFolderPropertyStoreFactory@@AEAA@XZ
    ~CCDBurnFolderPropertyStoreFactory();
};
