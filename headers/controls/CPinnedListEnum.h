#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CPinnedListEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPinnedListEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z
    CPinnedListEnum(CPinnedList *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CPinnedListEnum@@UEAAJPEAPEAUIEnumFullIDList@@@Z
    virtual long Clone(IEnumFullIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CPinnedListEnum@@UEAAJKPEAPEAU_ITEMIDLIST_ABSOLUTE@@PEAK@Z
    virtual long Next(unsigned long, _ITEMIDLIST_ABSOLUTE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPinnedListEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPinnedListEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPinnedListEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CPinnedListEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    long _NextPidlFromStream(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPinnedListEnum@@AEAA@XZ
    ~CPinnedListEnum();
};
