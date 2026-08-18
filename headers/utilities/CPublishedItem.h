#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 42 member(s).
class CPublishedItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublishedItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUser@CPublishedItem@@UEAAJPEAUIPropertyStoreFactory@@@Z
    virtual long AddUser(IPropertyStoreFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUser@CPublishedItem@@UEAAJPEBG@Z
    virtual long AddUser(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@CPublishedItem@@UEAAJPEAPEAG@Z
    virtual long GetID(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CPublishedItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAt@CPublishedItem@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetUserAt(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAt@CPublishedItem@@UEAAJKPEAPEAG@Z
    virtual long GetUserAt(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserCount@CPublishedItem@@UEAAJPEAK@Z
    virtual long GetUserCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPublishedItem@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublishedItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublishedItem@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllUsers@CPublishedItem@@UEAAJXZ
    virtual long RemoveAllUsers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUser@CPublishedItem@@UEAAJPEBG@Z
    virtual long RemoveUser(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CPublishedItem@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long Resolve(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetID@CPublishedItem@@UEAAJPEBG@Z
    virtual long SetID(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CPublishedItem@@UEAAJPEAUIShellItem@@@Z
    virtual long SetItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateUser@CPublishedItem@@SAJPEAUIUnknown@@_NIPEAPEAU2@@Z
    static long s_CreateUser(IUnknown *, bool, unsigned int, IUnknown * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetXPMap@CPublishedItem@@MEAAJPEAPEBUXMLPROP_ITEM@@@Z
    virtual long _GetXPMap(XMLPROP_ITEM const * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureItem@CPublishedItem@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _EnsureItem(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLinkDeserialized@CPublishedItem@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _EnsureLinkDeserialized(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SerializeLink@CPublishedItem@@AEAAJPEAUIShellLinkW@@@Z
    long _SerializeLink(IShellLinkW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItem@CPublishedItem@@AEAAJPEAUIShellItem@@@Z
    long _SetItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldUseShortcut@CPublishedItem@@AEAAHXZ
    int _ShouldUseShortcut();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublishedItem@@EEAA@XZ
    virtual ~CPublishedItem();
};
