#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CSearchHistorySuggestionsTask {
public:
    class SearchHistoryResultItem;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSearchHistorySuggestionsTask@@SAJPEBG000PEAUIQueryWithLinguisticAlternatives@@0IPEAUITypeAheadProviderEventSink@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *, unsigned short const *, unsigned int, ITypeAheadProviderEventSink *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CSearchHistorySuggestionsTask@@UEAAJXZ
    virtual long InternalResumeRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForMruItems@CSearchHistorySuggestionsTask@@QEAAJAEBV?$CAutoArrayMemPtr@VCSearchHistoryString@@@@AEAV?$CCoSimpleArray@USearchHistoryResultItem@CSearchHistorySuggestionsTask@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@USearchHistoryResultItem@CSearchHistorySuggestionsTask@@@@@@@Z
    long _SearchForMruItems(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchHistorySuggestionsTask@@UEAA@XZ
    virtual ~CSearchHistorySuggestionsTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSearchHistoryStringFromMRU@CSearchHistorySuggestionsTask@@AEAAJPEAUIMruDataList@@HAEAVCSearchHistoryString@@PEA_N@Z
    long _GetSearchHistoryStringFromMRU(IMruDataList *, int, CSearchHistoryString &, bool *);
};
