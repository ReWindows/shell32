#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CRecycleBinEnumMgr {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecycleBinEnumMgr@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRecycleBinEnumMgr@@QEAA@PEAVCRecycleBinManager@@K@Z
    CRecycleBinEnumMgr(CRecycleBinManager *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CRecycleBinEnumMgr@@UEAAJPEAPEAUIEnumRecycleItems@@@Z
    virtual long Clone(IEnumRecycleItems * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CRecycleBinEnumMgr@@UEAAJKPEAUtagDELETEDITEM@@PEAK@Z
    virtual long Next(unsigned long, tagDELETEDITEM *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecycleBinEnumMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecycleBinEnumMgr@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CRecycleBinEnumMgr@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CRecycleBinEnumMgr@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextBin@CRecycleBinEnumMgr@@AEAAJXZ
    long _NextBin();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRecycleBinEnumMgr@@AEAA@XZ
    ~CRecycleBinEnumMgr();
};
