#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 31 member(s).
class CConflictDialogData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConflictDialogData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelRequest@CConflictDialogData@@UEAAJK@Z
    virtual long CancelRequest(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CConflictDialogData@@UEAAJXZ
    virtual long Cleanup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictCount@CConflictDialogData@@UEAAJPEAK@Z
    virtual long GetConflictCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictItemsStateCount@CConflictDialogData@@UEAAJPEBUINDIVIDUAL_CONFLICT_MAPPING_DATA@@KPEAK111@Z
    virtual long GetConflictItemsStateCount(INDIVIDUAL_CONFLICT_MAPPING_DATA const *, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterruptResponseAndCleanup@CConflictDialogData@@UEAAJPEAPEAUOPERATION_INTERRUPT_RESPONSE_AGGREGATED@@@Z
    virtual long GetInterruptResponseAndCleanup(OPERATION_INTERRUPT_RESPONSE_AGGREGATED * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CConflictDialogData@@UEAAJPEAUIConflictInterrupt@@@Z
    virtual long Initialize(IConflictInterrupt *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConflictDialogData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConflictDialogData@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConflictData@CConflictDialogData@@UEAAJK@Z
    virtual long RequestConflictData(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDialogCallback@CConflictDialogData@@UEAAJPEAUIConflictDialogCallback@@@Z
    virtual long SetDialogCallback(IConflictDialogCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailDataReady@CConflictDialogData@@UEAAJKW4CONFLICT_ITEM_DATA_FLAGS@@PEAUHBITMAP__@@@Z
    virtual long ThumbnailDataReady(unsigned long, int, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConflictItemState@CConflictDialogData@@UEAAJUINDIVIDUAL_CONFLICT_MAPPING_DATA@@W4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long UpdateConflictItemState(INDIVIDUAL_CONFLICT_MAPPING_DATA, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConflictItemsStateFromData@CConflictDialogData@@UEAAJPEBUINDIVIDUAL_CONFLICT_MAPPING_DATA@@KW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long UpdateConflictItemsStateFromData(INDIVIDUAL_CONFLICT_MAPPING_DATA const *, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateAndMarshalOnNewSTASyncProc@CConflictDialogData@@SAKPEAX@Z
    static unsigned long s_CreateAndMarshalOnNewSTASyncProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DialogDataWorkerProc@CConflictDialogData@@SAKPEAX@Z
    static unsigned long s_DialogDataWorkerProc(void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConflictDialogData@@IEAA@XZ
    CConflictDialogData();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConflictDialogData@@MEAA@XZ
    virtual ~CConflictDialogData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DialogDataWorkerProc@CConflictDialogData@@AEAAKXZ
    unsigned long _DialogDataWorkerProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrainWorkQueue@CConflictDialogData@@AEAAXXZ
    void _DrainWorkQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessRequestItem@CConflictDialogData@@AEAAXK@Z
    void _ProcessRequestItem(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleWorkItem@CConflictDialogData@@AEAAJW4DIALOG_DATA_WORK_TYPE@1@K@Z
    long _ScheduleWorkItem(int, unsigned long);
};
