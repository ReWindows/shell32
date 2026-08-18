#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 19 member(s).
class CFDFolderNotifySourceWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFDFolderNotifySourceWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFDFolderNotifySourceWrapper@@QEAA@XZ
    CFDFolderNotifySourceWrapper();
    // Category: Method | Source: PE Export
    // Symbol: ?Flush@CFDFolderNotifySourceWrapper@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CFDFolderNotifySourceWrapper@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientCount@CFDFolderNotifySourceWrapper@@UEAAJPEAK@Z
    virtual long GetClientCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvent@CFDFolderNotifySourceWrapper@@UEAAJHPEAPEAX@Z
    virtual long GetEvent(int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDList@CFDFolderNotifySourceWrapper@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFDFolderNotifySourceWrapper@@UEAAJPEAUIChangeNotifySink@@PEAUIShellItem@@H@Z
    virtual long Initialize(IChangeNotifySink *, IShellItem *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFDFolderNotifySourceWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFDFolderNotifySourceWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@CFDFolderNotifySourceWrapper@@UEAAJH@Z
    virtual long Reset(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientCount@CFDFolderNotifySourceWrapper@@UEAAJK@Z
    virtual long SetClientCount(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIDList@CFDFolderNotifySourceWrapper@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CFDFolderNotifySourceWrapper@@UEAAJW4SCNSUSPENDFLAGS@@@Z
    virtual long Suspend(int);
    // Category: Method | Source: PE Export
    // Symbol: ?SuspendDevice@CFDFolderNotifySourceWrapper@@UEAAJHPEAX@Z
    virtual long SuspendDevice(int, void *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFDFolderNotifySourceWrapper@@AEAA@XZ
    ~CFDFolderNotifySourceWrapper();
};
