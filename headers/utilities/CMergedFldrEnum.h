#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CMergedFldrEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMergedFldrEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMergedFldrEnum@@QEAA@PEAVCMergedFolder@@KH@Z
    CMergedFldrEnum(CMergedFolder *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CMergedFldrEnum@@UEAAJPEAPEAUIEnumIDList@@@Z
    virtual long Clone(IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CMergedFldrEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMergedFldrEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMergedFldrEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMergedFldrEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CMergedFldrEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMergedFldrEnum@@MEAA@XZ
    virtual ~CMergedFldrEnum();
};
