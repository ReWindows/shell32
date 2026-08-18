#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CEnumExplorerCommandOnEnumUICommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CEnumExplorerCommandOnEnumUICommand@@SAJPEAUIEnumUICommand@@PEAPEAUIEnumExplorerCommand@@@Z
    static long CreateInstance(IEnumUICommand *, IEnumExplorerCommand * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumExplorerCommandOnEnumUICommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumExplorerCommandOnEnumUICommand@@UEAA@XZ
    virtual ~CEnumExplorerCommandOnEnumUICommand();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CEnumExplorerCommandOnEnumUICommand@@MEAAHPEAPEAUIExplorerCommand@@@Z
    virtual int _Next(IExplorerCommand * *);
};
