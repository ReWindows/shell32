#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 25 member(s).
class CPublishedMessage {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddFromArray@CPublishedMessage@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CPublishedMessage@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublishedMessage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CPublishedMessage@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CPublishedMessage@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPublishedMessage@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPublishedMessage@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublishedMessage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublishedMessage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectAt@CPublishedMessage@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateUsersFilesDescription@CPublishedMessage@@SAJPEAUIUnknown@@_NIPEAPEAU2@@Z
    static long s_CreateUsersFilesDescription(IUnknown *, bool, unsigned int, IUnknown * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublishedMessage@@UEAA@XZ
    virtual ~CPublishedMessage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetXPMap@CPublishedMessage@@MEAAJPEAPEBUXMLPROP_ITEM@@@Z
    virtual long _GetXPMap(XMLPROP_ITEM const * *);
};
