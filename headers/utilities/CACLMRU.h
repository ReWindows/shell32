#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CACLMRU {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMRUString@CACLMRU@@UEAAJPEBG@Z
    virtual long AddMRUString(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACLMRU@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CACLMRU@@QEAA@XZ
    CACLMRU();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMRU@CACLMRU@@UEAAJXZ
    virtual long ClearMRU();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CACLMRU@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long Clone(IEnumString * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Expand@CACLMRU@@UEAAJPEBG@Z
    virtual long Expand(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CACLMRU@@UEAAJPEBGK@Z
    virtual long Initialize(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CACLMRU@@UEAAJKPEAPEAGPEAK@Z
    virtual long Next(unsigned long, unsigned short * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACLMRU@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACLMRU@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CACLMRU@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@CACLMRU@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CACLMRU@@AEAA@XZ
    ~CACLMRU();
};
