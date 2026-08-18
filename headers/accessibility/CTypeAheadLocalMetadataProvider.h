#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CTypeAheadLocalMetadataProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTypeAheadLocalMetadataProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderType@CTypeAheadLocalMetadataProvider@@UEAAJPEAU_GUID@@@Z
    virtual long GetProviderType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionsTask@CTypeAheadLocalMetadataProvider@@UEAAJPEBGPEAUIQueryWithLinguisticAlternatives@@0IPEAUITypeAheadProviderEventSink@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetSuggestionsTask(unsigned short const *, IQueryWithLinguisticAlternatives *, unsigned short const *, unsigned int, ITypeAheadProviderEventSink *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTypeAheadLocalMetadataProvider@@UEAAJPEBGPEBUTYPEAHEAD_LOCAL_SETTINGS@@@Z
    virtual long Initialize(unsigned short const *, TYPEAHEAD_LOCAL_SETTINGS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTypeAheadLocalMetadataProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTypeAheadLocalMetadataProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypeAheadLocalMetadataProvider@@QEAA@XZ
    ~CTypeAheadLocalMetadataProvider();
};
