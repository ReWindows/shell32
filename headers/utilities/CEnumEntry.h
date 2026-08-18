#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CEnumEntry {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumEntry@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumEntry@@QEAA@XZ
    CEnumEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumEntry@@UEAAJPEAPEAUIEnumTravelLogEntry@@@Z
    virtual long Clone(IEnumTravelLogEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CEnumEntry@@QEAAXPEAVCTravelLog@@PEAUIUnknown@@KK@Z
    void Init(CTravelLog *, IUnknown *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumEntry@@UEAAJKPEAPEAUITravelLogEntry@@PEAK@Z
    virtual long Next(unsigned long, ITravelLogEntry * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumEntry@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumEntry@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumEntry@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBase@CEnumEntry@@QEAAXXZ
    void SetBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumEntry@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumEntry@@IEAA@XZ
    ~CEnumEntry();
};
