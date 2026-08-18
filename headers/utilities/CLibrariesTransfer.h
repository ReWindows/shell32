#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CLibrariesTransfer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLibrariesTransfer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CLibrariesTransfer@@UEAAJPEAUITransferAdviseSink@@PEAK@Z
    virtual long Advise(ITransferAdviseSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPropertiesToItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@PEAPEAU2@@Z
    virtual long ApplyPropertiesToItem(IShellItem *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@0PEBGKW4COPY_ITEM_FLAGS@@PEAPEAU2@@Z
    virtual long CopyItem(IShellItem *, IShellItem *, unsigned short const *, unsigned long, int, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterFolder@CLibrariesTransfer@@UEAAJPEAUIShellItem@@@Z
    virtual long EnterFolder(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDestinationName@CLibrariesTransfer@@UEAAJPEAUIShellItem@@0PEAPEAG@Z
    virtual long GetDefaultDestinationName(IShellItem *, IShellItem *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCopySupported@CLibrariesTransfer@@UEAAJPEAUIShellItem@@0PEAH@Z
    virtual long IsCopySupported(IShellItem *, IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LastCopyError@CLibrariesTransfer@@UEAAJPEAW4LAST_COPYITEM_ERROR_TYPE@@@Z
    virtual long LastCopyError(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveFolder@CLibrariesTransfer@@UEAAJPEAUIShellItem@@@Z
    virtual long LeaveFolder(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@0PEBGKPEAPEAU2@@Z
    virtual long LinkItem(IShellItem *, IShellItem *, unsigned short const *, unsigned long, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@0PEBGKPEAPEAU2@@Z
    virtual long MoveItem(IShellItem *, IShellItem *, unsigned short const *, unsigned long, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@KAEBU_GUID@@PEAPEAX@Z
    virtual long OpenItem(IShellItem *, unsigned long, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLibrariesTransfer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@0KPEAPEAU2@@Z
    virtual long RecycleItem(IShellItem *, IShellItem *, unsigned long, IShellItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLibrariesTransfer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@K@Z
    virtual long RemoveItem(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameItem@CLibrariesTransfer@@UEAAJPEAUIShellItem@@PEBGKPEAPEAU2@@Z
    virtual long RenameItem(IShellItem *, unsigned short const *, unsigned long, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@CLibrariesTransfer@@UEAAJPEAUIPropertyChangeArray@@@Z
    virtual long SetProperties(IPropertyChangeArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CLibrariesTransfer@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CLibrariesTransfer@@SAJPEAUITransferSource@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(ITransferSource *, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnshareLocations@CLibrariesTransfer@@AEAAXPEAUIShellItem@@@Z
    void _UnshareLocations(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLibrariesTransfer@@AEAA@XZ
    ~CLibrariesTransfer();
};
