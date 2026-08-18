#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CLimitedMalloc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@CLimitedMalloc@@UEAAPEAX_K@Z
    virtual void * Alloc(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLimitedMalloc@@SAJ_KAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(uint64_t, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DidAlloc@CLimitedMalloc@@UEAAHPEAX@Z
    virtual int DidAlloc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CLimitedMalloc@@UEAAXPEAX@Z
    virtual void Free(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CLimitedMalloc@@UEAA_KPEAX@Z
    virtual uint64_t GetSize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeapMinimize@CLimitedMalloc@@UEAAXXZ
    virtual void HeapMinimize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realloc@CLimitedMalloc@@UEAAPEAXPEAX_K@Z
    virtual void * Realloc(void *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLimitedMalloc@@UEAA@XZ
    virtual ~CLimitedMalloc();
};
