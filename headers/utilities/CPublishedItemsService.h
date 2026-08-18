#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 20 member(s).
class CPublishedItemsService {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublishedItemsService@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandleSignaled@CPublishedItemsService@@UEAAJPEAXIIPEAPEAXPEAI@Z
    virtual long OnHandleSignaled(void *, unsigned int, unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContinue@CPublishedItemsService@@UEAAJXZ
    virtual long QueryContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublishedItemsService@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublishedItemsService@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CPublishedItemsService@@UEAAJIPEAPEAXPEAI@Z
    virtual long Start(unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CPublishedItemsService@@UEAAJXZ
    virtual long Stop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasPublishedItems@CPublishedItemsService@@AEAA_NXZ
    bool _HasPublishedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitWaitOnFolderChanges@CPublishedItemsService@@AEAAJXZ
    long _InitWaitOnFolderChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChangeNotify@CPublishedItemsService@@AEAAX_K_J@Z
    void _OnChangeNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldUpdatePublishedItems@CPublishedItemsService@@AEAA_NJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    bool _ShouldUpdatePublishedItems(long, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopService@CPublishedItemsService@@AEAAJXZ
    long _StopService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateLibraries@CPublishedItemsService@@CAKPEAX@Z
    static unsigned long s_UpdateLibraries(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdatePublishedItems@CPublishedItemsService@@CAKPEAX@Z
    static unsigned long s_UpdatePublishedItems(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CPublishedItemsService@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
