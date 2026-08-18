#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CTopViewCommandEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTopViewCommandEnumerator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CTopViewCommandEnumerator@@UEAAJPEAPEAUIEnumExplorerCommand@@@Z
    virtual long Clone(IEnumExplorerCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CTopViewCommandEnumerator@@UEAAJKPEAPEAUIExplorerCommand@@PEAK@Z
    virtual long Next(unsigned long, IExplorerCommand * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTopViewCommandEnumerator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTopViewCommandEnumerator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTopViewCommandEnumerator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CTopViewCommandEnumerator@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddCanonicalCommand@CTopViewCommandEnumerator@@AEAAJPEBG@Z
    long _AddCanonicalCommand(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCommandDPA@CTopViewCommandEnumerator@@AEAAJXZ
    long _EnsureCommandDPA();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTopViewCommandEnumerator@@AEAA@XZ
    ~CTopViewCommandEnumerator();
};
