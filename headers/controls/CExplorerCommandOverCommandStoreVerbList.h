#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CExplorerCommandOverCommandStoreVerbList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExplorerCommandOverCommandStoreVerbList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExplorerCommandOverCommandStoreVerbList@@QEAA@XZ
    CExplorerCommandOverCommandStoreVerbList();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyAndName@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEAPEAUHKEY__@@PEAPEAG@Z
    virtual long GetKeyAndName(HKEY__* *, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPosition@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEAW4CMDPOS@@PEAU_GUID@@@Z
    virtual long GetPosition(int *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEAUIShellItemArray@@HPEAK@Z
    virtual long GetState(IShellItemArray *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z
    virtual long Invoke(IShellItemArray *, IBindCtx *);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeFromContextMenu@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEBU_CMINVOKECOMMANDINFOEX@@PEAUIShellItemArray@@@Z
    virtual long InvokeFromContextMenu(_CMINVOKECOMMANDINFOEX const *, IShellItemArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExplorerCommandOverCommandStoreVerbList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExplorerCommandOverCommandStoreVerbList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInternalExtensionClasses@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEBU_GUID@@K@Z
    virtual long SetInternalExtensionClasses(_GUID const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyAndName@CExplorerCommandOverCommandStoreVerbList@@UEAAJPEAUHKEY__@@PEBG@Z
    virtual long SetKeyAndName(HKEY__*, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExplorerCommandOverCommandStoreVerbList@@UEAA@XZ
    virtual ~CExplorerCommandOverCommandStoreVerbList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChooseEnabledCommand@CExplorerCommandOverCommandStoreVerbList@@AEAAJPEAUIShellItemArray@@HPEAKPEAPEAUIExplorerCommand@@@Z
    long _ChooseEnabledCommand(IShellItemArray *, int, unsigned long *, IExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CExplorerCommandOverCommandStoreVerbList@@AEAAJPEAUHKEY__@@PEBG@Z
    long _Initialize(HKEY__*, unsigned short const *);
};
