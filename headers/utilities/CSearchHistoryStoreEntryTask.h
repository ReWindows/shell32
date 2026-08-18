#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CSearchHistoryStoreEntryTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSearchHistoryStoreEntryTask@@SAJPEBG0000AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CSearchHistoryStoreEntryTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchHistoryStoreEntryTask@@UEAA@XZ
    virtual ~CSearchHistoryStoreEntryTask();
};
