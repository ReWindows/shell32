#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CTypeAheadSearchHistoryProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CTypeAheadSearchHistoryProvider@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@CTypeAheadSearchHistoryProvider@@UEAAJPEAPEAUHKEY__@@@Z
    virtual long GetKey(HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderType@CTypeAheadSearchHistoryProvider@@UEAAJPEAU_GUID@@@Z
    virtual long GetProviderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreEntryTask@CTypeAheadSearchHistoryProvider@@UEAAJPEBG0AEBU_GUID@@PEAPEAX@Z
    virtual long GetStoreEntryTask(unsigned short const *, unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionsTask@CTypeAheadSearchHistoryProvider@@UEAAJPEBGPEAUIQueryWithLinguisticAlternatives@@0IPEAUITypeAheadProviderEventSink@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetSuggestionsTask(unsigned short const *, IQueryWithLinguisticAlternatives *, unsigned short const *, unsigned int, ITypeAheadProviderEventSink *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTypeAheadSearchHistoryProvider@@UEAAJPEBG00@Z
    virtual long Initialize(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypeAheadSearchHistoryProvider@@UEAA@XZ
    virtual ~CTypeAheadSearchHistoryProvider();
};
