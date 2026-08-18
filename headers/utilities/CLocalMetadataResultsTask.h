#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CLocalMetadataResultsTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLocalMetadataResultsTask@@SAJPEBUTYPEAHEAD_LOCAL_SETTINGS@@PEBGPEAUIQueryWithLinguisticAlternatives@@1IPEAUITypeAheadProviderEventSink@@1AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(TYPEAHEAD_LOCAL_SETTINGS const *, unsigned short const *, IQueryWithLinguisticAlternatives *, unsigned short const *, unsigned int, ITypeAheadProviderEventSink *, unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CLocalMetadataResultsTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalMetadataResultsTask@@UEAA@XZ
    virtual ~CLocalMetadataResultsTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoWork@CLocalMetadataResultsTask@@AEAAJIPEBQEBGPEBG@Z
    long _DoWork(unsigned int, unsigned short const * const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OverrideSortOrder@CLocalMetadataResultsTask@@AEAAJPEAUIObjectCollection@@PEAPEAU2@@Z
    long _OverrideSortOrder(IObjectCollection *, IObjectCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RowsetToObjectCollection@CLocalMetadataResultsTask@@AEAAJPEAUIRowset@@IPEBQEBGPEAUIObjectCollection@@@Z
    long _RowsetToObjectCollection(IRowset *, unsigned int, unsigned short const * const *, IObjectCollection *);
};
