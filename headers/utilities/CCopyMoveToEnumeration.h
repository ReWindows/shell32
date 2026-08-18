#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CCopyMoveToEnumeration {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCopyMoveToEnumeration@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CCopyMoveToEnumeration@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CCopyMoveToEnumeration@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCopyMoveToEnumeration@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCopyMoveToEnumeration@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@CCopyMoveToEnumeration@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CCopyMoveToEnumeration@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeDupKnownFolders@CCopyMoveToEnumeration@@AEAAJPEAUIShellItem@@@Z
    long _DeDupKnownFolders(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FailIfLocationIsBlocklisted@CCopyMoveToEnumeration@@AEAAJPEAUIShellItem@@@Z
    long _FailIfLocationIsBlocklisted(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKnownFolderDestination@CCopyMoveToEnumeration@@AEAAJIPEAPEAUIExplorerCommand@@@Z
    long _GetKnownFolderDestination(unsigned int, IExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextSubCommand@CCopyMoveToEnumeration@@AEAAJPEAPEAUIExplorerCommand@@@Z
    long _GetNextSubCommand(IExplorerCommand * *);
};
