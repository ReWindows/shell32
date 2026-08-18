#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CMockLocalProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMockLocalProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderType@CMockLocalProvider@@UEAAJPEAU_GUID@@@Z
    virtual long GetProviderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionsTask@CMockLocalProvider@@UEAAJPEBGPEAUIQueryWithLinguisticAlternatives@@0IPEAUITypeAheadProviderEventSink@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetSuggestionsTask(unsigned short const *, IQueryWithLinguisticAlternatives *, unsigned short const *, unsigned int, ITypeAheadProviderEventSink *, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CMockLocalProvider@@UEAAJPEBGPEBUTYPEAHEAD_LOCAL_SETTINGS@@@Z
    virtual long Initialize(unsigned short const *, TYPEAHEAD_LOCAL_SETTINGS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMockLocalProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMockLocalProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelay@CMockLocalProvider@@UEAAJI@Z
    virtual long SetDelay(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocaleName@CMockLocalProvider@@UEAAJPEBG@Z
    virtual long SetLocaleName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuery@CMockLocalProvider@@UEAAJPEBG@Z
    virtual long SetQuery(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResults@CMockLocalProvider@@UEAAJIPEAPEBG@Z
    virtual long SetResults(unsigned int, unsigned short const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMockLocalProvider@@QEAA@XZ
    ~CMockLocalProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetResultArray@CMockLocalProvider@@AEAAXXZ
    void _ResetResultArray();
};
