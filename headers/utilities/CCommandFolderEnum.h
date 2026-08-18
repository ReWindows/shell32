#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CCommandFolderEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommandFolderEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommandFolderEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommandFolderEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CCommandFolderEnum@@UEAAJXZ
    virtual long Reset();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CCommandFolderEnum@@MEAAHPEAPEAU_ITEMID_CHILD@@@Z
    virtual int _Next(_ITEMID_CHILD * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ItemFromIExplorerCommand@CCommandFolderEnum@@AEAAJIPEAUIExplorerCommand@@PEAPEAU_ITEMID_CHILD@@@Z
    long _ItemFromIExplorerCommand(unsigned int, IExplorerCommand *, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommandFolderEnum@@EEAA@XZ
    virtual ~CCommandFolderEnum();
};
