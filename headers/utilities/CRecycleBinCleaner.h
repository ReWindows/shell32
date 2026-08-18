#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 10 member(s).
class CRecycleBinCleaner {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRecycleBinCleaner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRecycleBinCleaner@@QEAA@XZ
    CRecycleBinCleaner();
    // Category: Method | Source: PE Export
    // Symbol: ?Deactivate@CRecycleBinCleaner@@UEAAJPEAK@Z
    virtual long Deactivate(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpaceUsed@CRecycleBinCleaner@@UEAAJPEA_KPEAUIEmptyVolumeCacheCallBack@@@Z
    virtual long GetSpaceUsed(uint64_t *, IEmptyVolumeCacheCallBack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRecycleBinCleaner@@UEAAJPEAUHKEY__@@PEBGPEAPEAG2PEAK@Z
    virtual long Initialize(HKEY__*, unsigned short const *, unsigned short * *, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEx@CRecycleBinCleaner@@UEAAJPEAUHKEY__@@PEBG1PEAPEAG22PEAK@Z
    virtual long InitializeEx(HKEY__*, unsigned short const *, unsigned short const *, unsigned short * *, unsigned short * *, unsigned short * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Purge@CRecycleBinCleaner@@UEAAJ_KPEAUIEmptyVolumeCacheCallBack@@@Z
    virtual long Purge(uint64_t, IEmptyVolumeCacheCallBack *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRecycleBinCleaner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRecycleBinCleaner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProperties@CRecycleBinCleaner@@UEAAJPEAUHWND__@@@Z
    virtual long ShowProperties(HWND__*);
};
