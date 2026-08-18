#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CDelegatePropStoreFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDelegatePropStoreFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CDelegatePropStoreFactory@@UEAAJW4GETPROPERTYSTOREFLAGS@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(int, IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStoreForKeys@CDelegatePropStoreFactory@@UEAAJPEBU_tagpropertykey@@IW4GETPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStoreForKeys(_tagpropertykey const *, unsigned int, int, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDelegatePropStoreFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDelegatePropStoreFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CDelegatePropStoreFactory@@SAJPEAUIPropertyStoreFactory@@PEAUIShellFolder@@PEAUIPropertyStore@@PEAUIShellItem@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(IPropertyStoreFactory *, IShellFolder *, IPropertyStore *, IShellItem *, _GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelegatePropStoreFactory@@AEAA@XZ
    CDelegatePropStoreFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AggregatePropStore@CDelegatePropStoreFactory@@AEAAJPEAUIPropertyStore@@W4GETPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    long _AggregatePropStore(IPropertyStore *, int, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelegatePropStoreFactory@@AEAA@XZ
    ~CDelegatePropStoreFactory();
};
