#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 27 member(s).
class CConflictInterrupt {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConflictInterrupt@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelRequest@CConflictInterrupt@@UEAAJK@Z
    virtual long CancelRequest(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictCount@CConflictInterrupt@@UEAAJPEAK@Z
    virtual long GetConflictCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictFilterMapping@CConflictInterrupt@@UEAAJW4CONFLICT_FILTER@@PEAPEAUINDIVIDUAL_CONFLICT_MAPPING_DATA@@PEAI12PEAPEAK22@Z
    virtual long GetConflictFilterMapping(int, INDIVIDUAL_CONFLICT_MAPPING_DATA * *, unsigned int *, INDIVIDUAL_CONFLICT_MAPPING_DATA * *, unsigned int *, unsigned long * *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CConflictInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestinationItem@CConflictInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDestinationItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CConflictInterrupt@@UEAAJPEAW4OPERATION_INTERRUPT_FLAGS@@@Z
    virtual long GetFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolutionDescription@CConflictInterrupt@@UEAAJW4RESOLUTION_TYPE@@PEAPEAG1@Z
    virtual long GetResolutionDescription(int, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceItem@CConflictInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSourceItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CConflictInterrupt@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConflictInterrupt@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConflictInterrupt@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConflictData@CConflictInterrupt@@UEAAJKPEAUINDIVIDUAL_CONFLICT_FAST_DATA@@PEAPEAUIShellItem@@1@Z
    virtual long RequestConflictData(unsigned long, INDIVIDUAL_CONFLICT_FAST_DATA *, IShellItem * *, IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConflictItemDataCallback@CConflictInterrupt@@UEAAJPEAUIConflictItemDataCallback@@@Z
    virtual long SetConflictItemDataCallback(IConflictItemDataCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailDataReady@CConflictInterrupt@@UEAAJKW4CONFLICT_ITEM_DATA_FLAGS@@PEAUHBITMAP__@@@Z
    virtual long ThumbnailDataReady(unsigned long, int, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CConflictInterrupt@@SAJPEBUCONFIRM_CONFLICT_PARAMS@@PEAUISyncMgrConflictItems@@PEAUIConflictOperationScheduler@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(CONFIRM_CONFLICT_PARAMS const *, ISyncMgrConflictItems *, IConflictOperationScheduler *, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDestinationItem@CConflictInterrupt@@AEAAJKAEBU_GUID@@PEAPEAX@Z
    long _GetDestinationItem(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemMetadata@CConflictInterrupt@@AEAAJKPEAUIFileOperationConflictItemsMetadata@@PEAUCONFLICT_ITEM_METADATA@@@Z
    long _GetItemMetadata(unsigned long, IFileOperationConflictItemsMetadata *, CONFLICT_ITEM_METADATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSourceItem@CConflictInterrupt@@AEAAJKAEBU_GUID@@PEAPEAX@Z
    long _GetSourceItem(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CConflictInterrupt@@AEAAJPEBUCONFIRM_CONFLICT_PARAMS@@PEAUISyncMgrConflictItems@@PEAUIConflictOperationScheduler@@@Z
    long _Initialize(CONFIRM_CONFLICT_PARAMS const *, ISyncMgrConflictItems *, IConflictOperationScheduler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConflictInterrupt@@AEAA@XZ
    ~CConflictInterrupt();
};
