#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CRichTypeAheadResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRichTypeAheadResult@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailText@CRichTypeAheadResult@@UEAAJPEAPEAG@Z
    virtual long GetDetailText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageAlternateText@CRichTypeAheadResult@@UEAAJPEAPEAG@Z
    virtual long GetImageAlternateText(unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImageSource@CRichTypeAheadResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetImageSource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemImageId@CRichTypeAheadResult@@UEAAJPEA_K@Z
    virtual long GetItemImageId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryString@CRichTypeAheadResult@@UEAAJPEAPEAG@Z
    virtual long GetQueryString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItem@CRichTypeAheadResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetShellItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTag@CRichTypeAheadResult@@UEAAJPEAPEAG@Z
    virtual long GetTag(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CRichTypeAheadResult@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CRichTypeAheadResult@@UEAAJPEAW4SEARCH_TYPEAHEAD_ITEM_TYPE@@@Z
    virtual long GetType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeAheadSuggestionSource@CRichTypeAheadResult@@UEAAJPEAW4SEARCH_TYPEAHEAD_SUGGESTION_SOURCE@@@Z
    virtual long GetTypeAheadSuggestionSource(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResultItem@CRichTypeAheadResult@@UEAAJPEAH@Z
    virtual long IsResultItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSeparator@CRichTypeAheadResult@@UEAAJPEAH@Z
    virtual long IsSeparator(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRichTypeAheadResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRichTypeAheadResult@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CRichTypeAheadResult@@SAJPEAUITextTypeAheadResult@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(ITextTypeAheadResult *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CRichTypeAheadResult@@SAJPEBUSEARCH_TYPEAHEAD_ITEM@@W4SEARCH_TYPEAHEAD_SUGGESTION_SOURCE@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(SEARCH_TYPEAHEAD_ITEM const *, int, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichTypeAheadResult@@QEAA@XZ
    ~CRichTypeAheadResult();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRichTypeAheadResult@@AEAA@XZ
    CRichTypeAheadResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromItem@CRichTypeAheadResult@@AEAAJPEBUSEARCH_TYPEAHEAD_ITEM@@W4SEARCH_TYPEAHEAD_SUGGESTION_SOURCE@@@Z
    long _InitFromItem(SEARCH_TYPEAHEAD_ITEM const *, int);
};
