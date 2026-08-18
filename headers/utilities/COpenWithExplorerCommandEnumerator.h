#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class COpenWithExplorerCommandEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenWithExplorerCommandEnumerator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenWithExplorerCommandEnumerator@@QEAA@PEAUIUnknown@@PEAUIShellItem@@@Z
    COpenWithExplorerCommandEnumerator(IUnknown *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@COpenWithExplorerCommandEnumerator@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@COpenWithExplorerCommandEnumerator@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenWithExplorerCommandEnumerator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenWithExplorerCommandEnumerator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@COpenWithExplorerCommandEnumerator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@COpenWithExplorerCommandEnumerator@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithExplorerCommandEnumerator@@UEAA@XZ
    virtual ~COpenWithExplorerCommandEnumerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInitialized@COpenWithExplorerCommandEnumerator@@AEAAXXZ
    void _EnsureInitialized();
};
