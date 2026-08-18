#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 12 member(s).
class CRecycleBinBaseEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecycleBinBaseEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRecycleBinBaseEnum@@QEAA@PEAVCRecycleBinBase@@K@Z
    CRecycleBinBaseEnum(CRecycleBinBase *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CRecycleBinBaseEnum@@UEAAJPEAPEAUIEnumRecycleItems@@@Z
    virtual long Clone(IEnumRecycleItems * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CRecycleBinBaseEnum@@UEAAJKPEAUtagDELETEDITEM@@PEAK@Z
    virtual long Next(unsigned long, tagDELETEDITEM *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextCompactData@CRecycleBinBaseEnum@@QEAAJPEAUCompactData@@PEAU_WIN32_FIND_DATAW@@@Z
    long NextCompactData(CompactData *, _WIN32_FIND_DATAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextItem@CRecycleBinBaseEnum@@QEAAJ_NPEAU_WIN32_FIND_DATAW@@@Z
    long NextItem(bool, _WIN32_FIND_DATAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextSizeData@CRecycleBinBaseEnum@@QEAAJPEA_K@Z
    long NextSizeData(uint64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecycleBinBaseEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecycleBinBaseEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CRecycleBinBaseEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CRecycleBinBaseEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRecycleBinBaseEnum@@QEAA@XZ
    ~CRecycleBinBaseEnum();
};
