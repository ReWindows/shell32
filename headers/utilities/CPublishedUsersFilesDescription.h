#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 42 member(s).
class CPublishedUsersFilesDescription {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDelegate@CPublishedUsersFilesDescription@@UEAAJPEAUIPublishedItemDescription@@@Z
    virtual long AddDelegate(IPublishedItemDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDiscretionaryShareItem@CPublishedUsersFilesDescription@@UEAAJPEAUIPublishedItemDescription@@@Z
    virtual long AddDiscretionaryShareItem(IPublishedItemDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@CPublishedUsersFilesDescription@@UEAAJPEAUIPublishedItemDescription@@@Z
    virtual long AddItem(IPublishedItemDescription *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublishedUsersFilesDescription@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDelegateAt@CPublishedUsersFilesDescription@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetDelegateAt(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDelegateCount@CPublishedUsersFilesDescription@@UEAAJPEAK@Z
    virtual long GetDelegateCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiscretionaryShareItemAt@CPublishedUsersFilesDescription@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetDiscretionaryShareItemAt(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDiscretionaryShareItemCount@CPublishedUsersFilesDescription@@UEAAJPEAK@Z
    virtual long GetDiscretionaryShareItemCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAt@CPublishedUsersFilesDescription@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GetItemAt(unsigned long, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@CPublishedUsersFilesDescription@@UEAAJPEAK@Z
    virtual long GetItemCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CPublishedUsersFilesDescription@@UEAAJPEAPEAG0000@Z
    virtual long GetOwner(unsigned short * *, unsigned short * *, unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPublishedUsersFilesDescription@@UEAAJPEBG@Z
    virtual long Initialize(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscretionaryShareItemsAllowed@CPublishedUsersFilesDescription@@UEAAJXZ
    virtual long IsDiscretionaryShareItemsAllowed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublishedUsersFilesDescription@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublishedUsersFilesDescription@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDelegate@CPublishedUsersFilesDescription@@UEAAJPEAUIPublishedItemDescription@@@Z
    virtual long RemoveDelegate(IPublishedItemDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDiscretionaryShareItem@CPublishedUsersFilesDescription@@UEAAJPEAUIPublishedItemDescription@@@Z
    virtual long RemoveDiscretionaryShareItem(IPublishedItemDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@CPublishedUsersFilesDescription@@UEAAJPEAUIPublishedItemDescription@@@Z
    virtual long RemoveItem(IPublishedItemDescription *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CPublishedUsersFilesDescription@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long Resolve(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDiscretionaryShareItemsAllowed@CPublishedUsersFilesDescription@@UEAAJH@Z
    virtual long SetDiscretionaryShareItemsAllowed(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CPublishedUsersFilesDescription@@UEAAJPEBG0000@Z
    virtual long SetOwner(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateDiscretionaryShareItem@CPublishedUsersFilesDescription@@SAJPEAUIUnknown@@_NIPEAPEAU2@@Z
    static long s_CreateDiscretionaryShareItem(IUnknown *, bool, unsigned int, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateItem@CPublishedUsersFilesDescription@@SAJPEAUIUnknown@@_NIPEAPEAU2@@Z
    static long s_CreateItem(IUnknown *, bool, unsigned int, IUnknown * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPublishedUsersFilesDescription@@UEAA@XZ
    virtual ~CPublishedUsersFilesDescription();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetXPMap@CPublishedUsersFilesDescription@@MEAAJPEAPEBUXMLPROP_ITEM@@@Z
    virtual long _GetXPMap(XMLPROP_ITEM const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneToUsersProfile@CPublishedUsersFilesDescription@@IEAAXPEAV?$CDPARelease@UIPublishedItemDescription@@V?$CTContainer_PolicyRelease@UIPublishedItemDescription@@@@@@_N@Z
    void _PruneToUsersProfile(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveArray@CPublishedUsersFilesDescription@@IEAAHPEAUHWND__@@PEAV?$CDPARelease@UIPublishedItemDescription@@V?$CTContainer_PolicyRelease@UIPublishedItemDescription@@@@@@@Z
    int _ResolveArray(HWND__*, WindissectOpaque *);
};
