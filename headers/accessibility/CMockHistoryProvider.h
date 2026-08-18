#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CMockHistoryProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMockHistoryProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderType@CMockHistoryProvider@@UEAAJPEAU_GUID@@@Z
    virtual long GetProviderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreEntryTask@CMockHistoryProvider@@UEAAJPEBG0AEBU_GUID@@PEAPEAX@Z
    virtual long GetStoreEntryTask(unsigned short const *, unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionsTask@CMockHistoryProvider@@UEAAJPEBGPEAUIQueryWithLinguisticAlternatives@@0IPEAUITypeAheadProviderEventSink@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetSuggestionsTask(unsigned short const *, IQueryWithLinguisticAlternatives *, unsigned short const *, unsigned int, ITypeAheadProviderEventSink *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CMockHistoryProvider@@UEAAJPEBG00@Z
    virtual long Initialize(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMockHistoryProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMockHistoryProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelay@CMockHistoryProvider@@UEAAJI@Z
    virtual long SetDelay(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocaleName@CMockHistoryProvider@@UEAAJPEBG@Z
    virtual long SetLocaleName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuery@CMockHistoryProvider@@UEAAJPEBG@Z
    virtual long SetQuery(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResults@CMockHistoryProvider@@UEAAJIPEAPEBG@Z
    virtual long SetResults(unsigned int, unsigned short const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMockHistoryProvider@@QEAA@XZ
    ~CMockHistoryProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetResultArray@CMockHistoryProvider@@AEAAXXZ
    void _ResetResultArray();
};
