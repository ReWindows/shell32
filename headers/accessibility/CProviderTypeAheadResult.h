#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CProviderTypeAheadResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProviderTypeAheadResult@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CProviderTypeAheadResult@@SAJPEBGW4SEARCH_TYPEAHEAD_SUGGESTION_SOURCE@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CProviderTypeAheadResult@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeAheadSuggestionSource@CProviderTypeAheadResult@@UEAAJPEAW4SEARCH_TYPEAHEAD_SUGGESTION_SOURCE@@@Z
    virtual long GetTypeAheadSuggestionSource(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProviderTypeAheadResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProviderTypeAheadResult@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProviderTypeAheadResult@@QEAA@XZ
    ~CProviderTypeAheadResult();
};
