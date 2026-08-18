#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CProximityParams {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProximityParams@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProximityParams@@QEAA@XZ
    CProximityParams();
    // Category: Method | Source: PE Export
    // Symbol: ?EnterFolder@CProximityParams@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long EnterFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FoundItem@CProximityParams@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long FoundItem(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProgressDialog@CProximityParams@@UEAAJPEAPEAG0@Z
    virtual long InitializeProgressDialog(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LeaveFolder@CProximityParams@@UEAAJPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z
    virtual long LeaveFolder(IShellFolder *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptUser@CProximityParams@@QEAAJPEBG@Z
    long PromptUser(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProximityParams@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProximityParams@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProximityParams@@QEAA@XZ
    ~CProximityParams();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SniffPath@CProximityParams@@AEAAJPEBG@Z
    long _SniffPath(unsigned short const *);
};
