#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CStandardEnum {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CStandardEnum@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStandardEnum@@QEAA@AEBU_GUID@@HHHPEAXP6AX1PEBXK@Z@Z
    CStandardEnum(_GUID const &, int, int, int, void *, void ( *)(void *, void const *, unsigned long));
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CStandardEnum@@UEAAJPEAPEAVIEnumGeneric@@@Z
    virtual long Clone(IEnumGeneric * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CStandardEnum@@UEAAJKPEAXPEAK@Z
    virtual long Next(unsigned long, void *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStandardEnum@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStandardEnum@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CStandardEnum@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CStandardEnum@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStandardEnum@@UEAA@XZ
    virtual ~CStandardEnum();
};
