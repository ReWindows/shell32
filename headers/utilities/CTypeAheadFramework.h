#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 51 member(s).
class CTypeAheadFramework {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTypeAheadFramework@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToHistory@CTypeAheadFramework@@UEAAJPEBG0@Z
    virtual long AddToHistory(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CTypeAheadFramework@@UEAAJPEAUISearchTypeAheadEventsSink@@PEAK@Z
    virtual long Advise(ISearchTypeAheadEventsSink *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTypeAheadFramework@@QEAA@XZ
    CTypeAheadFramework();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHistory@CTypeAheadFramework@@UEAAJXZ
    virtual long ClearHistory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHistoryMockProvider@CTypeAheadFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetHistoryMockProvider(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalMockProvider@CTypeAheadFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetLocalMockProvider(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTypeAheadFramework@@UEAAJPEBG0I@Z
    virtual long Initialize(unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchQueryChanged@CTypeAheadFramework@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@@Z
    virtual long OnSearchQueryChanged(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideAppSuggestions@CTypeAheadFramework@@UEAAJPEBGPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long ProvideAppSuggestions(unsigned short const *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTypeAheadFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTypeAheadFramework@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResultsReady@CTypeAheadFramework@@UEAAJPEBG0PEAUIObjectArray@@AEBU_GUID@@@Z
    virtual long ResultsReady(unsigned short const *, unsigned short const *, IObjectArray *, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppSearchContext@CTypeAheadFramework@@UEAAJPEBG@Z
    virtual long SetAppSearchContext(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalTypeAheadSettings@CTypeAheadFramework@@UEAAJPEBUTYPEAHEAD_LOCAL_SETTINGS@@@Z
    virtual long SetLocalTypeAheadSettings(TYPEAHEAD_LOCAL_SETTINGS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTypeAheadFlags@CTypeAheadFramework@@UEAAJW4SEARCH_TYPEAHEAD_FLAGS@@@Z
    virtual long SetTypeAheadFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerTimer@CTypeAheadFramework@@UEAAJXZ
    virtual long TriggerTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CTypeAheadFramework@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseMockProviders@CTypeAheadFramework@@UEAAJXZ
    virtual long UseMockProviders();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllRequestedProvidersReportedResults@CTypeAheadFramework@@AEAAHXZ
    int _AllRequestedProvidersReportedResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUpRunningQueries@CTypeAheadFramework@@AEAAXXZ
    void _CleanUpRunningQueries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMaxAllowedResults@CTypeAheadFramework@@AEAAII@Z
    unsigned int _GetMaxAllowedResults(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CTypeAheadFramework@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InstantiateProviders@CTypeAheadFramework@@AEAAJXZ
    long _InstantiateProviders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsQueryCurrent@CTypeAheadFramework@@AEAA_NPEBG0@Z
    bool _IsQueryCurrent(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareHistoryApp@CTypeAheadFramework@@AEAAJPEAUIObjectCollection@@@Z
    long _PrepareHistoryApp(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareHistoryLocal@CTypeAheadFramework@@AEAAJPEAUIObjectCollection@@@Z
    long _PrepareHistoryLocal(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareHistoryLocalApp@CTypeAheadFramework@@AEAAJPEAUIObjectCollection@@@Z
    long _PrepareHistoryLocalApp(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareLocalApp@CTypeAheadFramework@@AEAAJPEAUIObjectCollection@@@Z
    long _PrepareLocalApp(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessNewResults@CTypeAheadFramework@@AEAAJXZ
    long _ProcessNewResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveTrailingSeparators@CTypeAheadFramework@@AEAAJPEAUIObjectCollection@@@Z
    long _RemoveTrailingSeparators(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowFirstResultsBatch@CTypeAheadFramework@@AEAAJXZ
    long _ShowFirstResultsBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSecondResultsBatch@CTypeAheadFramework@@AEAAJXZ
    long _ShowSecondResultsBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreProviderResults@CTypeAheadFramework@@AEAAJIPEAV?$CCoSimpleArray@V?$CComPtr@UISearchTypeAheadResult@@@ATL@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$CComPtr@UISearchTypeAheadResult@@@ATL@@@@@@PEAUIObjectArray@@@Z
    long _StoreProviderResults(unsigned int, WindissectOpaque *, IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CopyResultsWODuplicates@CTypeAheadFramework@@CAJPEAUIObjectCollection@@H000PEAV?$CCoSimpleArray@V?$CComPtr@UISearchTypeAheadResult@@@ATL@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$CComPtr@UISearchTypeAheadResult@@@ATL@@@@@@IIPEAI2@Z
    static long s_CopyResultsWODuplicates(IObjectCollection *, int, IObjectCollection *, IObjectCollection *, IObjectCollection *, WindissectOpaque *, unsigned int, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExistsInCollectionAsNonSeparator@CTypeAheadFramework@@CAJPEBGPEAUIObjectCollection@@PEA_N@Z
    static long s_ExistsInCollectionAsNonSeparator(unsigned short const *, IObjectCollection *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnTimer@CTypeAheadFramework@@CAJPEAUHWND__@@_K@Z
    static long s_OnTimer(HWND__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CTypeAheadFramework@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypeAheadFramework@@EEAA@XZ
    virtual ~CTypeAheadFramework();
};
