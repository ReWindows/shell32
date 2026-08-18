#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 24 member(s).
class CConflictDialogDataDecorator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConflictDialogDataDecorator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelRequest@CConflictDialogDataDecorator@@UEAAJK@Z
    virtual long CancelRequest(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CConflictDialogDataDecorator@@SAJPEAUIConflictDialogData@@PEAUIConflictDialogCallback@@PEBVCMappingData@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IConflictDialogData *, IConflictDialogCallback *, CMappingData const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictCount@CConflictDialogDataDecorator@@UEAAJPEAK@Z
    virtual long GetConflictCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConflictItemStateCount@CConflictDialogDataDecorator@@UEAAJPEAK000@Z
    virtual long GetConflictItemStateCount(unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetConflictItemsStateCount@CConflictDialogDataDecorator@@UEAAJPEBUINDIVIDUAL_CONFLICT_MAPPING_DATA@@KPEAK111@Z
    virtual long GetConflictItemsStateCount(INDIVIDUAL_CONFLICT_MAPPING_DATA const *, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalConflictState@CConflictDialogDataDecorator@@UEAAJW4CONFLICT_ITEM_DATA_FLAGS@@PEAW4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long GetGlobalConflictState(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsCurrentMode@CConflictDialogDataDecorator@@UEAAJXZ
    virtual long InitializeAsCurrentMode();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConflictDialogDataDecorator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConflictDialogDataDecorator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConflictData@CConflictDialogDataDecorator@@UEAAJK@Z
    virtual long RequestConflictData(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDialogCallback@CConflictDialogDataDecorator@@UEAAJPEAUIConflictDialogCallback@@@Z
    virtual long SetDialogCallback(IConflictDialogCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComplementaryConflictState@CConflictDialogDataDecorator@@UEAAJW4CONFLICT_CHECKBOX_STATE@@0@Z
    virtual long UpdateComplementaryConflictState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConflictItemState@CConflictDialogDataDecorator@@UEAAJUINDIVIDUAL_CONFLICT_MAPPING_DATA@@W4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long UpdateConflictItemState(INDIVIDUAL_CONFLICT_MAPPING_DATA, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateConflictItemsStateFromData@CConflictDialogDataDecorator@@UEAAJPEBUINDIVIDUAL_CONFLICT_MAPPING_DATA@@KW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long UpdateConflictItemsStateFromData(INDIVIDUAL_CONFLICT_MAPPING_DATA const *, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGlobalConflictState@CConflictDialogDataDecorator@@UEAAJW4CONFLICT_ITEM_DATA_FLAGS@@W4CONFLICT_CHECKBOX_STATE@@@Z
    virtual long UpdateGlobalConflictState(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConflictDialogDataDecorator@@UEAA@XZ
    virtual ~CConflictDialogDataDecorator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateKeptCountsOnMasterChange@CConflictDialogDataDecorator@@AEAAXW4CONFLICT_CHECKBOX_STATE@@KKPEAK111@Z
    void s_UpdateKeptCountsOnMasterChange(int, unsigned long, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
};
